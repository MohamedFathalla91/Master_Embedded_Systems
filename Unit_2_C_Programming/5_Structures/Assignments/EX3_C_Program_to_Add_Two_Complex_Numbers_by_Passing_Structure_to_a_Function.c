/*
 ============================================================================
 Name        : EX3_C_Program_to_Add_Two_Complex_Numbers_by_Passing_Structure_to_a_Function.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 10.05.2024
 Description : Unit 2 C-Progtamming >> Assignment structures >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ============================================================================
 */


#include <stdio.h>


struct SComplex{
		float real;
		float img;
	};

struct SComplex sum_binary (struct SComplex num1,struct SComplex num2);

int main()
{
	struct SComplex num_1, num_2, num_sum;

	printf("For 1st complex number \n" );
	printf("Enter real and imaginary respectively: ");
	fflush(stdin), fflush(stdout);
	scanf("%f", &num_1.real );
	scanf("%f", &num_1.img );

	printf("For 2nd complex number \n" );
	printf("Enter real and imaginary respectively: ");
	fflush(stdin), fflush(stdout);
	scanf("%f", &num_2.real );
	scanf("%f", &num_2.img );

	num_sum = sum_binary(num_1, num_2);

	printf("Sum= %0.1f+%0.1fi", num_sum.real, num_sum.img);

	return 0;

}


struct SComplex sum_binary (struct SComplex num1,struct SComplex num2){

	struct SComplex sum;

	sum.real = num1.real + num2.real;
	sum.img = num1.img + num2.img;

	return sum;


}