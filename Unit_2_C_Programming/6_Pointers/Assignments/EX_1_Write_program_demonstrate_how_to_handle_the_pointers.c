/*
 ============================================================================
 Name        : EX_1_Write a program in C to demonstrate how to handle the pointers in the program.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 29.06.2024
 Description : Unit 2 C-Progtamming >> Assignment Pointers >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ============================================================================
 */


#include <stdio.h>

int main()
{
	int* m;
	*m = 29;

	int* ab = m;


	printf ("Address of m = 0x%p\n", m);
	printf ("Value of m = %d\n", *m);
	printf ("\n\n");

	*m = 34;
	printf ("The value of m assigned to %d now. \n", *ab);

	printf ("Now ab is assigned with the address of ab = 0x%p\n", ab);
	printf ("Content of pointer ab = %d\n", *ab);

	printf ("\n\n");

	*m = 7;
	printf ("The pointer variable ab is assigned with the value %d now \n", *ab);
	printf ("Address of m = 0x%p\n", m);
	printf ("Value of m = %d\n", *m);


	return 0;

}



