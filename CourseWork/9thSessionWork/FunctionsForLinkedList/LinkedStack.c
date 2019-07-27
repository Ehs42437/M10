#include "LinkedStack.h"

extern unsigned char createStack(ST_Node *Elem)
{
	return createList(Elem);
}

extern unsigned char pushElem(ST_Node *Elem)
{
    return addHead(Elem);
}

extern unsigned char popElem(ST_Node *Elem)
{
	unsigned char u8Ret = 0;
	ST_Node *Tmp = 0;
	Tmp = (ST_Node *)malloc(sizeof(ST_Node));
	if(Tmp != 0)
	{
		if(!readElementByIndex(0, Tmp))
		{

			deleteHead();
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

extern unsigned char stackLength(int *eCnt)
{
	unsigned char u8Ret  = 0;

	*eCnt = (int) listLength();
	if((*eCnt)<0)
	{
		u8Ret = 1;
	}
	return u8Ret;
}
extern unsigned char printStack(void)
{
	return printList();
}

extern unsigned char emptyStack(void)
{
	unsigned char u8Ret = 1;
	while(deleteHead() == 0)
	{
	   u8Ret = 0;
	}

	return u8Ret;
}

extern unsigned char isEmpty(void)
{
    return !deleteHead();
}
