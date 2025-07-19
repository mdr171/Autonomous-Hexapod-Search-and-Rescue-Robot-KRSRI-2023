// tcs3200 =========================================================================================================

#define S0 42
#define S1 41
#define S2 40
#define S3 39
#define sensorOut 38

// sensor garis ====================================================================================================

int sensorPin = A0;

// mpu9250 =========================================================================================================

#include "MPU9250.h"

MPU9250 mpu;

// hc-sr04 =========================================================================================================

#include <Wire.h>
#include <HCSR04.h>

unsigned long previousMillis_HC1 = 0; // millis() returns an unsigned long.
unsigned long previousMillis_HC2 = 0; // millis() returns an unsigned long.
unsigned long previousMillis_HC3 = 0; // millis() returns an unsigned long.
unsigned long previousMillis_HC4 = 0; // millis() returns an unsigned long.
unsigned long previousMillis_HC5 = 0; // millis() returns an unsigned long.
unsigned long previousMillis_HC6 = 0; // millis() returns an unsigned long.
unsigned long previousMillis_HC7 = 0; // millis() returns an unsigned long.
unsigned long previousMillis_HC8 = 0; // millis() returns an unsigned long.

unsigned long interval_HC1 = 1000; // the time we need to wait
unsigned long interval_HC2 = 1000; // the time we need to wait
unsigned long interval_HC3 = 1000; // the time we need to wait
unsigned long interval_HC4 = 1000; // the time we need to wait
unsigned long interval_HC5 = 1000; // the time we need to wait
unsigned long interval_HC6 = 1000; // the time we need to wait
unsigned long interval_HC7 = 1000; // the time we need to wait
unsigned long interval_HC8 = 1000; // the time we need to wait

// HCSR04 SRF1(trigPin, echoPin); 
HCSR04 SRF1(2, 3);
HCSR04 SRF2(4, 5);
HCSR04 SRF3(6, 7);
HCSR04 SRF4(8, 9);
HCSR04 SRF5(10,11);
HCSR04 SRF6(12,13);
HCSR04 SRF7(14, 15);
HCSR04 SRF8(16, 17);

// servo ===========================================================================================================

#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver board1 = Adafruit_PWMServoDriver(0x40);
Adafruit_PWMServoDriver board2 = Adafruit_PWMServoDriver(0x41);

#define SERVOMIN  125 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  575 // this is the 'maximum' pulse length count (out of 4096)

int servoNumber = 0;

// kalibrasi
int KalibrasiKiriServo0 = 0,   KalibrasiKananServo0 = 5;
int KalibrasiKiriServo3 = -3,   KalibrasiKananServo3 = 5;
int KalibrasiKiriServo6 = 0,   KalibrasiKananServo6 = 1;

int KalibrasiKiriServo1 = -2,  KalibrasiKananServo1 = -3;
int KalibrasiKiriServo4 = -10,   KalibrasiKananServo4 = 5;
int KalibrasiKiriServo7 = 3,  KalibrasiKananServo7 = 0;

int KalibrasiKiriServo2 = 5,  KalibrasiKananServo2 = -7;
int KalibrasiKiriServo5 = -13,  KalibrasiKananServo5 = -6;
int KalibrasiKiriServo8 = -9,  KalibrasiKananServo8 = -2;
  
// pergelangan kanan 1
uint16_t KananServo0,   PulselenKananServo0;
uint16_t KananServo3,   PulselenKananServo3;
uint16_t KananServo6,   PulselenKananServo6;

uint16_t KananServo0Kombinasi,   PulselenKananServo0Kombinasi;
uint16_t KananServo3Kombinasi,   PulselenKananServo3Kombinasi;
uint16_t KananServo6Kombinasi,   PulselenKananServo6Kombinasi;

// pergelangan kanan 2
float    KananServo1,   PulselenKananServo1;
float    KananServo4,   PulselenKananServo4;
float    KananServo7,   PulselenKananServo7;

uint16_t KananServo1Kombinasi,   PulselenKananServo1Kombinasi;
uint16_t KananServo4Kombinasi,   PulselenKananServo4Kombinasi;
uint16_t KananServo7Kombinasi,   PulselenKananServo7Kombinasi;

// pergelangan kanan 3
float    KananServo2,   PulselenKananServo2;
float    KananServo5,   PulselenKananServo5;
float    KananServo8,   PulselenKananServo8;

uint16_t KananServo2Kombinasi,   PulselenKananServo2Kombinasi;
uint16_t KananServo5Kombinasi,   PulselenKananServo5Kombinasi;
uint16_t KananServo8Kombinasi,   PulselenKananServo8Kombinasi;

// pergelangan kiri 1
uint16_t KiriServo6,   PulselenKiriServo6;
uint16_t KiriServo3,   PulselenKiriServo3;
uint16_t KiriServo0,   PulselenKiriServo0;

uint16_t KiriServo6Kombinasi,   PulselenKiriServo6Kombinasi;
uint16_t KiriServo3Kombinasi,   PulselenKiriServo3Kombinasi;
uint16_t KiriServo0Kombinasi,   PulselenKiriServo0Kombinasi;

// pergelangan kiri 2
float    KiriServo7,   PulselenKiriServo7;
float    KiriServo4,   PulselenKiriServo4;
float    KiriServo1,   PulselenKiriServo1;

uint16_t KiriServo7Kombinasi,   PulselenKiriServo7Kombinasi;
uint16_t KiriServo4Kombinasi,   PulselenKiriServo4Kombinasi;
uint16_t KiriServo1Kombinasi,   PulselenKiriServo1Kombinasi;

// pergelangan kiri 3
float    KiriServo8,   PulselenKiriServo8;
float    KiriServo5,   PulselenKiriServo5;
float    KiriServo2,   PulselenKiriServo2;

uint16_t KiriServo8Kombinasi,   PulselenKiriServo8Kombinasi;
uint16_t KiriServo5Kombinasi,   PulselenKiriServo5Kombinasi;
uint16_t KiriServo2Kombinasi,   PulselenKiriServo2Kombinasi;

// griper depan
float DepanServo9,           PulselenDepanServo9;
float DepanServo10,          PulselenDepanServo10;
float DepanServo11,          PulselenDepanServo11;
float DepanServo12,          PulselenDepanServo12;