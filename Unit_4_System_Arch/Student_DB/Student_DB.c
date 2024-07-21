/*
 * Student_DB.c
 *
 *  Created on: 20.07.2024
 *      Author: Mohamed Ahmed
 */

#include "Student_DB.h"

struct SStudentNode* gpFirstStudent = NULL;
int count_rec = 0;
struct SStudentNode * pCurrentStudent_rec = NULL;

// Fill the student data - Function Definition:
void fill_the_record(struct SStudentNode *NewStudent){

	char temp_text[40];

	// Get Student Name from the user
	DPRINTF("Enter Student Name: ");
	gets(NewStudent->Student.name);


	// Get Student ID from the user
	DPRINTF("Enter Student ID: ");
	gets(temp_text);
	NewStudent->Student.ID = atoi(temp_text);

	// Get Student Height from the user
	DPRINTF("Enter Student Height: ");
	gets(temp_text);
	NewStudent->Student.height = atof(temp_text);


}


// Add a student to the list - Function Definition:
void list_add_student(void){

	struct SStudentNode *pLastStudent;
	struct SStudentNode *pNewStudent;
	// Check List is empty
	if (gpFirstStudent == NULL) // empty --> create new record & assign it to gpFirst
	{
		// create the first student node from scratch
		pNewStudent = (struct SStudentNode*) malloc(1*sizeof(struct SStudentNode));
		// Check for invalid allocation
		if(pNewStudent == NULL)
		{
			printf("Creation of new student Failed \n");
			return;
		}
		// Assign the gpFristStudent to it
		gpFirstStudent = pNewStudent;
	} else { // list have already some records
		pLastStudent = gpFirstStudent;
		while (pLastStudent->PNextStudent)
		{
			pLastStudent = pLastStudent->PNextStudent;
		}
		// create the first student node from scratch
		pNewStudent = (struct SStudentNode*) malloc(1*sizeof(struct SStudentNode));

		pLastStudent->PNextStudent = pNewStudent;
	}
	fill_the_record(pNewStudent);

	pNewStudent->PNextStudent = NULL;


}

// Delete a student from the list - Function Definition:
int list_delete_student(void){
	char temp_text[40];
	int selected_id;
	// Get the selected ID from the user
	DPRINTF("\nEnter Student ID to be deleted: ");
	gets(temp_text);
	selected_id = atoi(temp_text);

	if (gpFirstStudent)
	{
		struct SStudentNode *pSelectedStudent = gpFirstStudent;
		struct SStudentNode *pPreviousStudent = NULL;
		while(pSelectedStudent)
		{
			if(pSelectedStudent->Student.ID == selected_id)
			{
				if(pPreviousStudent)
				{
					pPreviousStudent->PNextStudent = pSelectedStudent->PNextStudent;
				} else{
					gpFirstStudent = pSelectedStudent->PNextStudent;
				}
				free(pSelectedStudent);
				DPRINTF("\nThe ID selected is successfully deleted!  \n");
				return 1;
			}
			pPreviousStudent = pSelectedStudent ;
			pSelectedStudent =pSelectedStudent->PNextStudent;
		}
	}
	printf("Sorry, The ID can not be found \n");
	return 0;

}
// Print all students in the list - Function Definition
void list_view_students(void){
	int count=0;
	struct SStudentNode * pCurrentStudent = gpFirstStudent;
	if (gpFirstStudent == NULL)
		printf("\n Empty List\n");

	while(pCurrentStudent)
	{
		DPRINTF("\n Record Number %d",count+1);
		DPRINTF("\n\t ID : %d",pCurrentStudent->Student.ID);
		DPRINTF("\n\t Name : %s",pCurrentStudent->Student.name);
		DPRINTF("\n\t Height : %0.2f\n",pCurrentStudent->Student.height);
		pCurrentStudent = pCurrentStudent->PNextStudent;
		count++;
	}
}

