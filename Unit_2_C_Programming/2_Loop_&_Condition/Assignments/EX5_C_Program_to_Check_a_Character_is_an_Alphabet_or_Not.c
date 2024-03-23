/*
 ======================================================================================================================
 Name        : EX5_C_Program_to_Check_a_Character_is_an_Alphabet_or_Not.c
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
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) // ASCII code of the characters 
	{
		printf("%c is an alphabet.", c);
	}
	    else {
	    	printf("%c is not an alphabet.", c);
	    }
	return 0;
}
