/*
 ======================================================================================================================
 Name        : EX4_C_Program_to_Multiply_Two_Floating_Point_Numbers.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX1 C Program To Print Sentence using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	float x, y;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f\n%f", &x,&y);
	printf("Product: %f", x*y);
	return 0;
}