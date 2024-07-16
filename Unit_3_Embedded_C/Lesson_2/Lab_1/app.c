#include "Platform_Types.h" // Using my own defined variables/typedef's

#include "uart.h"

uint8 String_Buffer[100] = "Learn-in-depth: Mohamed";
uint8 const String_Buffer_C[100] = "Learn-in-depth: Mohamed"; // Just for learning the .rodata section 

void main(void)
{
	Uart_Send_String(String_Buffer);
}