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

void add_student_manually();

void add_student_file();

int check_roll(int num);

void up_s();

void find_rl();

void find_fn();

void find_c();

void tot_s();

void del_s();

void display_student(int rl);

// Function to display the queue (all students)
void show_s();

#endif /* QUEUE_LINKEDLIST_H_ */
