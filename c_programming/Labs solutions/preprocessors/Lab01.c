/*
 ============================================================================
 Name        : Lab01.c
 Author      : Khaled Naga
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Implement a program that takes 2 input numbers i.e. x and y; and
 do the following:
 + Check value of given x is less that a predefined value
 + Check value of given y is less that a predefined value
 + Print the result of x + y
 + Print the result of x * y
 + Print the result of (x + y) * x
 + Use Macros to hold the predefined values of x and y
 + Use Macro to hold addition formula
 + Use Macro to hold multiplication formula
 ============================================================================
*/

#include <stdio.h>

#define USE_MACROS
/* #undef USE_MACROS */
#define X_MAX	100
#define Y_MAX	100
#define ADD(i,j)		((i)+(j))
#define MUL(i,j)		((i)*(j))

int main(void)
{
	int x, y;

	printf("Enter 2 number: ");
	fflush(stdout);
	scanf("%d%d", &x, &y);

#if defined USE_MACROS
	if (x <= X_MAX && y <= Y_MAX)
	{
		printf("x + y = %d\n", ADD(x,y));
		printf("x * y = %d\n", MUL(x,y));
		printf("(x + y) * x = %d", MUL(ADD(x,y),x));
	}
#elif !defined USE_MACROS
	if (x <= 100 && y <= 100)
	{
		printf("x + y = %d\n", x + y);
		printf("x * y = %d\n", x * y);
		printf("(x + y) * x = %d\n", (x + y) * x);
	}
#endif
	return 0;
}
