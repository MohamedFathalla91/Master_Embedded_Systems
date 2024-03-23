/*
 ======================================================================================================================
 Name        : EX4_C_Program_to_Check_a_Number_is_Positive_or_Negative_or_Zero.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	float a;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f", &a);
	if(a==0)
	{
		printf("You entered zero.");
	}
	else if (a>0){
		printf("%.2f is postive", a);
	}
	else
	{
		printf("%.2f is negative", a);
	}
	return 0;
}