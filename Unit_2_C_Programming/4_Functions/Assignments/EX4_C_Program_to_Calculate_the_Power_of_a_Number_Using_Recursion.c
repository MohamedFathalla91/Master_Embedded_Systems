/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Find_The_Length_of_a_String.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 24.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 3_Functions >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>


int pow_num(int i, int j);

int main()
{
	int x, y, result;

	printf("Enter base number:  ");
	fflush(stdin), fflush(stdout);
	scanf("%d", &x);

	printf("Enter power number (positive integer): ");
	fflush(stdin), fflush(stdout);
	scanf("%d", &y);


	result = pow_num(x,y);
	printf("Enter numbers %d^%d = %d", x, y, result);

	return 0;

}

int pow_num(int i, int j)
{

	if(j==1)
	{
		return i;
	}
	else if (j ==0)
	{
		return 1;
	}
	else
	{
		return (i*pow_num(i,j-1));
	}
}