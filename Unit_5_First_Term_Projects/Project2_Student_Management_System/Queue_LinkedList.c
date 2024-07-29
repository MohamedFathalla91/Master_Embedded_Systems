/*
 * Queue_LinkedList.c
 *
 *  Created on: 27.07.2024
 *      Author: Mohamed Ahmed
 */

#include "Queue_LinkedList.h"

St_Queue* student_queue = NULL;
int count = 0;
FILE* filePointer = NULL;

// Function to initialize the queue
St_Queue* createQueue_student() {
	St_Queue* queue = (St_Queue*)malloc(sizeof(St_Queue));
	queue->front = queue->rear = NULL;
	return queue;
}


// Function to create a new node / Student
SStudentNode* createNode_student(struct sinfo student_data){
	SStudentNode *NewStudent;
	NewStudent = (SStudentNode*) malloc(sizeof(SStudentNode));
	NewStudent->Student = student_data;
	NewStudent->PNextStudent = NULL;
	return NewStudent;

}

// Function to add an element to the queue
void enqueue_student(struct sinfo student_data) {

	SStudentNode* newNode = createNode_student(student_data);
	// If there is only one Node in the Queue
	if (newNode == 0)
	{
		DPRINTF("\n [ERROR] Node creation Failed \n");
	}

	if (student_queue->rear == NULL) {
		student_queue->front = student_queue->rear = newNode;
		return;
	}
	student_queue->rear->PNextStudent = newNode; // Attach the new node to rear of the queue
	student_queue->rear = newNode;		// Let the new the node be the last element

}

int check_roll(int num){
	SStudentNode* temp = student_queue->front;

	// Search for the node to be removed
	while (temp != NULL ) {
		if (temp->Student.roll == num)
		{
			return 1;
		}

		temp = temp->PNextStudent;
	}
	return 0;
}

void add_student_file(){
	filePointer = fopen("student_data_file.txt", "r");

	struct sinfo student_data;

	// Get Student ID from the user

	if (filePointer) {
		while (!feof(filePointer)){
			if( fscanf(filePointer, "%d", &student_data.roll) !=1) break;

			if( fscanf(filePointer, "%s", student_data.fname) !=1) break;

			if( fscanf(filePointer, "%s", student_data.lname) !=1) break;

			if( fscanf(filePointer, "%f", &student_data.GPA) !=1) break;

			for (int i=0; i< 5; i++)
			{
				if( fscanf(filePointer, "%d", &student_data.cid[i]) !=1) break;

			}

			if (!check_roll(student_data.roll)) {
				enqueue_student(student_data);
				DPRINTF("[INFO] Roll Number %d saved successfully \n", student_data.roll);
				count++;


			} else {
				DPRINTF("[ERROR] Roll Number %d is already taken!\n", student_data.roll);
			}
		}

		fclose(filePointer);
	}
	DPRINTF("[INFO] Student Details is added successfully \n");
	DPRINTF("--------------------------------------\n");
	tot_s();
}

void add_student_manually(){

	char temp_text[40];
	struct sinfo student_data;

	// Get Student ID from the user
	DPRINTF("Enter the Roll Number: ");
	gets(temp_text);
	student_data.roll = atoi(temp_text);

	// Get Student Name from the user
	DPRINTF("Enter First Name of Student: ");
	gets(student_data.fname);

	// Get Student Name from the user
	DPRINTF("Enter Last Name of Student: ");
	gets(student_data.lname);

	// Get Student ID from the user
	DPRINTF("Enter the GPA you obtained Number: ");
	gets(temp_text);
	student_data.GPA = atof(temp_text);

	int i = 0;
	DPRINTF("Enter the course ID of each course\n");
	for (i=0; i< 5; i++)
	{
		DPRINTF("Course %d id: ",i+1);
		gets(temp_text);
		student_data.cid[i] = atoi(temp_text);
	}
	DPRINTF("Add the Students Details \n");
	if (!check_roll(student_data.roll)) {
		enqueue_student(student_data);
		DPRINTF("[INFO] Student Details is added successfully \n");
		//DPRINTF("[INFO] Roll Number %d saved successfully \n", student_data.roll);
		DPRINTF("[---------------------------------------------------------\n");
		count++;
		tot_s();

	} else {
		DPRINTF("[ERROR] Roll Number %d is already taken!\n", student_data.roll);
	}
}

void find_rl(){
	char temp_text[40];
	DPRINTF("Enter the Roll Number of the student: \n");
	gets(temp_text);
	int rl = atoi(temp_text);
	if(!check_roll(rl))
	{
		DPRINTF("[ERROR] Roll Number %d not found!\n", rl );
	}
	else {
		display_student(rl);

	}
}

void find_c(){
	char temp_text[40];
	DPRINTF("Enter the Course ID to find:");
	gets(temp_text);
	int id = atoi(temp_text);
	int found =0;

	SStudentNode* temp = student_queue->front;

	if (student_queue->front == NULL) {
		student_queue->rear = NULL;
	}
	int i, enrolled=0;
	while (temp != NULL) {
		for (i=0; i<5;i++)
		{
			if(temp->Student.cid[i]==id)
			{
				DPRINTF("The Students Details are \n");
				DPRINTF("The First name is : %s  \n",temp->Student.fname);
				DPRINTF("The Last name is : %s  \n",temp->Student.lname);
				DPRINTF("The GPA is %f \n",temp->Student.GPA);
				found = 1;
				enrolled++;
			}
		}

		temp = temp->PNextStudent;
	}

	if (!found) {
		DPRINTF("[ERROR] Course ID %d not found ! \n", id);
		return;
	}
	DPRINTF("[INFO] Total Number of Students Enrolled: %d \n", enrolled);
}

