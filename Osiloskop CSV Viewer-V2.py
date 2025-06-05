import tkinter as tk
from tkinter import filedialog, messagebox
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import os

def format_number(val):
    """Formats a number with thousand separators."""
    if val >= 1000:
        return '{:,.0f}'.format(val).replace(',', '.')
    else:
        return str(int(val))

def process_csv(filename):
    """Reads a CSV file and processes the signal data."""
    dt_us = 0.1
    dt = dt_us * 1e-6
    Fs = 1 / dt

    data = pd.read_csv(filename)
    t = np.arange(len(data)) * dt_us
    v_mV = data.iloc[:, 1].values
    L = len(v_mV)

    v_max = np.max(v_mV)
    v_min = np.min(v_mV)
    v_pp = v_max - v_min
    v_rms_full = np.sqrt(np.mean(v_mV ** 2))
    dc_offset = np.mean(v_mV) # <-- ADDED: Calculate DC offset (mean of the signal)
    v_rms_ac = np.sqrt(np.mean((v_mV - dc_offset) ** 2))

    # FFT Calculation
    Y = np.fft.fft(v_mV - dc_offset) # Use the AC component for FFT
    P2 = np.abs(Y / L)
    P1 = P2[:L // 2 + 1]
    P1[1:-1] *= 2
    f = Fs * np.arange(0, L // 2 + 1) / L
    idx = np.argmax(P1[1:]) + 1
    f_dominan = f[idx]
    resolusi_f = Fs / L

    result = {
        'time': t,
        'voltage': v_mV,
        'filename': os.path.basename(filename),
        'v_max': v_max,
        'v_min': v_min,
        'v_pp': v_pp,
        'v_rms_full': v_rms_full,
        'v_rms_ac': v_rms_ac,
        'dc_offset': dc_offset, # <-- ADDED: Add DC offset to the results dictionary
        'f_dominan': f_dominan,
        'periode': 1e3 / f_dominan if f_dominan > 0 else 0,
        'resolusi_f': resolusi_f,
        'duration_us': L * dt_us,
        'samples': L,
        'fs': Fs
    }

    return result

class CSVPlotterApp:
    """A Tkinter GUI application for plotting CSV signal data."""
    def __init__(self, root):
        self.root = root
        self.root.title("Electrical Impedance Tomography Signal")

        # Get screen dimensions
        screen_width = root.winfo_screenwidth()
        screen_height = root.winfo_screenheight()

        # Set window size to match screen size
        self.root.geometry(f"{screen_width}x{screen_height}")
        # To make it truly fullscreen (no title bar), you can uncomment the next line
        # self.root.attributes("-fullscreen", True)

        self.filepaths = []
        self.results = []

        self.frame_top = tk.Frame(root)
        self.frame_top.pack()

        self.btn_upload = tk.Button(self.frame_top, text="Upload CSV", command=self.upload_csv)
        self.btn_upload.pack(side=tk.LEFT, padx=10, pady=10)

        self.btn_reset = tk.Button(self.frame_top, text="Reset", command=self.reset_plot)
        self.btn_reset.pack(side=tk.LEFT, padx=10, pady=10)

        self.canvas_frame = tk.Frame(root)
        self.canvas_frame.pack(expand=True, fill=tk.BOTH)

        self.fig, self.ax = plt.subplots(figsize=(8, 4))
        self.ax.grid(True) # Add oscilloscope-like grid
        self.canvas = FigureCanvasTkAgg(self.fig, master=self.canvas_frame)
        self.canvas.get_tk_widget().pack(expand=True, fill=tk.BOTH)

        self.info_text = tk.Text(root, height=12, width=100, bg="#f5f5f5", font=("Courier", 9)) #<-- Adjusted height
        self.info_text.pack(padx=10, pady=10, fill=tk.X)

        self.colors = ['b', 'r', 'g', 'c', 'm', 'y', 'k']
        self.color_index = 0

    def upload_csv(self):
        """Handle CSV file upload and plotting."""
        filepaths = filedialog.askopenfilenames(filetypes=[("CSV files", "*.csv")])
        if not filepaths:
            return

        for file in filepaths:
            try:
                result = process_csv(file)
                self.results.append(result)

                t = result['time']
                v = result['voltage']
                label = result['filename']
                color = self.colors[self.color_index % len(self.colors)]
                self.color_index += 1

                self.ax.plot(t, v, label=label, color=color, linewidth=1)
                self.ax.grid(True)
                self.display_info(result)

            except Exception as e:
                messagebox.showerror("Error", f"Error processing {file}:\n{str(e)}")
                return

        self.ax.set_title("Signal from CSV")
        self.ax.set_xlabel("Time (µs)")
        self.ax.set_ylabel("Voltage (mV)")
        self.ax.legend()
        self.canvas.draw()

    def reset_plot(self):
        """Reset the plot and all stored data."""
        self.ax.clear()
        self.results.clear()
        self.filepaths.clear()
        self.color_index = 0
        self.info_text.delete(1.0, tk.END)
        self.ax.grid(True) # Re-enable grid after clearing
        self.ax.set_title("Signal from CSV")
        self.ax.set_xlabel("Time (µs)")
        self.ax.set_ylabel("Voltage (mV)")
        self.canvas.draw()

    def display_info(self, result):
        """Display signal parameters in the text box."""
        text = f"""📂 File: {result['filename']}
Durasi      : {format_number(result['duration_us'])} µs ({result['duration_us']/1000:.2f} ms)
Sampel      : {format_number(result['samples'])}
Fs          : {result['fs']/1e6:.2f} MHz
Resolusi FFT: {format_number(result['resolusi_f'])} Hz

Vmax        : {result['v_max']:.2f} mV
Vmin        : {result['v_min']:.2f} mV
Vpp         : {result['v_pp']:.2f} mV
DC Offset   : {result['dc_offset']:.2f} mV
RMS (Full)  : {result['v_rms_full']:.2f} mV
RMS (AC)    : {result['v_rms_ac']:.2f} mV

F Dominan   : {format_number(result['f_dominan'])} Hz
Periode     : {result['periode']:.3f} ms

-----------------------------------------
""" # <-- ADDED: DC Offset display line
        self.info_text.insert(tk.END, text)

# === Run the application ===
if __name__ == "__main__":
    root = tk.Tk()
    app = CSVPlotterApp(root)
    root.mainloop()