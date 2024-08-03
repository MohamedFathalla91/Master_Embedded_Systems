#include "Alarm_Handling.h"


void alarm_handling_func()
{
    AlarmOFF();
    if (HighPressureDetected)
    {
        AlarmON();
        Delay(1000);
    } else {
        AlarmOFF();
    }
}