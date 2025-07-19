void servo_pergelangan_3()
{
  // servo_pergelangan_3()
  KiriServo2 = 85;    KananServo8 = 88;
  KiriServo5 = 100;    KananServo5 = 84;
  KiriServo8 = 99;    KananServo2 = 83;

  // servo_pergelangan_3()
  PulselenKiriServo8 = (180 - KiriServo8)/180.0*450+150;    PulselenKananServo8 = KananServo8/180.0*450+150;
  PulselenKiriServo5 = (180 - KiriServo5)/180.0*450+150;    PulselenKananServo5 = KananServo5/180.0*450+150;
  PulselenKiriServo2 = (180 - KiriServo2)/180.0*450+150;    PulselenKananServo2 = KananServo2/180.0*450+150;

  // servo_pergelangan_3()
  board1.setPWM(8, 0, PulselenKiriServo8);    board2.setPWM(8, 0, PulselenKananServo8);
  board1.setPWM(5, 0, PulselenKiriServo5);    board2.setPWM(5, 0, PulselenKananServo5);
  board1.setPWM(2, 0, PulselenKiriServo2);    board2.setPWM(2, 0, PulselenKananServo2);
}
