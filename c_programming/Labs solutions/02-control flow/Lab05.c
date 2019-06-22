/*
 ============================================================================
 Name        : Lab05.c
 Author      : Khaled Naga
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Implement a program that takes an input value from the user, and
 prints the factorial value
 * Use “while” statement
 ============================================================================
*/

#include <stdio.h>

int main(void)
{
	int input;
	double factorial = 1;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &input);
	printf("%d Factorial = ", input);
	while (input != 0)
	{
		factorial *= input--;
	}
	printf("%e", factorial);
	return 0;
}
