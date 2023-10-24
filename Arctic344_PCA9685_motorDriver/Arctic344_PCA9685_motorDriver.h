#ifndef Arctic344_PCA9685_motorDriver
#define Arctic344_PCA9685_motorDriver

#include "Arduino.h"
#include <Adafruit_PWMServoDriver.h>

class Arctic344_PCA9685_motorDriver
{
public:
    Arctic344_PCA9685_motorDriver();
    void begin();
    void setMotorSpeed(uint8_t motorNumber, short motorSpeed);
private:
    Adafruit_PWMServoDriver pwm(_addr);
    uint8_t _addr;
}

#endif