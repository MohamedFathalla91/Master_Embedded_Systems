/*
 * keypad.h
 *
 * Created: 22.09.2024 16:00:26
 *  Author: Mohamed Ahmed
 */ 


#ifndef KEYPAD_H_
#define KEYPAD_H_

//-----------------------------
//Includes
//-----------------------------
#include "ATMEGA32.h"
#include "DIO_Driver.h"

#define R0 DIO_PIN0
#define R1 DIO_PIN1
#define R2 DIO_PIN2
#define R3 DIO_PIN3
#define C0 DIO_PIN4
#define C1 DIO_PIN5
#define C2 DIO_PIN6
#define C3 DIO_PIN7

#define KEYPAD_PORT DIOD

#define DataDir_KEYPAD_PORT DDRD
void Keypad_init();
char Keypad_getkey();



#endif /* KEYPAD_H_ */