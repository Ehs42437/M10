	#ifndef LINKEDSTACK_H_INCLUDED
	#define LINKEDSTACK_H_INCLUDED
	#include "LinkedList.h"

	extern unsigned char createStack(ST_Node *headElem);
	extern unsigned char push(ST_Node *Elem);
	extern unsigned char pop(ST_Node *Elem);
	extern unsigned char stackLength(unsigned char *eCnt);
	extern unsigned char printStack(void);
	extern unsigned char emptyStack(void);
	extern unsigned char isStackEmpty(void);


	#endif // LINKEDSTACK_H_INCLUDED