// Delete all students in the list - Function Definition
void list_delete_all(void){
	struct SStudentNode * pCurrentStundent = gpFirstStudent;
	if (gpFirstStudent == NULL)
		printf("\n Empty List\n");
	while(pCurrentStundent)
	{
		struct SStudentNode *pTempStudent = pCurrentStundent;
		pCurrentStundent = pCurrentStundent->PNextStudent;
		free(pTempStudent);
	}
	gpFirstStudent = NULL;

}



// Get a Student node from the list - Function Definition:
void list_get_node(int index){

	int count=0;
	struct SStudentNode * pCurrentStudent = gpFirstStudent;
	if (gpFirstStudent == NULL)
		printf("\n Empty List\n");

	while(pCurrentStudent)
	{
		if(count == index)
		{
			DPRINTF("\n Node of Index (%d) is the Record Number with count %d", index, count+1);
			DPRINTF("\n Record Number %d",count+1);
			DPRINTF("\n\t ID : %d",pCurrentStudent->Student.ID);
			DPRINTF("\n\t Name : %s",pCurrentStudent->Student.name);
			DPRINTF("\n\t Height : %0.2f\n",pCurrentStudent->Student.height);
		}
		pCurrentStudent = pCurrentStudent->PNextStudent;
		count++;
	}

}

// Get the list length using iteration (looping)- Function Definition:
int list_students_count_iterative(void)
{
	int count=0;
	struct SStudentNode * pCurrentStudent = gpFirstStudent;
	if (gpFirstStudent == NULL)
		printf("\n Empty List\n");

	while(pCurrentStudent)
	{
		if(pCurrentStudent->PNextStudent == NULL)
		{
			return count+1;
		}
		pCurrentStudent = pCurrentStudent->PNextStudent;
		count++;
	}
	return 0;
}


// Get the list length using recursion - Function Definition:
int list_students_count_recursive(struct SStudentNode *list){

	// Check if the list is empty
	if(gpFirstStudent == NULL )
	{
		DPRINTF("\n \n List is Empty !!!\n \n");
		return 0;
	}
	if (list == NULL)
	{
		return 0;
	} else {
		//printf("\n For Debugging - Inside Else !!!\n");
		return 1+ list_students_count_recursive(list->PNextStudent);
	}

}

// Get a Student node form the end of list - - Function Definition:
void list_get_node_from_end(int index){
	int len=0;
	int new_index;
	if (gpFirstStudent == NULL)
		DPRINTF("\n \n List is Empty !!!\n \n");

	len = list_students_count_iterative();
	//DPRINTF("\n \n Len := %d !!!\n \n", len); // Just for Debugging

	new_index = len - index + 1;
	//DPRINTF("\n \n New index:= %d !!!\n \n", new_index); // Just for Debugging

	list_get_node(new_index-1);
	// DPRINTF("\n \n Finished !!!!!!!\n \n"); // Just for Debugging

}


// Get the middle student even the number (odd or even) - - Function Definition:
void list_get_middle_student(void){

	// Check if the list is empty
	if(gpFirstStudent == NULL)
	{
		DPRINTF("\n \n List is Empty !!!\n \n");
	}

	// Get Student number
	int num = 0;

	// Get number of nodes in the list
	num = list_students_count_iterative();

	// Get the index we want
	list_get_node(num/2);
}

// Reverse the arrangement of the list  - Function Definition:
void list_reverse_students(void) {

	if (gpFirstStudent)
	{
		struct SStudentNode * pCurrentStudent = gpFirstStudent;
		struct SStudentNode *pPreviousStudent = NULL;
		struct SStudentNode *pNextStudent = NULL;
		while(pCurrentStudent != NULL)
		{
			pNextStudent                   =  pCurrentStudent->PNextStudent;
			pCurrentStudent->PNextStudent  =  pPreviousStudent;
			pPreviousStudent               =  pCurrentStudent ;
			pCurrentStudent				   =  pNextStudent;
		}
		gpFirstStudent = pPreviousStudent;
	}

}

