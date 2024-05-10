/*
 ======================================================================================================================
 Name        : Q1_sum_all_digits.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 21.04.2024
 Description : MidTerm Exam >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>
void countnumofones (int decimal_num);

int main()
{

	int decimal_num;

	printf("Enter a decimal number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &decimal_num);

	countnumofones(decimal_num);

	return 0;

}

void countnumofones (int decimal_num){
	int binary_num = 0, i = 1, remainder, count=0;

	while (decimal_num != 0) {
		remainder = decimal_num % 2;
		decimal_num /= 2;
		binary_num += remainder * i;
		i *= 10;
		if(remainder==1)
		{
			count++;
		}
	}
	printf("Binary number: %d and num of ones is: %d \n", binary_num, count);

}