/*
 ======================================================================================================================
 Name        : Q6_find_unique_number.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 21.04.2024
 Description : MidTerm Exam >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

#include <stdio.h>

int findUnique(int arr[], int size);

int main() {
    int a[] = {4,2,5,2,5,7,4};
    int size = sizeof(a) / sizeof(a[0]);
    int unique = findUnique(a, size);
    printf("The unique number in the array is: %d\n", unique);
    return 0;
}

int findUnique(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }
    return result;
}