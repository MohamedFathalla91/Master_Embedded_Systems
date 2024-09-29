/*
 * keypad.c
 *
 * Created: 22.09.2024 16:00:14
 *  Author: Mohamed Ahmed
 */ 

#include "keypad.h"

int Key_padRow[] = {R0, R1, R2, R3};   //rows of the keypad
int Key_padCol[] = {C0, C1, C2, C3};  //columns

void Keypad_init(){

	//DIO_PinConfig_t keypad_pinconfig;

	//MODE: init DIOD R0, R1, R2, R3 pin as input(reset state)
	//CNF: make PORTB pin R0,  R1, R2, R3 as input

	MCAL_PIN_Direction (KEYPAD_PORT, R0, INPUT_PIN);
	MCAL_PIN_Direction (KEYPAD_PORT, R1, INPUT_PIN);
	MCAL_PIN_Direction (KEYPAD_PORT, R2, INPUT_PIN);
	MCAL_PIN_Direction (KEYPAD_PORT, R3, INPUT_PIN);


	/************************************************************/

	// make PORTB pin C0, C1, C2, C3 as output
	MCAL_PIN_Direction (KEYPAD_PORT, C0, OUTPUT_PIN);
	MCAL_PIN_Direction (KEYPAD_PORT, C1, OUTPUT_PIN);
	MCAL_PIN_Direction (KEYPAD_PORT, C2, OUTPUT_PIN);
	MCAL_PIN_Direction (KEYPAD_PORT, C3, OUTPUT_PIN);


	MCAL_DIO_WritePort(KEYPAD_PORT ,0xFF);
}

char Keypad_getkey(){
	int i,j;
	for (i = 0; i < 4; i++){
		// All Column PINS are SET to 1, Once a PIN is pressed it will RESET 
		MCAL_DIO_WritePIN(KEYPAD_PORT ,Key_padCol[0],DIO_PIN_SET);
		MCAL_DIO_WritePIN(KEYPAD_PORT ,Key_padCol[1],DIO_PIN_SET);
		MCAL_DIO_WritePIN(KEYPAD_PORT ,Key_padCol[2],DIO_PIN_SET);
		MCAL_DIO_WritePIN(KEYPAD_PORT ,Key_padCol[3],DIO_PIN_SET);

		MCAL_DIO_WritePIN(KEYPAD_PORT ,Key_padCol[i],DIO_PIN_RESET);
		for(j = 0; j < 4; j++){
			if (!(MCAL_DIO_ReadPIN(KEYPAD_PORT ,Key_padRow[j])))
			{
				while(!(MCAL_DIO_ReadPIN(KEYPAD_PORT ,Key_padRow[j])));
				switch(i){
					case (0):
					if (j == 0) return '7';
					else if (j == 1) return '4';
					else if (j == 2) return '1';
					else if (j == 3) return '?';
					break;
					case (1):
					if (j == 0) return '8';
					else if (j == 1) return '5';
					else if (j == 2) return '2';
					else if (j == 3) return '0';
					break;
					case (2):
					if (j == 0) return '9';
					else if (j == 1) return '6';
					else if (j == 2) return '3';
					else if (j == 3) return '=';
					break;
					case (3):
					if (j == 0) return '/';
					else if (j == 1) return '*';
					else if (j == 2) return '-';
					else if (j == 3) return '+';
					break;
				}
			}
		}
	}
	return 'N';
}