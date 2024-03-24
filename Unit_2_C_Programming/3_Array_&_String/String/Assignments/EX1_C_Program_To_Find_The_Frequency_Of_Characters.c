/*
 ======================================================================================================================
 Name        : EX1_C_Program_To_Print_Sentence.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int x, count=0;
	char c;
	char c_string [50];


	printf("Enter a string: ");
	fflush(stdin), fflush(stdout);
	scanf("%s", c_string);


	printf("Enter a character to find frequency: ");
	fflush(stdin), fflush(stdout);
	scanf("%c", &c);

	for (x=0; x<sizeof(c_string); x++)
	{
		if (c_string[x]==c)
		{
			count++;
		}
	}
	printf("Frequency of %c = %d", c, count);
	return 0;
}