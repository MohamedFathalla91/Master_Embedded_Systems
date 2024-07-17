#include "Platform_Types.h"
#include "uart.h"

/* UART Registers */
#define UART0DR *((vuint32_t* const)((uint32*)0x101f1000)) // casting for warning

/* Function Definations same like Lecture */
void Uart_Send_String(uint8* P_TX_Sting)
{
	while(*P_TX_Sting != '\0') 
	{
		UART0DR = (uint32)(*P_TX_Sting); 
		P_TX_Sting++; 
	}
}