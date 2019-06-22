/*
 ============================================================================
 Name        : Lab03.c
 Author      : Khaled Naga
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Create DebugHeader.h file, with a predefined macro
 “DEBUG_MODE_ACTIVE”
 + If DEBUG_MODE_ACTIVE is defined, this indicated that debug
 mode is running
 + In the main file, include DebugHeader.h
 + In the main function, use the preprocessor keyword #ifdef to
 print whether the software running in debug mode or not
 ============================================================================
*/

#include <stdio.h>
#include "DebugHeader.h"

int main(void)
{
#ifdef DEBUG_MODE_ACTIVE
	printf ("the software is running in debug mode.\n");
#else
	printf ("the software is NOT running in debug mode.\n");
#endif
	return 0;
}
