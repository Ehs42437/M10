/*
 * Ex09.c
 * Session 2: Loops and decisions
 *  Created on: Jul 8, 2015
 *      Author: Alaa
 */
// purpose: This program is part of C Course On AMIT Learning

/* *******************************************************
 * Write a C code that check whether a number is prime
 * *****************output sample**************************
 * Enter a number: 3
 * 3 is prime
 *
 * Enter a number: 4
 * 4 is divisible by 2
 * ********************************************************
 */
/* Notes: please refer to >> https://en.wikipedia.org/wiki/Prime_number
 * if you don't remember what's prime number
 */
#include<stdio.h>


int main(void){
	int n;		// declare an int variable to hold the input from the user
	int i;
	printf("Enter a number: ");
	fflush(stdout);		// eclipse users
	scanf("%d", &n);
	// check from 2 to the entered number
	// if the number has any divisible break the loop
	for (i = 2; i < n; i++)
		if (n % i == 0)
			break;

	if (i < n)		// executes if the loop breaks i.e. there is a divisible
		printf("%d is divisible by %d", n, i);
	else			// executes if the loop terminated normally i.e. there is no divisible
		printf("%d is prime", n);

return 0;
}
