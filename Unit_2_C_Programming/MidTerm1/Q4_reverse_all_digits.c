/*
 ======================================================================================================================
 Name        : Q4_reverse_all_digits.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 21.04.2024
 Description : MidTerm Exam >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>


void reversenum (int i);

int main()
{
	int x;
	printf("Enter the number you wish to sum:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);


	printf("input: %d -> output: ", x);
	reversenum(x);
	return 0;

}

void reversenum (int i)
{
	int j;

	int arr[4];

	for (j=0;j<4;j++)
	{

		if (i>0)
		{
			arr[j]=i%10;
			i=i/10;
			/*printf("\ni:=%d array element:= %d\n", i, arr[j]);*/
		}
	}
	for (j=0;j<4;j++)
	{
		printf("%d", arr[j]);

	}

}