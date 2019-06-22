/*
 ============================================================================
 Name        : Lab03.c
 Author      : Khaled Naga
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Run the following program and see if the result is as expected and
 if not – debug until it works properly
 ============================================================================
*/

#include <stdio.h>
/* Print the sum of the integers from 1 to 1000 */
int main(int argc, char **argv)
{
	int i;
	int sum;
	sum = 0;
	for(i = 1; i <= 1000; i++) {
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
