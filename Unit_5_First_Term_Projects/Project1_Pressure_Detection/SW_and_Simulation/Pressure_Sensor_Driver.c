#include "Pressure_Sensor_Driver.h"


#include "driver/driver.h"

void init()
{
    GPIO_INITIALIZATION ();
}

void sensor_reading()
{
    int PressureVal;
    PressureVal = getPressureVal();
}

void waiting_next_value()
{
    Delay(5000);
    sensor_reading();
}