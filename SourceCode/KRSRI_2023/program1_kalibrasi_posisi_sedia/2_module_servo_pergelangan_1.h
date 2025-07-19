void servo_pergelangan_1()
{
  KiriServo0 = 90 ;    KananServo6 = 91;
  KiriServo3 = 90;    KananServo3 = 95;
  KiriServo6 = 90;    KananServo0 = 95;
          

  PulselenKiriServo0 = (180 - KiriServo0)/180.0*450+150;    PulselenKananServo6 = KananServo6/180.0*450+150;      
  PulselenKiriServo3 = (180 - KiriServo3)/180.0*450+150;    PulselenKananServo3 = KananServo3/180.0*450+150;    
  PulselenKiriServo6 = (180 - KiriServo6)/180.0*450+150;    PulselenKananServo0 = KananServo0/180.0*450+150;

  board1.setPWM(0, 0, PulselenKiriServo0);    board2.setPWM(6, 0, PulselenKananServo6);
  board1.setPWM(3, 0, PulselenKiriServo3);    board2.setPWM(3, 0, PulselenKananServo3);
  board1.setPWM(6, 0, PulselenKiriServo6);    board2.setPWM(0, 0, PulselenKananServo0);
}
