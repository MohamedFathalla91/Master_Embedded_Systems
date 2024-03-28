/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Find_The_Length_of_a_String.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 24.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 3_Functions >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
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
	printf("Prime number between %d and %d are: ",x,y);
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