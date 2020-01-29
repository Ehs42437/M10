	#include <stdio.h>
	#include <stdlib.h>
	#include "LinkedStack.h"

	int main()
	{
        ST_Node *ptr = 0;
        ptr = (ST_Node *)malloc(sizeof(ST_Node));
        if(ptr != 0)
        {
        	ptr->Data = 50;
			ptr->pNext = 0;
		}
		createStack(ptr);
        printStack();

		return 0;
	}
