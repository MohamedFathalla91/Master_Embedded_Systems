/*
 ============================================================================
 Name        : EX5_C_Program_to_Find_Area_of_a_circle_by_Passing_Arguments_to_Macros.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 10.05.2024
 Description : Unit 2 C-Progtamming >> Assignment structures >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ============================================================================
 */


#include <stdio.h>

#define PI 3.141

int main()
{
	float r;

	printf ("Enter the radius: ");
	fflush (stdin);	fflush (stdout);
	scanf ("%f", &r);

	printf ("Area= %0.2f", r*r*PI);

	return 0;

}
