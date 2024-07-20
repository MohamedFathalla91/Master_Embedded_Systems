/*
 * Student_DB.c
 *
 *  Created on: 20.07.2024
 *      Author: Mohamed Ahmed
 */

#include "Student_DB.h"

struct SStudentNode* gpFirstStudent = NULL;

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
	if (gpFirstStudent == NULL)
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
	} else {
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
	printf("The ID can not be found \n");
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

