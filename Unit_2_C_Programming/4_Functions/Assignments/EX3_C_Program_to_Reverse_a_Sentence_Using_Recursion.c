/*
 ======================================================================================================================
 Name        : EX3_C_Program_to_Reverse_a_Sentence_Using_Recursion.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 28.03.2024
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

