/*
 ======================================================================================================================
 Name        : EX1_C_Program_to_Check_a_Number_Is_Even.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int a;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d", &a);
	if(a%2==0)
	{
		printf("%d is even.", a);
	}
	else {
		printf("%d is odd.", a);
	}
	return 0;
}
