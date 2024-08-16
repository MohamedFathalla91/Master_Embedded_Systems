#include "Pressure_Sensor_Driver.h"
#include "driver/driver.h"
#include "Pressure_Detection.h"


void sensor_reading()
{
    PressureVal = getPressureVal();
}

void waiting_next_value()
{
    sensor_reading();
    Delay(50000);
}