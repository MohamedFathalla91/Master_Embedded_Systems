/*
 ======================================================================================================================
 Name        : EX1_C_Program_To_Find_Sum_Of_Two_Matrix_Of_Order_2x2.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 24.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 2 Arry_String >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	float matrix_1 [2][2];
	float matrix_2 [2][2];
	float sum [2][2];
	int r, c;
	printf("Enter the elements of 1st matrix: ");
	for(r=0; r<2; r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter a%d%d: ",r+1 ,c+1 );
			fflush(stdin), fflush(stdout);
			scanf("%f", &matrix_1[r][c]);
		}
	}


	printf("Enter the elements of 2nd matrix: ");
	for(r=0; r<2; r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter b%d%d: ",r+1 ,c+1 );
			fflush(stdin), fflush(stdout);
			scanf("%f", &matrix_2[r][c]);
		}
	}
	for(r=0; r<2; r++)
	{
		for(c=0;c<2;c++)
		{
			sum [r][c] = matrix_1 [r][c] + matrix_2 [r][c];
		}
	}
	printf("Sum of Matrix: \n");
	for(r=0; r<2; r++)
		{
			for(c=0;c<2;c++)
			{
				printf("%.2f\t", sum[r][c]);
			}
			printf("\n");
		}

	return 0;
}