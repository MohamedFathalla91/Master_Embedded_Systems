/*
 ======================================================================================================================
 Name        : EX3_C_Program_to_Find_The_Largest_Number.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	float a,b,c;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f\n%f\n%f", &a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("Largest number:%.2f", a);
		}
		else {
			printf("Largest number: %.2f",c);
		}
	}
	else if (b>c){
		printf("Largest number: %.2f",b);
	}
	else
	{
		printf("Largest number: %.2f",c);
	}
	return 0;
}