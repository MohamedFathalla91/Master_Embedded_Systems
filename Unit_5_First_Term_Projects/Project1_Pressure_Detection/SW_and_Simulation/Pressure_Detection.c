#include "Pressure_Detection.h"
#include "driver/driver.h"

int HighPressureDetected = 0;
int PressureVal = 0;

void current_PressureVal()
{
    PressureVal = getPressureVal();

    if (PressureVal > Threshold)
    {
        HighPressureDetected = 1;

    }else {
        HighPressureDetected = 1;
    }
}