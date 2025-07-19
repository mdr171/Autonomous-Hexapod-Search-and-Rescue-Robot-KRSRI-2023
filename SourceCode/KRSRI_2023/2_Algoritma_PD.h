const float Kp = 0.5;  // Konstanta Proporsional
const float Kd = 0.2;  // Konstanta Derivatif
float lastError = 0;   // Error sebelumnya
float setPoint = 20;  // Setpoint jarak belok (misalnya, 20 cm)
int kontrol;

void Algoritma_PD() {
  int jarak = SRF1.dist();
  float error = setPoint - jarak;
  kontrol = Kp * error + Kd * (error - lastError);
  kontrol = constrain(kontrol, 0, 180);

  if (jarak <= setPoint) {
    Serial.print("Belok: ");
    Serial.println(kontrol);
  } else {
    Serial.println("Maju");
  }

  Serial.print("Jarak: ");
  Serial.print(jarak);
  Serial.print(" cm\t");
  Serial.print("Kontrol: ");
  Serial.println(kontrol);

  lastError = error;

  delay(1000); // Waktu jeda antar bacaan sensor
}