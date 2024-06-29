/*
 ============================================================================
 Name        : EX_4_Write a program in C to print the elements of an array in reverse order.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 29.06.2024
 Description : Unit 2 C-Progtamming >> Assignment Pointers >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ============================================================================
 */


#include <stdio.h>
#include <string.h>

int main()
{
	int num[15];
	int *ptr;
	ptr = num;

	int i=0, x;

	printf("Input the number of elements to store in the array (max 15) :\n");
	fflush(stdout);
	scanf("%d", &x);
	printf("Input %d number of elements in the array :\n", i);


	for(i=1 ; i<=x; i++)
	{
		printf("element - %d: ", i);
		fflush(stdout);
		scanf("%d", (ptr+i));
	}

	printf("The elements of array in reverse order are :\n");
	for(i=x ; i>=1; i--)
	{
		printf("element - %d: %d\n", i, *(ptr+i));
	}

	return 0;
}



