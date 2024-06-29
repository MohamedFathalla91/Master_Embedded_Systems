/*
 ============================================================================
 Name        : EX_3_Write a program in C to print a string in reverse using a pointer.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 29.06.2024
 Description : Unit 2 C-Progtamming >> Assignment Pointers >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ============================================================================
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char str[15];
	char *ptr;
	ptr = str;

	int i;

	printf("Pointer : Print a string in reverse order :\n");
	printf("-------------------------------------\n");

	printf("Input a string: ");
	fflush(stdout);
	scanf("%s", ptr);
	printf("The string: %s\n", ptr);

	printf("Reverse of the string is :");
	for(i=strlen(ptr) ; i>=0; i--)
	{
		printf("%c", *(ptr+i));
	}

	return 0;
}



