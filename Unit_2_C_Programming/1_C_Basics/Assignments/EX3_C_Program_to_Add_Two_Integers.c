/*
 ======================================================================================================================
 Name        : EX3_C_Program_to_Add_Two_Integers.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX1 C Program To Print Sentence using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int x, y;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d\n%d", &x,&y);
	printf("Sum: %d", x+y);
	return 0;
}