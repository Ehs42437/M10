/*
 * Ex02.c
 * Session 2: Loops and decisions
 *  Created on: Jul 10, 2015
 *      Author: Alaa
 */
// purpose: This program is part of C Course On AMIT Learning

/* *******************************************************
 * Write a C code that asks the user to enter a three digits
 * number then prints the number with its digits reversed
 * *****************output sample**************************
 * Enter a two digit number: 287
 * The reversal is: 782
 * ********************************************************
 */

#include <stdio.h>

int main (void){
	int n, ones, tens, hundreds;
	printf("Enter a three-digit number: ");
	fflush(stdout);			// eclipse users
	scanf("%d", &n);
	if(n < 1000 && n > 99){		// check whether the number entered by the user is a two digit number
		ones = n % 10;			// example: assume n = 287; ones now equal 7
		n /= 10;				// same as n = n/10; n = 287/10 = 28
		tens = n % 10;			// tens = 28 % 10 = 8
		hundreds = n / 10;		// hundreds = 28 / 10 = 2
		printf("The reversal is: %d%d%d", ones, tens, hundreds);
	} else {
		printf("\nYou must enter a three-digit number");
	}
return 0;
}
