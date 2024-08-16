/*
 * Queue_LinkedList.h
 *
 *  Created on: 27.07.2024
 *      Author: Mohamed Ahmed
 */

#ifndef QUEUE_LINKEDLIST_H_
#define QUEUE_LINKEDLIST_H_

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define DPRINTF(...) 		{fflush(stdout);fflush(stdin);\
							printf(__VA_ARGS__);\
							fflush(stdout);fflush(stdin);}

// Node structure for the linked list
struct sinfo{
	char    fname[50];
	char    lname[50];
	int     roll;
	float   GPA;
	int     cid[10];

};
// Queue Student Node (Data items (Student Data) + pointer to next element/node )
typedef struct SStudentNode{
	struct sinfo Student;
	struct SStudentNode *PNextStudent; // special pointer to struct of same type of the node !
}SStudentNode;

// Queue structure
typedef struct St_Queue {
	SStudentNode* front;
	SStudentNode* rear;
} St_Queue;

extern St_Queue* student_queue ;
extern int count;
extern FILE* filePointer;

// Functions / APIs:

// Function to create a new node / Student
SStudentNode* createNode_student(struct sinfo student_data);

// Function to initialize the queue
St_Queue* createQueue_student();

// Function to add an element to the queue
void enqueue_student(struct sinfo student_data);

// Function to add the student manually to the queue
void add_student_manually();

// Function to add the student from the file to the queue
void add_student_file();

// Function to check the roll number of the student in the queue
int check_roll(int num);

// Function to update the student data in the queue
void up_s();

// Function to find the student with his roll number in the queue
void find_rl();

// Function to find the student with his first name in the queue
void find_fn();

// Function to find the student with his course in the queue
void find_c();

// Function to calculate the total number of students in the queue
void tot_s();

// Function to remove the student manually from the queue
void del_s();

// Function to display single studen 
void display_student(int rl);

// Function to display the queue (all students)
void show_s();

#endif /* QUEUE_LINKEDLIST_H_ */
