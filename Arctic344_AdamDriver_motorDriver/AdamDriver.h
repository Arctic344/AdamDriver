#ifndef AdamDriver
#define AdamDriver

#include "Arduino.h"
#include <Adafruit_PWMServoDriver.h>

class AdamDriver
{
public:
    AdamDriver();
    void begin();
    void setMotorSpeed(uint8_t motorNumber, short motorSpeed);
private:
    Adafruit_PWMServoDriver pwm(_addr);
    uint8_t _addr;
}

#endif