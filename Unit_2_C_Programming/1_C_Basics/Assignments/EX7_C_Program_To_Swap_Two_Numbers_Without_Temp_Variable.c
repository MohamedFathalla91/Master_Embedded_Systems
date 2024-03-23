/*
 ======================================================================================================================
 Name        : EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

int main()
{
	float a, b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f", &b);
	a= a + b;
	b = a - b;
	a = a - b;

	printf("After sawpping, value of a = %f\nAfter sawpping, value of b = %f\n",a,b);
	return 0;
}