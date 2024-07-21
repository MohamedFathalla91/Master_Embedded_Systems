/*
 * main.c
 *
 *  Created on: 20.07.2024
 *      Author: Mohamed Ahmed
 */

#include "Student_DB.h"

int main (void)
{
	char temp_text[40];
	int num = 0;
	struct SStudentNode *gpStudent = NULL ;



	while(1)
		{
			DPRINTF(" ============================= ");
			DPRINTF("\n Choose on of the following options \n");
			DPRINTF("\n\t 1: Add Student");
			DPRINTF("\n\t 2: Delete Student");
			DPRINTF("\n\t 3: View Students");
			DPRINTF("\n\t 4: Delete All");
			DPRINTF("\n\t 5: Get Node");
			DPRINTF("\n\t 6: Get Students counter by Iteration");
			DPRINTF("\n\t 7: Get Students counter by Recursion");
			DPRINTF("\n\t 8: Get Node from the end");
			DPRINTF("\n\t 9: Get Middle student");
			DPRINTF("\n\t 10: Reverse student");
			DPRINTF("\n\t 11: Exit");
			DPRINTF("\n ============================= \n");

			gets(temp_text);

			switch(atoi(temp_text))
			{
				case 1:
					list_add_student();
					break;

				case 2:
					list_delete_student();
					break;

				case 3:
					list_view_students();
					break;

				case 4:
					list_delete_all();
					break;

				case 5:
					DPRINTF("Enter Node Number: ");
					gets(temp_text);
					num = atoi(temp_text);
					list_get_node(num);
					break;

				case 6:
					num = list_students_count_iterative();
					DPRINTF("Student Numbers calculated by iterative function: %d\n", num);
					break;

				case 7:
					gpStudent = gpFirstStudent;
					num = list_students_count_recursive(gpStudent);
					DPRINTF("Student Numbers calculated by recursive function : %d\n", num);
					break;

				case 8:
					DPRINTF("Enter Node Number from the end : ");
					gets(temp_text);
					num = atoi(temp_text);
					list_get_node_from_end(num);
					break;

				case 9:
					list_get_middle_student();
					break;

				case 10:
					list_reverse_students();
					break;

				case 11:
					DPRINTF("\n Session closed, See you later ;) \n\n");
					return 0;

				default:
					DPRINTF("\n Wrong Option: Try Again \n\n");
					break;
			}
		}
		return 0;
}
