#include <Adafruit_PWMServoDriver.h>
#include <Wire.h>

Adafruit_PWMServoDriver board1 = Adafruit_PWMServoDriver(0x40);
Adafruit_PWMServoDriver board2 = Adafruit_PWMServoDriver(0x41);

#define SERVOMIN  125 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  575 // this is the 'maximum' pulse length count (out of 4096)

int servoNumber = 0;

// servo_pergelangan_1()
uint16_t KiriServo6,    KananServo6;
uint16_t KiriServo3,    KananServo3;
uint16_t KiriServo0,    KananServo0;

uint16_t PulselenKiriServo6,    PulselenKananServo6;
uint16_t PulselenKiriServo3,    PulselenKananServo3;
uint16_t PulselenKiriServo0,    PulselenKananServo0;

// servo_pergelangan_2()
uint16_t KiriServo7,    KananServo7;
uint16_t KiriServo4,    KananServo4;
uint16_t KiriServo1,    KananServo1;

uint16_t PulselenKiriServo7,    PulselenKananServo7;
uint16_t PulselenKiriServo4,    PulselenKananServo4;
uint16_t PulselenKiriServo1,    PulselenKananServo1;

// servo_pergelangan_3()
uint16_t KiriServo8,    KananServo8;
uint16_t KiriServo5,    KananServo5;
uint16_t KiriServo2,    KananServo2;

uint16_t PulselenKiriServo8,    PulselenKananServo8;
uint16_t PulselenKiriServo5,    PulselenKananServo5;
uint16_t PulselenKiriServo2,    PulselenKananServo2;

// servo_gripper_capit
uint16_t DepanServo9,           PulselenDepanServo9;
uint16_t DepanServo10,          PulselenDepanServo10;
uint16_t DepanServo11,          PulselenDepanServo11;
uint16_t DepanServo12,          PulselenDepanServo12;
