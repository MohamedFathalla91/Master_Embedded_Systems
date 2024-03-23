/*
 ======================================================================================================================
 Name        : EX6_C_Program_to_Swap_Two_Numbers.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	float a, b, temp=0;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f", &b);
	temp = b;
	b = a;
	a = temp;

	printf("After sawpping, value of a = %f\nAfter sawpping, value of b = %f\n",a,b);
	return 0;
}