/*
 * Ex05.c
 * Session 2: Loops and decisions
 *  Created on: Jul 10, 2015
 *      Author: Alaa
 */
// purpose: This program is part of C Course On AMIT Learning

/* *******************************************************
 * Write a C code that finds the largest and the smallest of
 * four integers entered by the user
 * *****************output sample**************************
 * Enter four integers: 21 43 10 35
 * Largest: 43
 * Smallest: 10
 * ********************************************************
 */

#include<stdio.h>


int main(void){
	int i1, i2, i3, i4;	// declare four integer variables to hold the input from the user
	int max, min;		// another two integer variable to hold maximum and minimum values

	printf("Enter four integers: ");
	fflush(stdout);		// eclipse users
	scanf("%d%d%d%d", &i1, &i2, &i3, &i4);
	// firstly assume the first input as the max and min for now
	max = min = i1;
	// then compare the other inputs with this max and min value
	// if the new integer is lesser than the minimum so it's the new minimum
	// else if it's greater than the maximum so it's the new maximum
	// 1. compare i2
	if (min > i2)
		min = i2;
	else if (max < i2)
		max = i2;
	// 2. compare i3
	if (min > i3)
		min = i3;
	else if (max < i3)
		max = i3;
	// 3. compare i4
	if (min > i4)
		min = i4;
	else if (max < i4)
		max = i4;

	printf("Largest = %d\n", max);
	printf("Smallest = %d\n", min);
return 0;
}
