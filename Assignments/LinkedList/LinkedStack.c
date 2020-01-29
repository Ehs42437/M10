    #include "stdio.h"
	#include "LinkedStack.h"

	extern unsigned char createStack(ST_Node* headElem)
	{
		return createList(headElem);
	}

	extern unsigned char push(ST_Node* Elem)
	{
	     return addHead(Elem);
	}

	extern unsigned char pop(ST_Node* Elem)
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

	extern unsigned char stackLength(unsigned char *eCnt)
	{
		return listLength(eCnt);
	}

	extern unsigned char printStack()
	{
		return printList();
	}

	extern unsigned char emptyStack()
	{
		unsigned char u8Ret = 1;
		while(!deleteHead())
		{
			u8Ret = 0;
		}
		return u8Ret;
	}

	extern unsigned char isStackEmpty()
	{
		return deleteHead();
	}







