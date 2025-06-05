/c
}

void pergerakan1() {
  for (int i = 2; i <= 15; ++i) {
    setChannel(txOutputStates, 0, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
    setChannel(txOutputStates, 1, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
    delay(100);
  }
}

void pergerakan2() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 1, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 2, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);

  // RX state berubah dari 3 hingga 15, lalu kembali ke 0
  for (int i = 4; i <= 15; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }

  // Kembali ke channel 0 setelah mencapai 15
  setChannel(rxOutputStates, 15, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 0, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
}

void pergerakan3() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 2, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 3, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);

  // RX state berubah dari 3 hingga 15, lalu kembali ke 0
  for (int i = 5; i <= 15; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }

  // Kembali ke channel 0 setelah mencapai 15
  setChannel(rxOutputStates, 15, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 0, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  setChannel(rxOutputStates, 0, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
}

void pergerakan4() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 3, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 4, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);

  // RX state berubah dari 3 hingga 15, lalu kembali ke 0
  for (int i = 6; i <= 15; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }

  // Kembali ke channel 0 setelah mencapai 15
  setChannel(rxOutputStates, 15, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 0, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  setChannel(rxOutputStates, 0, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  setChannel(rxOutputStates, 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 2, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
}

void pergerakan5() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 4, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 5, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);

  // RX state berubah dari 3 hingga 15, lalu kembali ke 0
  for (int i = 7; i <= 15; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }

  // Kembali ke channel 0 setelah mencapai 15
  setChannel(rxOutputStates, 15, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 0, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  setChannel(rxOutputStates, 0, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  for (int i = 2; i <= 3; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }
}

void pergerakan6() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 5, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 6, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);

  // RX state berubah dari 3 hingga 15, lalu kembali ke 0
  for (int i = 8; i <= 15; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }

  // Kembali ke channel 0 setelah mencapai 15
  setChannel(rxOutputStates, 15, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 0, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  setChannel(rxOutputStates, 0, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  for (int i = 2; i <= 4; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }
}

void pergerakan7() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 6, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 7, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);

  // RX state berubah dari 3 hingga 15, lalu kembali ke 0
  for (int i = 9; i <= 15; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }

  // Kembali ke channel 0 setelah mencapai 15
  setChannel(rxOutputStates, 15, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 0, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  setChannel(rxOutputStates, 0, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  for (int i = 2; i <= 5; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }
}

void pergerakan8() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 7, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 8, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);

  // RX state berubah dari 3 hingga 15, lalu kembali ke 0
  for (int i = 10; i <= 15; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }

  // Kembali ke channel 0 setelah mencapai 15
  setChannel(rxOutputStates, 15, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 0, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  setChannel(rxOutputStates, 0, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  for (int i = 2; i <= 6; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }
}

void pergerakan9() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 8, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 9, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);

  // RX state berubah dari 3 hingga 15, lalu kembali ke 0
  for (int i = 11; i <= 15; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }

  // Kembali ke channel 0 setelah mencapai 15
  setChannel(rxOutputStates, 15, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 0, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  setChannel(rxOutputStates, 0, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  for (int i = 2; i <= 7; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }
}

void pergerakan10() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 9, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 10, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);

  // RX state berubah dari 3 hingga 15, lalu kembali ke 0
  for (int i = 12; i <= 15; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }

  // Kembali ke channel 0 setelah mencapai 15
  setChannel(rxOutputStates, 15, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 0, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  setChannel(rxOutputStates, 0, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(1000);
  for (int i = 2; i <= 8; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }
}

void pergerakan11() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 10, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 11, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);

  // RX state berubah dari 3 hingga 15, lalu kembali ke 0
  for (int i = 13; i <= 15; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }

  // Kembali ke channel 0 setelah mencapai 15
  setChannel(rxOutputStates, 15, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 0, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  setChannel(rxOutputStates, 0, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  for (int i = 2; i <= 9; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }
}

void pergerakan12() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 11, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 12, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);

  // RX state berubah dari 3 hingga 15, lalu kembali ke 0
  for (int i = 14; i <= 15; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }

  // Kembali ke channel 0 setelah mencapai 15
  setChannel(rxOutputStates, 15, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 0, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  setChannel(rxOutputStates, 0, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  for (int i = 2; i <= 10; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }
}

void pergerakan13() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 12, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 13, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(rxOutputStates, 14, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
  setChannel(rxOutputStates, 15, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
  delay(100);
  // Kembali ke channel 0 setelah mencapai 15
  setChannel(rxOutputStates, 15, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 0, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  setChannel(rxOutputStates, 0, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  for (int i = 2; i <= 11; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }
}

void pergerakan14() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 13, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 14, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(rxOutputStates, 15, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
  setChannel(rxOutputStates, 0, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
  delay(100);
  setChannel(rxOutputStates, 0, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  delay(100);
  for (int i = 2; i <= 12; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }
}

void pergerakan15() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 14, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 15, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(rxOutputStates, 0, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
  setChannel(rxOutputStates, 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
  delay(100);
  for (int i = 2; i <= 13; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }
}

void pergerakan16() {
  // TX state tetap, set secara langsung sebelum perulangan
  setChannel(txOutputStates, 15, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, 0, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  for (int i = 2; i <= 14; i++) {
    setChannel(rxOutputStates, i - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN); // Matikan channel sebelumnya
    setChannel(rxOutputStates, i, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);      // Aktifkan channel saat ini
    delay(100);
  }
}

void manualMode() {
  int txLow = -1, txHigh = -1, rxLow = -1, rxHigh = -1;

  // Input TX Low
  Serial.println("Masukkan angka untuk TX Low (1-16):");
  while (txLow < 1 || txLow > 16) {
    while (Serial.available() == 0) {} // Tunggu input dari Serial
    txLow = Serial.parseInt();
    if (txLow < 1 || txLow > 16) {
      Serial.println("Input tidak valid. Pastikan angka berada dalam rentang 1-16.");
    }
  }

  // Input TX High
  Serial.println("Masukkan angka untuk TX High (1-16):");
  while (txHigh < 1 || txHigh > 16) {
    while (Serial.available() == 0) {}
    txHigh = Serial.parseInt();
    if (txHigh < 1 || txHigh > 16) {
      Serial.println("Input tidak valid. Pastikan angka berada dalam rentang 1-16.");
    }
  }

  // Input RX Low
  Serial.println("Masukkan angka untuk RX Low (1-16):");
  while (rxLow < 1 || rxLow > 16) {
    while (Serial.available() == 0) {}
    rxLow = Serial.parseInt();
    if (rxLow < 1 || rxLow > 16) {
      Serial.println("Input tidak valid. Pastikan angka berada dalam rentang 1-16.");
    }
  }

  // Input RX High
  Serial.println("Masukkan angka untuk RX High (1-16):");
  while (rxHigh < 1 || rxHigh > 16) {
    while (Serial.available() == 0) {}
    rxHigh = Serial.parseInt();
    if (rxHigh < 1 || rxHigh > 16) {
      Serial.println("Input tidak valid. Pastikan angka berada dalam rentang 1-16.");
    }
  }

  // Mengatur channel sesuai input
  setChannel(txOutputStates, txLow - 1, false, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(txOutputStates, txHigh - 1, true, TX_LATCH_PIN, TX_DATA_PIN, TX_CLOCK_PIN);
  setChannel(rxOutputStates, rxLow - 1, false, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);
  setChannel(rxOutputStates, rxHigh - 1, true, RX_LATCH_PIN, RX_DATA_PIN, RX_CLOCK_PIN);

  Serial.println("Channel telah diatur.");
  
  // Menampilkan saluran yang telah diatur
  Serial.print("TX Low: "); Serial.println(txLow);
  Serial.print("TX High: "); Serial.println(txHigh);
  Serial.print("RX Low: "); Serial.println(rxLow);
  Serial.print("RX High: "); Serial.println(rxHigh);
}


void loop() {
  if (Serial.available() > 0) {
    char mode = Serial.read();
    Serial.read(); // Baca karakter newline setelah mode input
    if (mode == 'A' || mode == 'a') {
      isAutomatic = true;
      Serial.println("Mode otomatis aktif.");
    } else if (mode == 'M' || mode == 'm') {
      isAutomatic = false;
      Serial.println("Mode manual aktif.");
      manualMode();
    }
  }

  if (isAutomatic) {
    pergerakan1();
    pergerakan2();
    pergerakan3();
    pergerakan4();
    pergerakan5();
    pergerakan6();
    pergerakan7();
    pergerakan8();
    pergerakan9();
    pergerakan10();
    pergerakan11();
    pergerakan12();
    pergerakan13();
    pergerakan14();
    pergerakan15();
    pergerakan16();
  }
}