void find_fn(){
	char temp_text[40];
	DPRINTF("Enter the First Name of the student to find:");
	gets(temp_text);
	int found =0;

	SStudentNode* temp = student_queue->front;

	if (student_queue->front == NULL) {
		student_queue->rear = NULL;
	}

	while (temp != NULL) {
		if (strcmp(temp->Student.fname,temp_text) == 0) {
			DPRINTF("The Students Details are \n");
			DPRINTF("The First name is : %s  \n",temp->Student.fname);
			DPRINTF("The Last name is : %s  \n",temp->Student.lname);
			DPRINTF("The GPA is %f \n",temp->Student.GPA);
			for (int i = 0; i<5; i++)
			{
				DPRINTF("The Course IDs are is %d \n",temp->Student.cid[i]);
			}
			found = 1;
		}
		temp = temp->PNextStudent;
	}

	if (!found) {
		DPRINTF("[ERROR] First Name %s not found \n", temp_text);
	}

}

void display_student(int rl)
{
	SStudentNode* temp = student_queue->front;
	while (temp != NULL) {
		if(temp->Student.roll == rl)
		{
			DPRINTF("The Students Details are \n");
			DPRINTF("The First name is : %s  \n",temp->Student.fname);
			DPRINTF("The Last name is : %s  \n",temp->Student.lname);
			DPRINTF("The GPA is %f \n",temp->Student.GPA);
			for (int i = 0; i<5; i++)
			{
				DPRINTF("The Course IDs are is %d \n",temp->Student.cid[i]);
			}
		}
		temp = temp->PNextStudent;
	}

}

void del_s(){
	char temp_text[40];
	DPRINTF("Enter the Roll Number which you want to delete: \n");
	gets(temp_text);
	int rl = atoi(temp_text);
	if (student_queue->front == NULL) {
		printf("Queue is empty\n");
		return;
	}
	SStudentNode* temp = student_queue->front;
	SStudentNode* prev = NULL;

	// If the node to be removed is the front node
	if (temp != NULL && temp->Student.roll == rl) {
		student_queue->front = temp->PNextStudent;
		if (student_queue->front == NULL) {
			student_queue->rear = NULL;
		}
		free(temp);
		count--;
		printf("[INFO] This Roll Number %d is removed successfully!\n", rl);
		return;
	}

	// Search for the node to be removed
	while (temp != NULL && temp->Student.roll !=rl) {
		prev = temp;
		temp = temp->PNextStudent;
	}

	// If the node was not found
	if (temp == NULL) {
		printf("[ERROR] This Roll Number %d not found!\n", rl);
		return;
	}

	// Unlink the node from the linked list
	prev->PNextStudent = temp->PNextStudent;

	// If the node to be removed is the rear node
	if (temp->PNextStudent == NULL) {
		student_queue->rear = prev;
	}

	free(temp);
	count--;
	printf("[INFO] This Roll Number %d is removed successfully!\n", rl);
}

void up_s(){
	char temp_text[40];
	int up_num;
	int found =0;
	DPRINTF("Enter the Roll Number to update the entry: \n");
	gets(temp_text);
	int rl = atoi(temp_text);

	if (student_queue->front == NULL) {
		printf("Queue is empty\n");
		return;
	}

	SStudentNode* temp = student_queue->front;
	while (temp != NULL) {
		if(temp->Student.roll == rl)
		{
			DPRINTF("1. first name\n2. last name\n3. roll no.\n4. GPA\n");
			gets(temp_text);
			up_num = atoi(temp_text);
			switch (up_num){
			case 1:
				DPRINTF("Enter the new first name: ");
				gets(temp->Student.fname);
				break;
			case 2:
				DPRINTF("Enter the new last name: ");
				gets(temp->Student.lname);
				break;
			case 3:
				DPRINTF("Enter the roll number: ");
				temp->Student.roll = atoi(temp_text);
				break;
			case 4:
				DPRINTF("Enter the GPA number: ");
				temp->Student.GPA = atof(temp_text);
				break;
			default:
				DPRINTF("Inside Default !! \n");
				break;
			}
			 found =1;
			 DPRINTF("[INFO] UPDATED SUCCESSFULY. \n");
		}
		temp = temp->PNextStudent;
	}
	if (!found) {
		DPRINTF("[ERROR] Roll Number %d not found!\n", rl );
	}

}

void tot_s(){
	DPRINTF("[INFO] The total number of students is %d \n", count);
	DPRINTF("[INFO] You can add up to 50 students \n");
	DPRINTF("[INFO] You can add up to %d more students \n", 50-count);
}

// Function to display the queue
void show_s(){
	SStudentNode* temp = student_queue->front;
	while (temp != NULL) {
		DPRINTF("The First name is : %s  \n",temp->Student.fname);
		DPRINTF("The Last name is : %s  \n",temp->Student.lname);
		DPRINTF("The GPA is %0.2f \n",temp->Student.GPA);
		for (int i = 0; i<5; i++)
		{
			DPRINTF("The Course IDs are %d \n",temp->Student.cid[i]);
		}
		DPRINTF("---------------------------\n");
		temp = temp->PNextStudent;
	}

}
