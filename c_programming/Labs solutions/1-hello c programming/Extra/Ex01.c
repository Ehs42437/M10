/*
 ============================================================================
 Name        : Ex07.c
 Author      : Alaa
 Version     : Aug, 2015
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 	 	 	   Session 1: Introduction
 ========================================================
 Write a code that calculates the size of different data
 types
 =================output sample==========================
 Size of char data type = 1 Byte
 Size of int data type = 4 Bytes
 Size of float data type = 4 Bytes
 Size of double data type = 8 Bytes
 ============================================================================
 */

/* this code gets the size of different data types
 * this code uses the sizeof() operator which defined in stdio.h library
 * so it should be included whenever you want to use this operator
 * the sizeof() operator takes a variable of certain data type as input
 * and returns its size in bytes i.e. how much blocks variable takes in memory
 * ex: if a is declared as char so sizeof(a) will return 1
 * which refers that var a reserves 1 byte on memory */

#include <stdio.h>	// must be included to use input/output finctions
					// like printf() and scanf()

// mandatory main function to make the code executable
/* Notes: if you get a warning of miss matched types between
 * sizeof() return and %d, don't worry we'll fix this later
 */
int main (void){
	char a;
	int b;
	float c;
	double d;

	printf("Size of char data type = %d Byte\n", sizeof(a));	// gets the size of a and prints it in one step
	/* note that you can make it two steps like:
	 * int size;
	 * size = sizeof(a);
	 * printf("size of char data type = %d", size);
	 */
	printf("Size of int data type = %d Bytes\n", sizeof(b));
	printf("Size of float data type = %d Bytes\n", sizeof(c));
	printf("Size of double data type = %d Bytes\n", sizeof(d));
return 0;
}
