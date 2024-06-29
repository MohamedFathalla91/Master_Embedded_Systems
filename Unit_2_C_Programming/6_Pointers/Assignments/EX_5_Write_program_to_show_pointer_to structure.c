/*
 ============================================================================
 Name        : EX_5_Write a program in C to show a pointer to an array which contents are pointer to structure.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 29.06.2024
 Description : Unit 2 C-Progtamming >> Assignment Pointers >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ============================================================================
 */


#include <stdio.h>
struct SEmployee
{
	char ExmployeeName [100];
	int EmployeeID;
};

int main()
{
	struct SEmployee emp_1 = {"Alex",1002};
	struct SEmployee* Employeeptr;
	Employeeptr = &emp_1;


	printf(" Employee Name : %s \n",Employeeptr->ExmployeeName);
	printf(" Employee ID :  %d \n",Employeeptr->EmployeeID);


	return 0;
}



