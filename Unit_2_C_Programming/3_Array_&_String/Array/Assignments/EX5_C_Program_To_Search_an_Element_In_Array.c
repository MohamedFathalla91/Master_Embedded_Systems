/*
 ======================================================================================================================
 Name        : EX5_C_Program_To_Search_an_Element_In_Array.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 24.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 2 Arry_String >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int x, i;
	int searched_elem;

	printf("Enter no of elements: ");
	fflush(stdin), fflush(stdout);
	scanf("%d", &x);
	int elements[x];

	for (i=1; i<=x; i++)
	{
		elements[i-1]= i*11;
	}
	for (i=0; i<x; i++)
	{
		printf("%d ", elements[i]);
	}

	printf("\nEnter the element to be searched : ");
	fflush(stdin), fflush(stdout);
	scanf("%d", &searched_elem);

	for (i=0; i<x; i++)
	{
		if (elements[i]==searched_elem)
		{
			printf("Number found at location = %d ", i+1);
		}
	}

	return 0;
}