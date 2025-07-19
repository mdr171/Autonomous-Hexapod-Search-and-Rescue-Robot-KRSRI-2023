void servo_arm_robot()
{
  DepanServo9 = 90;
  DepanServo10 = 20;
  DepanServo11 =  20;
  DepanServo12  = 0;
  
  PulselenDepanServo9 = DepanServo9/180.0*450+150;
  PulselenDepanServo10 = (180-DepanServo10)/180.0*450+150;
  PulselenDepanServo11 = (180-DepanServo11)/180.0*450+150;
  PulselenDepanServo12  = (180-DepanServo12)/180.0*450+150;  
  
  board2.setPWM(9, 0, PulselenDepanServo9);
  board1.setPWM(10, 0, PulselenDepanServo10);
  board2.setPWM(11, 0, PulselenDepanServo11);
  board2.setPWM(12, 0, PulselenDepanServo12);
}
