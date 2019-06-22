/*
 ============================================================================
 Name        : Ex09.c
 Author      : Alaa
 Version     : Aug, 2015
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 	 	 	   Session 1: Introduction
 ========================================================
 Write a code that swaps two integers entered by user
 =================output sample==========================
 Enter 2 integer numbers: 2 10
 Your input after swapping: 10 2
 ============================================================================
 */


/* this code swaps two integers entered by user */

#include <stdio.h>	// must be included to use input/output finctions
					// like printf() and scanf()

// mandatory main function to make the code executable
int main (void){
	int a, b;	// declare 2 variables of type int to hold the user inputs

	int temp;	// temporary variable to hold data while swapping
	printf("Enter 2 integer numbers: \n");	// ask the user to enter 2 integers
	printf("a = ");
	fflush(stdout);		// eclipse users
	scanf("%d", &a);
	printf("b = ");
	fflush(stdout);
	scanf("%d", &b);

	// deploy swapping technique
	temp = a;	// save a in a temp varible
	a = b;		// assign b to a
	b = temp;	// assign temp (a before changing) to b

	printf("Your input after swapping: %d %d", a, b);

return 0;
}
