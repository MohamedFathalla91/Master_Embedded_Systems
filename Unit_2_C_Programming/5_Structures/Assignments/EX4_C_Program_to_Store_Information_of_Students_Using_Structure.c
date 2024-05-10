/*
 ============================================================================
 Name        : EX4_C_Program_to_Store_Information_of_Students_Using_Structure.c
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
	struct Sstudent s1[10];

	printf("Enter information of students \n" );
	int i;
	for (i=0;i<3;i++)
	{
		printf("For roll number %d", i+1);
		printf("Enter name : ");
		fflush(stdin), fflush(stdout);
		scanf("%s", s1[i].name );
		printf("Enter marks: ");
		fflush(stdin), fflush(stdout);
		scanf("%f", &s1[i].marks );
	}


	/*Displaying Information*/
	printf("Displaying information of students \n" );
	for (i=0;i<3;i++)
	{
		printf("Information for roll number %d: \n", i+1);
		printf("Name: %s\n", s1[i].name );
		printf("Marks: %0.2f\n", s1[i].marks );
	}

	return 0;

}
