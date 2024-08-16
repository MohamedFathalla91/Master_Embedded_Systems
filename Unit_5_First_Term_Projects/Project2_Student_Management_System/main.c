/*
 * main.c
 *
 *  Created on: 27.07.2024
 *      Author: Mohamed Ahmed
 */

#include "Queue_LinkedList.h"



int main (void){

	char temp_text[40];
	student_queue = createQueue_student();
	DPRINTF("Welcome to the Student Management System \n");
	while (1)
	{
		DPRINTF("Choose The Task that you want to perform \n");
		DPRINTF("1. Add the Student Details Manually \n");
		DPRINTF("2. Add the Student Details From Text File \n");
		DPRINTF("3. Find the Student Details by Roll Number \n");
		DPRINTF("4. Find the Student Details by First Name \n");
		DPRINTF("5. Find the Student Details by Course ID \n");
		DPRINTF("6. Find the Total Number of Students \n");
		DPRINTF("7. Delete the Student Details by Roll Number \n");
		DPRINTF("8. Update the Student Details by Roll Number \n");
		DPRINTF("9. Show all information \n");
		DPRINTF("10. To Exit \n");
		DPRINTF("Enter your choice to perform the task: \n");
		gets(temp_text);

		switch(atoi(temp_text))
		{
		case 1:
			add_student_manually();
			break;

		case 2:
			add_student_file();
			break;

		case 3:
			find_rl();
			break;

		case 4:
			find_fn();
			break;

		case 5:
			find_c();
			break;

		case 6:
			tot_s();
			break;

		case 7:
			del_s();
			break;

		case 8:
			up_s();
			break;

		case 9:
			show_s();
			break;

		case 10:
			DPRINTF("\n Session closed, See you later ;) \n\n");
			return 0;

		default:
			DPRINTF("\n Wrong Option: Try Again \n\n");
			break;
		}

	}

	return 0;
}
