#include "Pressure_Alarm_Driver.h"

void AlarmON()
{
    Set_Alarm_actuator (0);
}

void AlarmOFF()
{
   Set_Alarm_actuator (1); 
}
