#include "Pressure_Alarm_Driver.h"

void AlarmON()
{
    Set_Alarm_actuator (0); // Set Bit to Zero in order to light the LED
}

void AlarmOFF()
{
   Set_Alarm_actuator (1); // Set Bit to 1 in order to switch OFF the LED
}

void init_alarm()
{
    AlarmOFF();
}