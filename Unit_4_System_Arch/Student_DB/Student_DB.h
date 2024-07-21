/*
 * Student_DB.h
 *
 *  Created on: 20.07.2024
 *      Author: Mohamed Ahmed
 */

#ifndef STUDENT_DB_H_
#define STUDENT_DB_H_

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "conio.h"

#define DPRINTF(...) 		{fflush(stdout);fflush(stdin);\
							printf(__VA_ARGS__);\
							fflush(stdout);fflush(stdin);}

// Head of List pointer what points to first element in the linked list
extern struct SStudentNode* gpFirstStudent;

// Data struct of list or effective Data
struct SStudentData{
	int ID;
	char name[40];
	float height;
};

// Linked List Node (Data items (Student Data) + pointer to next element/node )
struct SStudentNode{
	struct SStudentData Student;
	struct SStudentNode *PNextStudent; // special pointer to struct of same type of the node !
};


// Student Data base Function Declarations / APIs:
// Fill the student data
void fill_the_record(struct SStudentNode *NewStudent);

// Add a student to the list
void list_add_student(void);

// Delete a student from the list
int list_delete_student(void);

// Print all students in the list
void list_view_students(void);

// Delete all students in the list
void list_delete_all(void);


 // Get a Student node from the list
void list_get_node(int index);

// Get the list length using iteration (looping)
int list_students_count_iterative(void);


// Get the list length using recursion
int list_students_count_recursive(struct SStudentNode *list);

// Get a Student node form the end of list
void list_get_node_from_end(int index);

// Get the middle student even the number (odd or even)
void list_get_middle_student(void);


#endif /* STUDENT_DB_H_ */
