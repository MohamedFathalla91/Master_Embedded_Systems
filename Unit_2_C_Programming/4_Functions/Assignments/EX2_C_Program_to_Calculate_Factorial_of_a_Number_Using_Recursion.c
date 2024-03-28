/*
 ======================================================================================================================
 Name        : EX2_C_Program_to_Calculate_Factorial_of_a_Number_Using_Recursion.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 28.03.2024
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