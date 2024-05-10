/*
 ============================================================================
 Name        : EX2_C_Program_to_Add_Two_Distances_Systems_Using_Structure.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 10.05.2024
 Description : Unit 2 C-Progtamming >> Assignment structures >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ============================================================================
 */


#include <stdio.h>


int main()
{
	struct distance{
		float feet;
		float inch;
	};
	struct distance dist_1, dist_2, dist_sum;

	printf("Enter information of 1st distance \n" );
	printf("Enter feet: ");
	fflush(stdin), fflush(stdout);
	scanf("%f", &dist_1.feet );
	printf("Enter inch: ");
	fflush(stdin), fflush(stdout);
	scanf("%f", &dist_1.inch );


	printf("Enter information of 2nd distance \n" );
	printf("Enter feet: ");
	fflush(stdin), fflush(stdout);
	scanf("%f", &dist_2.feet );
	printf("Enter inch: ");
	fflush(stdin), fflush(stdout);
	scanf("%f", &dist_2.inch );

	dist_sum.feet = dist_1.feet + dist_2.feet;

	dist_sum.inch = dist_1.inch + dist_2.inch;

	while (dist_sum.inch >= 12)
	{
		dist_sum.inch = dist_sum.inch - 12;
		dist_sum.feet = dist_sum.feet +1;
	}

	/*Displaying Information*/
	printf("\nSum of distance= %0.1f' -%0.1f\" ",dist_sum.feet,dist_sum.inch);

	return 0;

}
