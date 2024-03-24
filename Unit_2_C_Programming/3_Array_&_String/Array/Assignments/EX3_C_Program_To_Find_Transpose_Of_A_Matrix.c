/*
 ======================================================================================================================
 Name        : EX3_C_Program_To_Find_Transpose_Of_A_Matrix.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 24.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 2 Arry_String >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int r, c, x,y;
	printf("Enter rows and column of matrix: ");
	fflush(stdin), fflush(stdout);
	scanf("%d", &r);
	scanf("%d", &c);
	printf("The row number: %d, the column number: %d\n", r,c);
	int matrix_1 [r][c];
	int matrix_2 [r][c];

	printf("Enter the elements of matrix: \n");

	for(x=0; x<r; x++)
	{
		for(y=0; y<c; y++)
		{
			printf("Enter a%d%d: ",x+1 ,y+1 );
			fflush(stdin), fflush(stdout);
			scanf("%d", &matrix_1[x][y]);
		}
	}

	/*printf("Matrix[1][3]= %d\n", matrix_1[0][2]); For debugging*/

	printf("Entered Matrix: \n");


	for(x=0; x<r; x++)
	{
		for(y=0; y<c; y++)
		{
			printf("%d\t", matrix_1[x][y]);
		}
		printf("\n");
	}

	for(x=0; x<r; x++)
	{
		for(y=0; y<c; y++)
		{
			matrix_2[y][x] = matrix_1[x][y];
		}

	}

	printf("Transpose of Matrix: \n");
	for(x=0; x<c; x++)
	{
		for(y=0; y<r; y++)
		{
			printf("%d\t", matrix_2[x][y]);
		}
		printf("\n");
	}
	return 0;
}
