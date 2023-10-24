#include "Arduino.h"
#include "Arctic344_PCA9685_motorDriver.h"

Arctic344_PCA9685_motorDriver::Arctic344_PCA9685_motorDriver(uint8_t I2Caddr)
{
  _addr = I2Caddr;
  _pwm = Adafruit_PWMServoDriver(_addr);
  uint8_t[4][3] = {
    {1,2,3}
    {1,2,3}
    {1,2,3}
    {1,2,3}
  } // motor connection points. motor number 1-4 with the three connection pints, In1, In2, PWM, in that order
}


void Arctic344_PCA9685_motorDriver::begin() {
  Serial.println("began the driver")
}

void Arctic344_PCA9685_motorDriver::setMotorSpeed(uint8_t motorNumber, short motorSpeed) {
  Serial.println("Setting a motors speed");
  Serial.print("Motor:");
  Serial.println(motorNumber);
  Serial.print("Speed:");
  Serial.println(motorSpeed);
}