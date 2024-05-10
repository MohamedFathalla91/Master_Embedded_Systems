/*
 ======================================================================================================================
 Name        : Q7_sum_of_numbers_1_100.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 21.04.2024
 Description : MidTerm Exam >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int sumnumbers (int sum);

int main()
{
	int sum, num=100;
	sum = sumnumbers(num);

	printf("The sum of numbers between 1 and 100 is %d\n",sum);

	return 0;

}

int sumnumbers (int num){


	return num * (num+1)/2;
}