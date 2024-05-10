/*
 ======================================================================================================================
 Name        : Q10_count_max_num_of_ones.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 21.04.2024
 Description : MidTerm Exam >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */
#include <stdio.h>

int countnumofones (int decimal_num);
int maxOnesBetweenZeros(int num);

int main() {
        
    int decimal_num, binary_num;

	printf("Enter a decimal number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &decimal_num);

	binary_num = countnumofones(decimal_num);

    printf("Binary number: %d\n", binary_num);

    int maxOnes = maxOnesBetweenZeros(binary_num);
    printf("Maximum number of ones between two zeros: %d\n", maxOnes);

    return 0;
}

int countnumofones (int decimal_num){
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
	//printf("Binary number: %d and num of ones is: %d \n", binary_num, count);
    return binary_num;
}

int maxOnesBetweenZeros(int num) {
    int maxOnes = 0;
    int countOnes = 0;
    int foundZero = 0;

    // Iterate over each bit of the number
    for (int i = 0; i < sizeof(int) * 8; i++) {
        // Check if the current bit is 1
        if (num & (1 << i)) {
            countOnes++;
        } else { // Current bit is 0
            if (countOnes > maxOnes && foundZero) {
                maxOnes = countOnes;
            }
            countOnes = 0;
            foundZero = 1;
        }
    }

    return maxOnes;
}
