/*
 * Section_1_L2_Led8_Toggle.c
 *
 * Created: 01.09.2024 09:45:57
 * Author : Mohamed Ahmed
 */ 

#include <avr/io.h>


# define F_CPU 8000000UL
#include "Platform_Types.h"
#include "avr/interrupt.h"
#include "util/delay.h"
#include "avr/io.h"

// PORTs:
#define IO_BASE 0x20
// PORT D
#define IO_PORTD  *(vuint16_t*)(IO_BASE + 0x12)
#define IO_DDRD  *(vuint16_t*)(IO_BASE + 0x11)
// PORT C
#define IO_PORTC  *(vuint16_t*)(IO_BASE + 0x15)
#define IO_DDRC  *(vuint16_t*)(IO_BASE + 0x14)
#define IO_PINC  *(vuint16_t*)(IO_BASE + 0x13)
#define IO_SFIOR_C  *(vuint16_t*)(IO_BASE + 0x30)

// Interrupts:
#define INT_MCUCR  *(vuint16_t*)(IO_BASE + 0x35)
#define INT_MCUCSR  *(vuint16_t*)(IO_BASE + 0x34)
#define INT_GICR  *(vuint16_t*)(IO_BASE + 0x3B)
#define INT_GIFR  *(vuint16_t*)(IO_BASE + 0x3A)

int main(void)
{
	// PORTA as Input 
	IO_DDRC  &= ~(1<<0);
	IO_PORTC |= (1<<0);
	
	IO_SFIOR_C |= (1<<2);
	
	
	// PORT D as Output
	IO_DDRD |= (1<<0);
	
	IO_DDRD |= (1<<1);
	
	IO_DDRD |= (1<<2);
	IO_DDRD |= (1<<3);
	IO_DDRD |= (1<<4);
	IO_DDRD |= (1<<5);
	IO_DDRD |= (1<<6);
	IO_DDRD |= (1<<7);
	
	
	/* Replace with your application code */
    while (1) 
    {
		IO_PINC = (IO_PINC>>0)&1 ;
		
		while (!IO_PINC)
		{
		IO_PORTD |= (1<<0);
		 _delay_ms(600);
				
		IO_PORTD  |= (1<<1);
		_delay_ms(600);
		
		
		
		IO_PORTD  |= (1<<2);
		_delay_ms(600);
		
		
		IO_PORTD |= (1<<3);
		_delay_ms(600);
		
		
		IO_PORTD  |= (1<<4);
		_delay_ms(600);
		
		
		IO_PORTD  |= (1<<5);
		_delay_ms(600);
		
		
		IO_PORTD  |= (1<<6);
		_delay_ms(600);
		
		
		IO_PORTD  |= (1<<7);
		_delay_ms(600);
		
		} 
			
			IO_PORTD &= ~(1<<7);
			_delay_ms(60);
			IO_PORTD &= ~(1<<6);
			_delay_ms(60); 
			IO_PORTD &= ~(1<<5);
			_delay_ms(60); 
			IO_PORTD &= ~(1<<4); 
			_delay_ms(60); 
			IO_PORTD &= ~(1<<3); 
			_delay_ms(60); 
			IO_PORTD &= ~(1<<2); 
			_delay_ms(60); 
			IO_PORTD &= ~(1<<1); 
			_delay_ms(60); 
			IO_PORTD &= ~(1<<0); 
			
		
		
    }
}

