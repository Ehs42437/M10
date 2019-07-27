	#include "stdio.h"
	#include "Queue.h"

    extern unsigned char createQueue(ST_Node* headElem)
    {
    	return createList(headElem);
    }

    extern unsigned char enQueue(ST_Node* Elem)
    {
    	return  addTail(Elem);
    }

    extern unsigned char deQueue(ST_Node* Elem)
    {
		unsigned char u8Ret = 0;
		ST_Node *pTmp = 0;
		pTmp = (ST_Node *)malloc(sizeof(ST_Node));
		if(pTmp == 0)
		{
			u8Ret = 1;
		}
		else
		{
			if(!readElementByIndex(0, pTmp))
			{
				deleteHead();
				Elem->Data = pTmp->Data;
				Elem->pNext = 0;
				free(pTmp);
				u8Ret = 0;
			}
			else
			{
				u8Ret = 1;
			}
		}
		return u8Ret;
    }

    extern unsigned char queueLength(unsigned char* eCnt)
    {
		return listLength(eCnt);
    }

    extern unsigned char printQueue()
    {
    	return printList();
    }

    extern unsigned char emptyQueue()
    {
    	unsigned char u8Ret = 1;
		while(!deleteHead())
		{
			u8Ret = 0;
		}
		return u8Ret;
    }

	extern unsigned char isQueueEmpty()
	{
		return deleteHead();
	}




