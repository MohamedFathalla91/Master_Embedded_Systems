#include <stdint.h>
#include <stdio.h>

#include "driver/driver.h"
#include "Pressure_Detection.h"
#include "Pressure_Alarm_Driver.h"
#include "Pressure_Sensor_Driver.h"

int main (){
	GPIO_INITIALIZATION();
	init_alarm();
	while (1)
	{
		//Implement your Design 
		current_PressureVal();
	}

}
