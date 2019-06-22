/*
 ============================================================================
 Name        : Lab02.c
 Author      : Khaled Naga
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Create DebugHeader.h file, with a predefined macro i.e.
 IS_DEBUG_MODE having a value defining whether the software
 runs in debug mode or not
 * In the main file, include DebugHeader.h
 * In the main function, use the preprocessor keyword #if to print
 whether the software running in debug mode or not
 ============================================================================
*/

#include <stdio.h>
#include "DebugHeader.h"

int main(void)
{
#if IS_DEBUG_MODE
	printf ("the software is running in debug mode.\n");
#else
	printf ("the software is NOT running in debug mode.\n");
#endif
	return 0;
}
