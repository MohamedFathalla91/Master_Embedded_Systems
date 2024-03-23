/*
 ======================================================================================================================
 Name        : EX7_C_Program_to_Find_Factorial_of_a_Number.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int i, x, fac=1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &i);
	if (i>0){
		for (x=1; x <=i ; x++)
		{
			fac *= x;
		}
		printf("Factorial = %d",fac);
	} else if (i==0)
	{
		printf("Factorial = %d",fac);
	} else {
		printf("Error !!! Factorial of negative number doesn't exist.");
	}
	return 0;
}
