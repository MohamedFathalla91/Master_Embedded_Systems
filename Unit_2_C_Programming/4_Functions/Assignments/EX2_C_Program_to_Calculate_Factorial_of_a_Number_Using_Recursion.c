/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Find_The_Length_of_a_String.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 24.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 3_Functions >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>


int fac (int a);

int main()
{
	int x;
	int result=1;

	printf("Enter an positive integer: ");
	fflush(stdin), fflush(stdout);
	scanf("%d", &x);

	result = fac(6);

	printf("Factorial of %d is %d",x,result);
	return 0;

}
int fac (int a){
	if (a>=1)
	{
		return a*fac(a-1);
	}
	else {
		return 1;
	}

}