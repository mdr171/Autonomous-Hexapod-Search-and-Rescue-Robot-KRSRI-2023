// Variabel untuk menyimpan frekuensi yang dibaca oleh fotodioda
int redFrequency = 0;
int greenFrequency = 0;
int blueFrequency = 0;

// Variabel untuk mengatur waktu penundaan
unsigned long previousMillis_R = 0;
unsigned long previousMillis_G = 0;
unsigned long previousMillis_B = 0;
const unsigned long delayTime_R = 10;
const unsigned long delayTime_G = 10;
const unsigned long delayTime_B = 10;

void tcs3200() {

  unsigned long currentMillis = millis(); // grab current time

  // task 1
  if (currentMillis - previousMillis_R >= delayTime_R) {

  // Mengatur fotodioda dengan filter MERAH (R) untuk dibaca
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);

  // Membaca frekuensi keluaran
  redFrequency = pulseIn(sensorOut, LOW);

  // Mencetak nilai MERAH (R)
  Serial.print("R = ");
  Serial.print(redFrequency);
  Serial.print("\t");

  previousMillis_R = currentMillis;
  }

  // task 2
  if (currentMillis - previousMillis_G >= delayTime_G) {

    // Mengatur fotodioda dengan filter HIJAU (G) untuk dibaca
    digitalWrite(S2, HIGH);
    digitalWrite(S3, HIGH);

    // Membaca frekuensi keluaran
    greenFrequency = pulseIn(sensorOut, LOW);

    // Mencetak nilai HIJAU (G)
    Serial.print("G = ");
    Serial.print(greenFrequency);
    Serial.print("\t");

    previousMillis_G = currentMillis;
  }

  // task 3
  if (currentMillis - previousMillis_B >= delayTime_B) {

    // Mengatur fotodioda dengan filter BIRU (B) untuk dibaca
    digitalWrite(S2, LOW);
    digitalWrite(S3, HIGH);

    // Membaca frekuensi keluaran
    blueFrequency = pulseIn(sensorOut, LOW);

    // Mencetak nilai BIRU (B)
    Serial.print("B = ");
    Serial.print(blueFrequency);
    Serial.print("\n");

    previousMillis_B = currentMillis;
  }
}