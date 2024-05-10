/*
 ======================================================================================================================
 Name        : Q1_sum_all_digits.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 21.04.2024
 Description : MidTerm Exam >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>
#include <math.h>


double squareRoot (double i);

int main()
{
	double x,i;
	printf("Enter the number you wish to square root:");
	fflush(stdin);fflush(stdout);
	scanf("%lf",&x);

	i = squareRoot(x);
	printf("The number is %0.3lf ==> result of sum all digits = %0.3lf\n", x,i);
	return 0;

}

double squareRoot (double i)
{
	double result=0;

	result = pow(i, 0.5);	

	return result;

}