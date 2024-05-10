/*
 ======================================================================================================================
 Name        : Q3_prime_number_interval.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 21.04.2024
 Description : MidTerm Exam >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>


int primenum (int a);

int main()
{
	int x,y;
	int i;

	printf("Enter two numbers (intervals): ");
	fflush(stdin), fflush(stdout);
	scanf("%d %d", &x, &y);
	printf("Input:n1= %d, n2= %d -> output",x,y);
	for (i=x; i<y;i++)
	{
		if(primenum(i)!=1)
		{
			printf(" %d", i);
		}

	}
	printf("\n");

	return 0;

}
int primenum (int a){
	int i;
	for (i=2; i<a;i++){
		if (a%i==0){
			return 1;
		}
	}
 return 0;
}