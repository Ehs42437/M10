#ifndef LINKEDSTACK_H_INCLUDED
#define LINKEDSTACK_H_INCLUDED
#include "LinkedList.h"

extern unsigned char createStack(ST_Node *Elem);
extern unsigned char pushElem(ST_Node *Elem);
extern unsigned char popElem(ST_Node *Elem);
extern unsigned char stackLength(int *eCnt);
extern unsigned char printStack(void);
extern unsigned char emptyStack(void);
extern unsigned char isEmpty(void);
#endif // LINKEDSTACK_H_INCLUDED
