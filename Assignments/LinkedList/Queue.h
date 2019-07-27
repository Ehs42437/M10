	#ifndef QUEUE_H_INCLUDED
	#define QUEUE_H_INCLUDED
	#include "LinkedList.h"

	extern unsigned char createQueue (ST_Node *headElem);
	extern unsigned char enQueue(ST_Node *Elem);
	extern unsigned char deQueue(ST_Node *Elem);
	extern unsigned char queueLength(unsigned char *eCnt);
	extern unsigned char printQueue (void);
	extern unsigned char emptyQueue(void);
	extern unsigned char isQueueEmpty(void);


	#endif // QUEUE_H_INCLUDED
