#include "0_var.h"
#include "1_config.h"
#include "2_module_servo_arm_robot.h"
#include "2_module_servo_pergelangan_1.h"
#include "2_module_servo_pergelangan_2.h"
#include "2_module_servo_pergelangan_3.h"

void loop()
{
  servo_arm_robot();
  // servo_pergelangan_1();
  servo_pergelangan_2();
  servo_pergelangan_3();
}