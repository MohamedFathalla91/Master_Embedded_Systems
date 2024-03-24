/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Find_The_Length_of_a_String.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 24.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 2 Arry_String >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int x, count=0;
	char c_string [50];


	printf("Enter a string: ");
	fflush(stdin), fflush(stdout);
	scanf("%s", c_string);

	for (x=0; c_string[x]!='\0'; x++)
	{
		count++;

	}
	printf("Length of string: %d", count);
	return 0;
}