/*
 ======================================================================================================================
 Name        : Q1_sum_all_digits.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 21.04.2024
 Description : MidTerm Exam >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>
#include <string.h>


void reverseWords(char str[]);

int main() {
    char str[] = "Mohamed Fathalla";
    printf("Input string: %s\n", str);

    reverseWords(str);

    printf("Output string: %s\n", str);

    return 0;
}

void reverseWords(char str[]) {
    int length = strlen(str);
    int start = 0;
    
    // Reverse the entire string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Reverse each word in the string
    for (int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            for (int j = start, k = i - 1; j < k; j++, k--) {
                char temp = str[j];
                str[j] = str[k];
                str[k] = temp;
            }
            start = i + 1;
        }
    }

    // Reverse the last word (if any)
    for (int j = start, k = length - 1; j < k; j++, k--) {
        char temp = str[j];
        str[j] = str[k];
        str[k] = temp;
    }
}