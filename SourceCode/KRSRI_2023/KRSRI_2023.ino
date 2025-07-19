#include "0_var.h"
// #include "2_Algoritma_PD.h"
#include "2_module_hc_sr04.h"
// #include "2_module_ir_sensor.h"
#include "2_module_servo_arm_robot.h"
#include "2_module_servo_gerak_tripodgait_langkah_belok_kanan_15_30x90.h"
#include "2_module_servo_gerak_tripodgait_langkah_belok_kiri_15_30x90.h"
#include "2_module_servo_gerak_tripodgait_langkah_maju_15_30x90.h"
#include "2_module_servo_gerak_tripodgait_langkah_mundur_15_30x90.h"
// #include "2_module_tcs3200.h"

void setup() {

    Serial.begin(9600);

    // tcs3200 =========================================================================================================
    
    // Setting the outputs
    pinMode(S0, OUTPUT);
    pinMode(S1, OUTPUT);
    pinMode(S2, OUTPUT);
    pinMode(S3, OUTPUT);
  
    // Setting the sensorOut as an input
    pinMode(sensorOut, INPUT);
  
    // Setting frequency scaling to 20%
    digitalWrite(S0,HIGH);
    digitalWrite(S1,LOW);
  
    // servo ===========================================================================================================

    board1.begin();
    board2.begin();  
    board1.setPWMFreq(60);
    board2.setPWMFreq(60);

    delay(6000);
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

void loop() {

    static bool task1Completed = false;
    static bool task2Completed = false;
    static bool task3Completed = false;
    static bool task4Completed = false;
    static bool task5Completed = false;
    static bool task6Completed = false;
    static bool task7Completed = false;
    static bool task8Completed = false;
    static bool task9Completed = false;
    static bool task10Completed = false;

// ====================================================================================================================
    // task 1
    if (!task1Completed && SRF1.dist() < 35 && SRF2.dist() > 20 && SRF3.dist() < 35) {
        servo_gerak_tripodgait_langkah_belok_kanan_15_30x90();

        gerak_kanan_belok_kanan_15_30x90();
        delay(50);
        gerak_kiri_belok_kanan_15_30x90();
        delay(50);

        task1Completed = true;
        task2Completed = true;
    }

    // task 2
    else if (!task2Completed && SRF1.dist() < 35 && SRF2.dist() < 35 && SRF3.dist() < 35) {
        servo_gerak_tripodgait_langkah_belok_kiri_15_30x90();

        gerak_kanan_belok_kiri_15_30x90();
        delay(50);
        gerak_kiri_belok_kiri_15_30x90();
        delay(50);

        task1Completed = true;
        task2Completed = true;
    }

// ====================================================================================================================

    // task 3
    else if (!task3Completed && (task1Completed || task2Completed) && SRF1.dist() < 20 && SRF2.dist() < 30) {
        servo_gerak_tripodgait_langkah_belok_kiri_15_30x90();

        task3Completed = true;
        task6Completed = true;
    }

    // task 4
    else if (!task4Completed && task3Completed && SRF3.dist() < 7) {
        servo_gerak_tripodgait_langkah_maju_15_30x90();

        task4Completed = true;
    }

// ====================================================================================================================
     
    // task 5
    else if (!task5Completed && task4Completed) {
        
        servo_arm_robot_2();
        delay(250);
        servo_arm_robot_3();
        delay(250);
        servo_arm_robot_4();
        delay(250);
        servo_arm_robot_5();
        delay(250);

        task5Completed = true;
    }

    // task 6
    else if (!task6Completed && (task1Completed || task2Completed)) {
        servo_gerak_tripodgait_langkah_maju_15_30x90();
    }

    // task 7
    else if (!task7Completed && task5Completed) {
        servo_gerak_tripodgait_langkah_mundur_15_30x90();

        gerak_kanan_mundur_15_30x90();
        delay(50);
        gerak_kiri_mundur_15_30x90();
        delay(50);
        
        gerak_kanan_mundur_15_30x90();
        delay(50);
        gerak_kiri_mundur_15_30x90();
        delay(50);

        gerak_kanan_mundur_15_30x90();
        delay(50);
        gerak_kiri_mundur_15_30x90();
        delay(50);

        task7Completed = true;
    }

    // task 9
    else if (!task9Completed && task7Completed) {
        servo_gerak_tripodgait_langkah_belok_kanan_15_30x90();

        task9Completed = true;
    }
}