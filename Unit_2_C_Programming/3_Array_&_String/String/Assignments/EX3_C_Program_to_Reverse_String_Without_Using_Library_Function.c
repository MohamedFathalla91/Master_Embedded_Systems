/*
 ======================================================================================================================
 Name        : EX3_C_Program_to_Reverse_String_Without_Using_Library_Function.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 24.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 2 Arry_String >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style  
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int x,y=0;
	char c_string [10];
	char re_string [10];


	printf("Enter a string: ");
	fflush(stdin), fflush(stdout);

	scanf("%s", c_string);
	printf("String is %s\n", c_string);
	printf("Reverse String is %d\n", strlen(c_string));

	for (x=strlen(c_string); x>0; x--)
	{
		re_string[y]= c_string[x-1];
		y++;
	}
	printf("Reverse String is %s", re_string);
	return 0;
}