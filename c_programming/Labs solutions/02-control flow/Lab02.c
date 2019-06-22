/*
 ============================================================================
 Name        : Lab02.c
 Author      : Khaled Naga
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Implement a program that takes the grade of a student ranging
 from 0 to 100; and prints the grade as Excellent, Very Good,
 Good, Pass, Fail
 * Use “switch” statement
 ============================================================================
*/

#include <stdio.h>

int main (void)
{
	unsigned int grade;

	printf ("Enter a student grade (0-100): ");
	fflush(stdout);
	scanf ("%u", &grade);

	switch (grade/10)
	{
	case 10: case 9:
		printf ("Excellent\n");
		break;
	case 8:
		printf ("Very Good\n");
		break;
	case 7:
		printf ("Good\n");
		break;
	case 6: case 5:
		printf ("Pass\n");
		break;
	case 4: case 3: case 2: case 1: case 0:
		printf ("Fail\n");
		break;
	default:
		printf ("Invalid Grade\n");
	}

	return 0;
}
