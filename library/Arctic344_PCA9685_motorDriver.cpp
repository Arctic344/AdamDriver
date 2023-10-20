#include "Arduino.h"
#include "Arctic344_PCA9685_motorDriver.h"

Arctic344_PCA9685_motorDriver::driver(uint8_t I2Caddr)
{
  _addr = I2Caddr;
}