void setup() {
  Serial.begin(9600);
  
  board1.begin();
  board2.begin();  
  board1.setPWMFreq(60);
  board2.setPWMFreq(60);
}

void setServoPulse(uint8_t n, double pulse) {
  double pulselength;
  pulselength = 1000000; // 1,000,000 us per second
  pulselength /= 60; // 60 Hz
  pulselength /= 4096; // 12 bits of resolution 
  pulse *= 1000000; // convert to us
  pulse /= pulselength;
  
  board1.setPWM(n, 0, pulse);
  board2.setPWM(n, 0, pulse);
}
