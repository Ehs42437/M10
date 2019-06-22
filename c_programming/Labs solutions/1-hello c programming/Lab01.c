/*
 ============================================================================
 Name        : Lab01.c
 Author      : Khaled Naga
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Implement a program that takes 2 input numbers from the user,
 and prints the following:
 + First Number
 + Second Number
 + Addition Result
 + Subtraction Result
 + Multiplication Result
 + Division Result
 + Remainder Result
 Use proper displaying statement for each displayed value
 ============================================================================
*/

#include <stdio.h>

int main(void)
{
	int x, y;

	printf("Enter 2 integer numbers: ");
	scanf("%d%d", &x, &y);
	printf("First Number: %d\n", x);
	printf("Second Number: %d\n", y);
	printf("Addition Result: %d\n", x+y);
	printf("Subtraction Result: %d\n", x-y);
	printf("Multiplication Result: %d\n", x*y);
	printf("Division Result: %d\n", x/y);
	printf("Remainder Result %d\n", x%y);

	return 0;
}
