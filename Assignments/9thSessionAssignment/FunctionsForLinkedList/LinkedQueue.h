#ifndef LINKEDQUEUE_H_INCLUDED
#define LINKEDQUEUE_H_INCLUDED
#include "Linkedlist.h"

extern unsigned char createQueue(ST_Node *Elem);
extern unsigned char QpushElem(ST_Node *Elem);
extern unsigned char QpopElem(ST_Node *Elem);
extern unsigned char queueLength(int *eCnt);
extern unsigned char printQueue(void);
extern unsigned char emptyQueue(void);
extern unsigned char QisEmpty(void);

#endif // LINKEDQUEUE_H_INCLUDED
