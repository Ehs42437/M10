#include "LinkedQueue.h"

extern unsigned char createQueue(ST_Node *Elem)
{
  return createList(Elem);
}

extern unsigned char QpushElem(ST_Node *Elem)
{
    return addHead(Elem);
}

extern unsigned char QpopElem(ST_Node *Elem)
{
    unsigned char u8Ret = 0;
    unsigned char *NoofNodes = 0;
	ST_Node *Tmp = 0;

    queueLength(NoofNodes);
	Tmp = (ST_Node *)malloc(sizeof(ST_Node));
	if(Tmp != 0)
	{
		if(!readElementByIndex(NoofNodes, Tmp))
		{

			deleteTail();
			Elem -> Data = Tmp -> Data;
			Elem -> pNext = 0;
			free(Tmp);
			u8Ret = 0;
		}
		else
		{
			u8Ret = 1;
		}
	}
	else
	{
		u8Ret = 1;
	}
	return u8Ret;
}

extern unsigned char queueLength(int *eCnt)
{
	unsigned char u8Ret  = 0;

	*eCnt = (int) listLength();
	if((*eCnt)<0)
	{
		u8Ret = 1;
	}
	return u8Ret;
}
extern unsigned char printQueue(void)
{
	return printList();
}

extern unsigned char emptyQueue(void)
{
	unsigned char u8Ret = 1;
	while(deleteTail() == 0)
	{
	   u8Ret = 0;
	}

	return u8Ret;
}

extern unsigned char QisEmpty(void)
{
    return !deleteTail();
}
