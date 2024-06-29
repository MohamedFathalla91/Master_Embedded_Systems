/*
 ============================================================================
 Name        : EX_2_Write a program in C to print all the alphabets using a pointer-c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 29.06.2024
 Description : Unit 2 C-Progtamming >> Assignment Pointers >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ============================================================================
 */


#include <stdio.h>

int main()
{
	char alpha[26];
	char *ch = alpha;
	char c;
	int i=0;
	for (c = 'A'; c <= 'Z'; c++)
	{
		*(ch+i) = c;
		i++;
	}
	
	printf(" The Alphabets are : \n"); 
	for(i=0 ; i<=25 ; i++)
		printf("%c ", *ch+i);


	return 0;

}



