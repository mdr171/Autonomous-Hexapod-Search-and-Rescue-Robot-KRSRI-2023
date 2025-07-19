void hc_sr04()
{
  unsigned long currentMillis = millis(); // grab current time

  // task 1
  if (currentMillis - previousMillis_HC1 >= interval_HC1) {

    Serial.print(SRF1.dist());
    Serial.print("\t");

    previousMillis_HC1 = currentMillis;
  }

  // task 2
  if (currentMillis - previousMillis_HC2 >= interval_HC2) {

    Serial.print(SRF2.dist());
    Serial.print("\t");

    previousMillis_HC2 = currentMillis;
  }

  // task 3
  if (currentMillis - previousMillis_HC3 >= interval_HC3) {
      
    Serial.print(SRF3.dist());
    Serial.print("\t");
  
    previousMillis_HC3 = currentMillis;
  }

  // task 4
  if (currentMillis - previousMillis_HC4 >= interval_HC4) {
      
    Serial.print(SRF4.dist());
    Serial.print("\n");
  
    previousMillis_HC4 = currentMillis;
  }

  // task 5
  if (currentMillis - previousMillis_HC5 >= interval_HC5) {
      
    Serial.print(SRF5.dist());
    Serial.print("\t");
  
    previousMillis_HC5 = currentMillis;
  }

  // task 6
  if (currentMillis - previousMillis_HC6 >= interval_HC6) {
      
    Serial.print(SRF6.dist());
    Serial.print("\t");
  
    previousMillis_HC6 = currentMillis;
  }

  // task 7
  if (currentMillis - previousMillis_HC7 >= interval_HC7) {
      
    Serial.print(SRF7.dist());
    Serial.print("\n");
  
    previousMillis_HC7 = currentMillis;
  }

  // // task 8
  // if (currentMillis - previousMillis_HC8 >= interval_HC8) {
      
  //   Serial.print(SRF8.dist());
  //   Serial.print("\n");
  
  //   previousMillis_HC8 = currentMillis;
  // }
}