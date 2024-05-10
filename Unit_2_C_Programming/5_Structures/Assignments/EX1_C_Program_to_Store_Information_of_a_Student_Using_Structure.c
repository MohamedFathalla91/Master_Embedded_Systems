/*
 ============================================================================
 Name        : C_Program_to_Store_Information_of_a_Student_Using_Structure.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 10.05.2024
 Description : Unit 2 C-Progtamming >> Assignment structures >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ============================================================================
 */



#include <stdio.h>


int main()
{
	struct Sstudent{
		char name [50];
		int roll;
		float marks;
	};
	struct Sstudent s1;

	printf("Enter information of students \n" );
	printf("\nEnter name: ");
	fflush(stdin), fflush(stdout);
	scanf("%s", s1.name );
	printf("Enter roll: ");
	fflush(stdin), fflush(stdout);
	scanf("%d", &s1.roll);
	printf("Enter marks: ");
	fflush(stdin), fflush(stdout);
	scanf("%f", &s1.marks );


	/*Displaying Information*/
	printf("\nDisplaying Information \n" );
	printf("name: %s\n", s1.name );
	printf("Roll: %d\n", s1.roll);
	printf("Marks: %0.2f\n", s1.marks );
	return 0;

}

