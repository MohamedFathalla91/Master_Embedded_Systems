/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Calculate_Average.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 24.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 2 Arry_String >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int x, i;
	float sum=0, average;

	printf("Enter the numbers of data: ");
	fflush(stdin), fflush(stdout);
	scanf("%d", &x);
	float data[x];

	for (i=0; i<x; i++)
	{
		printf("%d. Enter number: ", i+1);
		fflush(stdin), fflush(stdout);
		scanf("%f", &data[i]);
		sum += data[i];
	}
	//printf("The Sum is : %.2f\n", sum); // For debugging purposes
	average = sum/x;
	printf("Average =: %.2f", average);
	return 0;
}