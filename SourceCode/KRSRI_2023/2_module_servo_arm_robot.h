void servo_arm_robot()
{
  DepanServo9 = 90;
  DepanServo10 = 20;
  DepanServo11 =  20;
  DepanServo12  = 20;

  PulselenDepanServo9 = DepanServo9/180.0*450+150;
  PulselenDepanServo10 = (180-DepanServo10)/180.0*450+150;
  PulselenDepanServo11 = (180-DepanServo11)/180.0*450+150;
  PulselenDepanServo12  = (180-DepanServo12)/180.0*450+150;  
  
  board2.setPWM(9, 0, PulselenDepanServo9);
  board1.setPWM(10, 0, PulselenDepanServo10);
  board2.setPWM(11, 0, PulselenDepanServo11);
  board2.setPWM(12, 0, PulselenDepanServo12);
}

void servo_arm_robot_2()
{
  for (
    DepanServo9 = 90, DepanServo10 = 20,  DepanServo11 =  -20,  DepanServo12  = 0;
                      DepanServo10 <= 85;
                      DepanServo10 +=0.1
  )

  {

    PulselenDepanServo9 = DepanServo9/180.0*450+150;
    PulselenDepanServo10 = (180-DepanServo10)/180.0*450+150;
    PulselenDepanServo11 = (180-DepanServo11)/180.0*450+150;
    PulselenDepanServo12  = (180-DepanServo12)/180.0*450+150;  
    
    board2.setPWM(9, 0, PulselenDepanServo9);
    board1.setPWM(10, 0, PulselenDepanServo10);
    board2.setPWM(11, 0, PulselenDepanServo11);
    board2.setPWM(12, 0, PulselenDepanServo12);
  }
}

void servo_arm_robot_3()
{
  for (
                                          DepanServo11 =  -20,  DepanServo12  = 0;
                                          DepanServo11 <= 10;
                                          DepanServo11 +=0.1
  )

  {

    PulselenDepanServo9 = DepanServo9/180.0*450+150;
    PulselenDepanServo10 = (180-DepanServo10)/180.0*450+150;
    PulselenDepanServo11 = (180-DepanServo11)/180.0*450+150;
    PulselenDepanServo12  = (180-DepanServo12)/180.0*450+150;  
    
    board2.setPWM(9, 0, PulselenDepanServo9);
    board1.setPWM(10, 0, PulselenDepanServo10);
    board2.setPWM(11, 0, PulselenDepanServo11);
    board2.setPWM(12, 0, PulselenDepanServo12);
  }
}

void servo_arm_robot_4()
{
  for (
    DepanServo12 =  0;
    DepanServo12 <= 22;
    DepanServo12 +=0.05
  )

  {

    PulselenDepanServo9 = DepanServo9/180.0*450+150;
    PulselenDepanServo10 = (180-DepanServo10)/180.0*450+150;
    PulselenDepanServo11 = (180-DepanServo11)/180.0*450+150;
    PulselenDepanServo12  = (180-DepanServo12)/180.0*450+150;  
    
    board2.setPWM(9, 0, PulselenDepanServo9);
    board1.setPWM(10, 0, PulselenDepanServo10);
    board2.setPWM(11, 0, PulselenDepanServo11);
    board2.setPWM(12, 0, PulselenDepanServo12);
  }
}

void servo_arm_robot_5()
{
  for (
DepanServo10 = 90;
DepanServo10 >= 20;
DepanServo10 -=0.1
  )

  {

    PulselenDepanServo9 = DepanServo9/180.0*450+150;
    PulselenDepanServo10 = (180-DepanServo10)/180.0*450+150;
    PulselenDepanServo11 = (180-DepanServo11)/180.0*450+150;
    PulselenDepanServo12  = (180-DepanServo12)/180.0*450+150;  
    
    board2.setPWM(9, 0, PulselenDepanServo9);
    board1.setPWM(10, 0, PulselenDepanServo10);
    board2.setPWM(11, 0, PulselenDepanServo11);
    board2.setPWM(12, 0, PulselenDepanServo12);
  }
}

void servo_arm_robot_6()
{
  for (
    DepanServo9 = 90, DepanServo10 = 85,  DepanServo11 =  -20,  DepanServo12  = 0;
    DepanServo9 >= 70;
    DepanServo9 -=0.1
  )

  {

    PulselenDepanServo9 = DepanServo9/180.0*450+150;
    PulselenDepanServo10 = (180-DepanServo10)/180.0*450+150;
    PulselenDepanServo11 = (180-DepanServo11)/180.0*450+150;
    PulselenDepanServo12  = (180-DepanServo12)/180.0*450+150;  
    
    board2.setPWM(9, 0, PulselenDepanServo9);
    board1.setPWM(10, 0, PulselenDepanServo10);
    board2.setPWM(11, 0, PulselenDepanServo11);
    board2.setPWM(12, 0, PulselenDepanServo12);
  }
}

void servo_arm_robot_7()
{
  for (
    DepanServo9 = 70, DepanServo10 = 85,  DepanServo11 =  -20,  DepanServo12  = 0;
    DepanServo9 <= 90;
    DepanServo9 +=0.1
  )

  {

    PulselenDepanServo9 = DepanServo9/180.0*450+150;
    PulselenDepanServo10 = (180-DepanServo10)/180.0*450+150;
    PulselenDepanServo11 = (180-DepanServo11)/180.0*450+150;
    PulselenDepanServo12  = (180-DepanServo12)/180.0*450+150;  
    
    board2.setPWM(9, 0, PulselenDepanServo9);
    board1.setPWM(10, 0, PulselenDepanServo10);
    board2.setPWM(11, 0, PulselenDepanServo11);
    board2.setPWM(12, 0, PulselenDepanServo12);
  }
}

void servo_arm_robot_8()
{
  for (
    DepanServo9 = 90, DepanServo10 = 85,  DepanServo11 =  -20,  DepanServo12  = 0;
    DepanServo9 <= 110;
    DepanServo9 +=0.1
  )

  {

    PulselenDepanServo9 = DepanServo9/180.0*450+150;
    PulselenDepanServo10 = (180-DepanServo10)/180.0*450+150;
    PulselenDepanServo11 = (180-DepanServo11)/180.0*450+150;
    PulselenDepanServo12  = (180-DepanServo12)/180.0*450+150;  
    
    board2.setPWM(9, 0, PulselenDepanServo9);
    board1.setPWM(10, 0, PulselenDepanServo10);
    board2.setPWM(11, 0, PulselenDepanServo11);
    board2.setPWM(12, 0, PulselenDepanServo12);
  }
}