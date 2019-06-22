/*
 ============================================================================
 Name        : Lab01.c
 Author      : Khaled Naga
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Implement a program that takes the grade of a student ranging
 from 0 to 100; and prints the grade as Excellent, Very Good,
 Good, Pass, Fail
 * Use “if ” statements
 ============================================================================
*/

#include <stdio.h>

int main (void)
{
	int grade;

	printf ("Enter a student grade (0-100): ");
	fflush(stdout);
	scanf ("%d", &grade);

	if (90 <= grade && grade <= 100)
	{
		printf ("Excellent\n");
	}
	else if (80 <= grade && grade <= 89)
	{
		printf ("Very Good\n");
	}
	else if (70 <= grade && grade <= 79)
	{
		printf ("Good\n");
	}
	else if (50 <= grade && grade <= 69)
	{
		printf ("Pass\n");
	}
	else if (0 <= grade && grade <= 59)
	{
		printf ("Fail\n");
	}
	else
	{
		printf ("Invalid Grade\n");
	}
	return 0;
}
