/*
 ======================================================================================================================
 Name        : EX8_C_Program_to_Make_a_Simple_Calculator_Using_Switch_Case.c
 Author      : Mohamed Fathalla Ahmed
 Created on	 : 23.03.2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> Complier/Linker Option: gcc -ansi -std=c89 Ansi-style 
 ======================================================================================================================
 */

int main()
{
	char c;
	float operand_1, operand_2, result;
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdout);
	scanf("%c", &c);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f\n%f", &operand_1, &operand_2);

	switch (c)
	{
	case '+':
	{	result= operand_1+operand_2;
	printf("%f + %f=%f ", operand_1, operand_2, result);
	break;
	}
	case '-':
	{
		result= operand_1-operand_2;
		printf("%f + %f= %f", operand_1, operand_2, result);
		break;
	}
	case '*':
	{
		result= operand_1*operand_2;
		printf("%f * %f=%f ", operand_1, operand_2, result);
		break;
	}
	case '/':
	{
		result= operand_1/operand_2;
		printf("%f / %f=%f ", operand_1, operand_2, result);
		break;
	}
	default:
	      printf("Error! Please enter a proper operator (+ or - or * or /)!");
	}
	return 0;
}