/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Find_The_Length_of_a_String.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 24.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 3_Functions >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>



void reverse(char str[], int index, int n);

int main()
{
	char sentence [50];

	printf("Enter a sentence: ");
	fflush(stdin), fflush(stdout);
	fgets(sentence , sizeof(sentence), stdin);

	/*printf("Just print the sentence first:: %s\n  ",sentence);
	printf("Strlen :: %d\n  ",strlen(sentence)); for debuging purposes */


	reverse(sentence,0,strlen(sentence));

	return 0;

}

void reverse(char str[], int index, int n)
{
    if(index == n)
        return;

    char temp = str[index];
    reverse(str, index + 1, n);
    printf("%c", temp);
}

