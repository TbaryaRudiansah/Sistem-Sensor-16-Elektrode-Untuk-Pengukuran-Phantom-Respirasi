#include "AD9833.h"
#include <SPI.h>

// Pin untuk CS AD9833 (FSYNC)
// Pada ATtiny85, PB3 (Pin Fisik 2) akan digunakan sebagai FSYNC_PIN.
#define FSYNC_PIN PB3 // PB3 adalah pin Arduino 2 pada ATtiny85
AD9833 AD(FSYNC_PIN);// Inisialisasi objek AD9833 menggunakan CS pada PB3

void setup() {
  // Inisialisasi SPI.
  // SPI.begin() akan mengkonfigurasi pin SPI standar untuk ATtiny85:
  // MOSI (PB0), MISO (PB1), SCK (PB2).
  SPI.begin();
  pinMode(FSYNC_PIN, OUTPUT);// Atur FSYNC_PIN sebagai output.
  digitalWrite(FSYNC_PIN, HIGH);// Pastikan FSYNC_PIN HIGH secara default sebelum transaksi SPI dimulai.
  AD.begin();// Mulai komunikasi AD9833.
  AD.setWave(AD9833_SINE);// Atur bentuk gelombang ke sinus.

  // Atur frekuensi output ke 10 kHz pada channel 0.
  AD.setFrequency(10000.0, 0);  // Channel 0 biasanya digunakan untuk frekuensi utama.
  AD.setFrequencyChannel(0); // Atur channel frekuensi aktif ke channel 0.
}

void loop() {
  // Tidak ada yang dilakukan di loop untuk contoh ini.
}