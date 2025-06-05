import numpy as np
import matplotlib.pyplot as plt
import matplotlib.ticker as ticker

# --- NILAI KOMPONEN DIUBAH ---
# Mengatur Resistor menjadi 100 Ohm dan Kapasitor menjadi 100 nF
C1 = 22e-9      # Farad (100 nF)  <-- DIUBAH
R_total = 150    # Ohm             <-- DIUBAH
# --------------------------------

RC = R_total * C1

# 1. Atur Rentang Frekuensi Plot (0.1 Hz hingga 100 kHz)
# Rentang ini masih cocok untuk fc yang baru, jadi tidak perlu diubah
freq_hz_min = 1000
freq_hz_max = 10000000
freq_hz = np.logspace(np.log10(freq_hz_min), np.log10(freq_hz_max), 500)
w_rads = 2 * np.pi * freq_hz

# Rumus magnitude untuk LPF RC pasif
magnitude_linear = 1 / np.sqrt(1 + (w_rads * RC)**2)
epsilon = 1e-12
mag_db = 20 * np.log10(magnitude_linear + epsilon)

# --- Plotting ---
fig, ax = plt.subplots(figsize=(6, 4))

ax.semilogx(freq_hz, mag_db, color='blue', linewidth=1.5)

ax.set_ylabel("Magnitude (dB)")
ax.set_xlabel("Frequency (Hz)")
ax.grid(True, which="both", ls="-", color='lightgray')
ax.set_title('Bode Diagram (Magnitude) - LPF Pasif')

# Atur Batas Sumbu Y
y_min_limit = -40.0
y_max_limit = 5.0
ax.set_ylim([y_min_limit, y_max_limit])

# Atur Ticks Sumbu Y
y_ticks = [-40, -20, 0]
ax.set_yticks(y_ticks)

ax.set_xlim([freq_hz_min, freq_hz_max])

plt.tight_layout()
plt.show()

# --- Informasi Verifikasi (akan menghitung fc baru secara otomatis) ---
fc_teoritis = 1 / (2 * np.pi * RC)
print(f"Resistor: {R_total} Ohm, Kapasitor: {C1*1e9:.0f} nF")
print(f"Frekuensi cut-off (fc) teoritis baru: {fc_teoritis:,.2f} Hz")

# Magnitudo pada frekuensi awal dan akhir plot
print(f"Magnitude pada {freq_hz_min:.1f} Hz: {mag_db[0]:.2f} dB")
print(f"Magnitude pada {freq_hz_max:.1f} Hz: {mag_db[-1]:.2f} dB")

# Verifikasi magnitude pada frekuensi cut-off
mag_at_fc_interp = np.interp(fc_teoritis, freq_hz, mag_db)
print(f"Magnitude terinterpolasi pada fc ({fc_teoritis:,.2f} Hz): {mag_at_fc_interp:.2f} dB")