void servo_pergelangan_2()
{
  // servo_pergelangan_2()         
  KiriServo1 = 92;    KananServo7 = 90;
  KiriServo4 = 95;    KananServo4 = 90;
  KiriServo7 = 90;    KananServo1 = 87;

  // servo_pergelangan_2()
  PulselenKiriServo7 = (180 - KiriServo7)/180.0*450+150;    PulselenKananServo7 = KananServo7/180.0*450+150;
  PulselenKiriServo4 = (180 - KiriServo4)/180.0*450+150;    PulselenKananServo4 = KananServo4/180.0*450+150;
  PulselenKiriServo1 = (180 - KiriServo1)/180.0*450+150;    PulselenKananServo1 = KananServo1/180.0*450+150;

  // servo_pergelangan_2()
  board1.setPWM(7, 0, PulselenKiriServo7);    board2.setPWM(7, 0, PulselenKananServo7);
  board1.setPWM(4, 0, PulselenKiriServo4);    board2.setPWM(4, 0, PulselenKananServo4);
  board1.setPWM(1, 0, PulselenKiriServo1);    board2.setPWM(1, 0, PulselenKananServo1);
}
