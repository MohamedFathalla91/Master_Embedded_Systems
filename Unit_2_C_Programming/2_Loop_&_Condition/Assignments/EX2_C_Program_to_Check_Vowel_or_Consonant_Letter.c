/*
 ======================================================================================================================
 Name        : EX2_C_Program_to_Check_Vowel_or_Consonant_Letter.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	char c;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c", &c);
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
	{
		printf("%c is a vowel.", c);
	}
	else {
		printf("%c is consonant.", c);
	}
	return 0;
}
