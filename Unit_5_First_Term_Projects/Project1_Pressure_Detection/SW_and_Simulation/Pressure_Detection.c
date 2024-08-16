#include "Pressure_Detection.h"
#include "driver/driver.h"
#include "Pressure_Sensor_Driver.h"

int HighPressureDetected = 0;
int PressureVal = 0;

void current_PressureVal()
{
    waiting_next_value();
    if (PressureVal > Threshold)
    {
        HighPressureDetected = 1;
        alarm_handling_func();

    }else {
        HighPressureDetected = 0;
        alarm_handling_func();
    }
}