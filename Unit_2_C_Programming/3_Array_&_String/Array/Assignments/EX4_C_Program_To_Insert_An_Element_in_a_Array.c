/*
 ======================================================================================================================
 Name        : EX4_C_Program_To_Insert_An_Element_in_a_Array.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 24.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 2 Arry_String >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style)
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int x, i;
	int inserted_num, position;

	printf("Enter no of elements: ");
	fflush(stdin), fflush(stdout);
	scanf("%d", &x);
	int elements[x];

	for (i=0; i<x; i++)
	{
		elements[i]=i+1;
	}
	for (i=0; i<x; i++)
	{
		printf("%d ", elements[i]);
	}

	printf("\nEnter the element to be inserted : ");
	fflush(stdin), fflush(stdout);
	scanf("%d", &inserted_num);

	printf("Enter the location: ");
	fflush(stdin), fflush(stdout);
	scanf("%d", &position);

	for (i=x-1; i>0; i--)
	{
		elements[i+1] = elements[i];
		if (elements[i] == position)
		{
			elements[i]=inserted_num;
		}
	}

	for (i=0; i<x+1; i++)
	{
		printf("%d ", elements[i]);
	}

	return 0;
}
