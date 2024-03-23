/*
 ======================================================================================================================
 Name        : EX6_C_Program_to_Calculate_Sum_of_Natural_Numbers.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int i, x, sum=0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &i);
	for (x=0; x <=i ; x++)
	{
		sum = sum+x;
	}
	printf("Sum = %d",sum);
	return 0;
}