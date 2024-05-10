/*
 ======================================================================================================================
 Name        : Q1_sum_all_digits.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 21.04.2024
 Description : MidTerm Exam >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>


int sumnum (int i);

int main()
{
	int x,i;
	printf("Enter the number you wish to sum:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);

	i = sumnum(x);
	printf("The number is %d ==> result of sum all digits = %d\n", x,i);
	return 0;

}

int sumnum (int i)
{
	int j, sum=0;

	int arr[10];

	for (j=0;j<10;j++)
	{
		arr[j]=i%10;
		//printf("i:=%d array element:= %d\n", i, arr[j]);
		i=i/10;
		sum += arr[j];
	}

	return sum;

}