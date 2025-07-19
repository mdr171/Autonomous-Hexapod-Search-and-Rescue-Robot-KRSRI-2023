void ir_sensor() {
  // Membaca nilai sensor garis
  int sensorValue = analogRead(sensorPin);

  // Menyimpan nilai ambang batas sensor
  int threshold = 500;

  // Mengecek apakah sensor mendeteksi garis atau tidak
  if (sensorValue > threshold) {
    Serial.println("Terdeteksi garis");  
  } else {
    Serial.println("Tidak terdeteksi garis");  
  }

  // Memberi jeda 100ms
  delay(100);
}