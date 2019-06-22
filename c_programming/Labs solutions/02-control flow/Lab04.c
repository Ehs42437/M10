/*
 ============================================================================
 Name        : Lab04.c
 Author      : Khaled Naga
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Implement a program that takes an input value from the user, and
 prints the summation result of the odd the numbers, from 0 to the
 given input value
 * Use “for” statement
 ============================================================================
*/

#include <stdio.h>

int main(void)
{
	int input, i;
	int sum = 0;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &input);

	for (i = 0; i <= input; i++)
	{
		if ((i % 2) != 0)	/* odd number */
		{
			sum += i;
		}
	}
	printf("Sum of odd numbers (from %d to %d) = %d", 0, input, sum);
	return 0;
}
