/*
 * main.c
 *
 * Created: 8/22/2024 2:35:44 PM
 *  Author: Mohamed Ahmed
 */ 

#include <xc.h>

# define F_CPU 1000000UL
#include "Platform_Types.h"
#include "avr/interrupt.h"
#include "util/delay.h"

// PORTs:
#define IO_BASE 0x20
#define IO_PORTD  *(vuint16_t*)(IO_BASE + 0x12)
#define IO_DDRD  *(vuint16_t*)(IO_BASE + 0x11)

// Interrupts:
#define IO_PORTD  *(vuint16_t*)(IO_BASE + 0x12)
#define INT_MCUCR  *(vuint16_t*)(IO_BASE + 0x35)
#define INT_MCUCSR  *(vuint16_t*)(IO_BASE + 0x34)
#define INT_GICR  *(vuint16_t*)(IO_BASE + 0x3B)
#define INT_GIFR  *(vuint16_t*)(IO_BASE + 0x3A)

int main(void)
{
	// Set these Pin 2 & Pin 3 in Port D as input --- Bit_3 == INT1 , Bit_2 == INT0 -------To be checked if it is working
	IO_DDRD &= ~(1<<2) ;
	IO_DDRD &= ~(1<<3) ;
		
	// PORTD Set last Pins of the same Port as output
	IO_DDRD |= (1<<5);
	IO_DDRD |= (1<<6);
	IO_DDRD |= (1<<7);
		
	INT_GICR   |= (0b111<<5);			// To enable all INTx
	sei();								// To enable GIC
	
	INT_MCUCR  |= (0b01<<0);	     // Any Logical Edge on INT0
	INT_MCUCR  |= (0b11<<2);		// Rising Edge on INT1
	INT_MCUCSR &= ~(1<<6);		   // Falling Edge on INT2
    

	
	
	
	while(1)
    {
        //TODO:: Please write your application code 
		// PORTD Output is always reset until interrupt happens
		IO_PORTD &= ~(1<<5);
		IO_PORTD &= ~(1<<6);
		IO_PORTD &= ~(1<<7);
    }
}

ISR(INT0_vect){
	IO_PORTD |= (1<<5);
	_delay_ms(3000);
}
ISR(INT1_vect){
	IO_PORTD |= (1<<6);
	_delay_ms(3000);
	
}
ISR(INT2_vect){
	IO_PORTD |= (1<<7);
	_delay_ms(3000);
	
}