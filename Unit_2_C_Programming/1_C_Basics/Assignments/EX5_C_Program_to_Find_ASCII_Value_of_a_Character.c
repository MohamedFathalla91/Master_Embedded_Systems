/*
 ======================================================================================================================
 Name        : EX5_C_Program_to_Find_ASCII_Value_of_a_Character.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

int main()
{
	char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &c);
	printf("ASCII value of %c: %d", c,c);
	return 0;
}