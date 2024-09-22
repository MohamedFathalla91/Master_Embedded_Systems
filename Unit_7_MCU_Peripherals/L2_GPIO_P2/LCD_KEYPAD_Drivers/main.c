/*
 * LCD_KEYPAD_Drivers.c
 *
 * Created: 22.09.2024 08:46:26
 * Author : Mohamed Ahmed
 */ 

//#include <avr/io.h>
#include "lcd.h"
#include "keypad.h"

int main(void)
{
    /* Replace with your application code */
	LCD_INIT();
	LCD_clear_screen();
	LCD_WRITE_STRING("Ready to be used :)");
	Keypad_init();
	_delay_ms(100);
	LCD_clear_screen();
	//LCD_WRITE_STRING("_Mohamed"); // Test - Debug
	//LCD_WRITE_STRING("_AHMED12345678933445566"); // Test -Debug
	unsigned char pressed_key;
    while (1) 
    {
		pressed_key = Keypad_getkey();
		switch(pressed_key){
			case 'N':
				break;
			case '?':
				LCD_clear_screen();
				break;
			default:
				LCD_WRITE_CHAR(pressed_key);
				break;	
		}
	}
}

