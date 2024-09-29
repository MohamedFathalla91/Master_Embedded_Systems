/*
 * LCD_KEYPAD_Drivers.c
 *
 * Created: 22.09.2024 08:46:26
 * Author : Mohamed Ahmed
 */ 


//-----------------------------
//Includes
//-----------------------------
#include "ATMEGA32.h"
#include "DIO_Driver.h"
#include "lcd.h"
#include <util/delay.h>


int main(void)
{
	LCD_INIT();
	_delay_ms(50);
	LCD_WRITE_STRING("LEARN IN DEPTH--:)");
	/* Loop forever */
	while(1){

	}
}