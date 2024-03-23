/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Print_a_Integer_Entered_by_a_User.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int x;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d", &x);
	printf("You entered: %d", x);
	return 0;
}