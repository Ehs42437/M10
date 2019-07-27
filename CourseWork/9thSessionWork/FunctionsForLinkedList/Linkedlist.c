#include "linkedlist.h"    //define headers

    static ST_Node * pHead = 0;  //public pointer points to Head, static to not be accessible for other files and to make lifeCycle longer

    extern unsigned char createList(ST_Node * pFirst )
    {
        unsigned char u8Ret = 0 ; //flag to know if function succeed or not  1 = fail, 0 = succeed

        //if there's no head
        if(pHead == 0 )
        {
              //create dynamic memory to free or fill it at anytime
              pHead = (ST_Node *) malloc(sizeof(ST_Node));
              if(pHead == 0 ) //data location doesn't  created  successfully
              {
                  u8Ret = 1 ; //failed
              }
              else  //created successfully
              {
                pHead->Data = pFirst->Data ;  // transfer data of pFirst to Head
                //   memcpy (pHead , pFirst , sizeof(ST_Node)) ;
                pHead->pNext = 0 ;   //there's no next node
                u8Ret = 0 ; //succeed
              }
        }
        else//head already exists
        {
              u8Ret = 1 ;  //failed
        }
        return u8Ret ;
    }

    extern unsigned char addHead(ST_Node * pNewHead)
    {
        ST_Node * pTmp = 0 ; // here we declared a temp to create node, we don't access directly with pNewHead to make sure if addresses of arguments changed or deleted doesn't affect on code
        unsigned char u8Ret = 0 ;

        if(pHead == 0 )
        {
            u8Ret = createList(pNewHead) ;
        }
        else //list exist
        {
            pTmp = (ST_Node *) malloc (sizeof(ST_Node));
            if(pTmp == 0)
            {
                u8Ret = 1 ;
            }
            else
            {
                pTmp->Data  = pNewHead->Data ;
                pTmp->pNext = pHead ;
                pHead = pTmp ;
                u8Ret = 0 ;
            }
        }

        return u8Ret ;
    }

    extern unsigned char deleteHead(void)
    {
        ST_Node * pTmp = 0 ;
        unsigned char u8Ret = 0 ;

        if(pHead == 0 )
        {
             u8Ret = 1 ;
        }
        else
        {
            pTmp = pHead ;
            pHead = pHead->pNext ;
            free(pTmp) ;
            u8Ret = 0 ;
        }
        return u8Ret ;
    }

    extern unsigned char addTail (ST_Node * pNewTail)
    {
        ST_Node * pTmp = 0 ;
        ST_Node * pNewNode = 0 ;
        unsigned char u8Ret = 0 ;

        if(pHead == 0 )
        {
            u8Ret = createList(pNewTail) ;
        }
        else
        {
            pTmp = pHead ;
            while (pTmp->pNext != 0)
            {
                pTmp = pTmp->pNext ;
            }

            pNewNode = (ST_Node *) malloc(sizeof(ST_Node)) ;
            if(pNewNode == 0 )
            {
                u8Ret =1 ;
            }
            else
            {
              pTmp->pNext = pNewNode ;
              pNewNode->pNext = 0 ;
              pNewNode->Data = pNewTail->Data ;
              u8Ret = 0 ;
            }
        }
        return u8Ret ;
    }

	extern unsigned char printList (void)
	{
		unsigned char u8Ret = 0; //result of function
		ST_Node *pTmp  = 0; //temporary pointer of first node

		if(pHead == 0)
		{
			//u8Ret = createList(pFirst);
			u8Ret = 1; //if no head exist return fail
		}
		else
		{
			pTmp = pHead; //hold pFirst address

			if(pTmp == 0)
			{
				u8Ret = 1; //if can't hold address fail
			}
			else
			{
				do
				{
					printf("%d\n", pTmp -> Data);  //print all data of the following nodes
					pTmp = pTmp -> pNext;
				}while(pTmp  != 0);
				u8Ret = 0;
			}
		}
        return u8Ret;
	}

    extern unsigned char listLength (void)
    {
    	unsigned char nCnt =  0;  //node counter if returns 0  means it fail
    	ST_Node *pTmp = 0;  //Temporary pointer holds head

    	if(pHead == 0)
		{
			nCnt = 0;//no head then fail
		}
		else
		{
			pTmp = pHead;
			if(pTmp == 0)
			{
				nCnt = 0;//couldn't catch fail
			}
			else
			{
				while(pTmp != 0)
				{
					nCnt++;
					pTmp = pTmp -> pNext;
				}
			}
		}
		return nCnt;
    }

    extern unsigned char deleteTail (void)
    {
        ST_Node * pTmp = 0 ; //Temporary pointer catches head
        unsigned char u8Ret = 0 ;

        if(pHead == 0 )
        {
             u8Ret = 1 ;
        }
        else
        {
            pTmp = pHead ;
            while(pTmp != 0)
			{
				pTmp = pTmp -> pNext; //get last node
            }
            free(pTmp) ; //delete tail
            u8Ret = 0 ;
        }
        return u8Ret ;
    }

    extern unsigned char addElementByIndex (ST_Node * pNewNode, unsigned char index)
    {
		ST_Node * pTmp = 0 ;  //catch head address
		ST_Node *pTmpNext = 0;
        unsigned char u8Ret = 0 ;
        unsigned char cnt = 0; //check if index reached
        unsigned char NoOfNodes = 0;

        if(pHead == 0 )
        {
            u8Ret = createList(pNewNode) ;  //no head create new list
        }
        else
        {
            NoOfNodes = listLength();
            if(NoOfNodes < index)
            {
                printf("Enter a number inside list");
                u8Ret = 1;
            }
            else
                {
                  pTmp = pHead ;
                  while (cnt <= (index-1))
                  {
                   pTmp = pTmp -> pNext; //if index-1 not reached go to next pTmp gonna catch pre-index node
                   cnt++;
                  }
                  pTmpNext = (ST_Node*)malloc(sizeof(ST_Node));
                  pTmpNext = pTmp->pNext;
                  pTmp->Data = pNewNode->Data;
                  pTmp->pNext = pTmpNext;
                  u8Ret = 0;
                }
        }
        return u8Ret ;
    }

	extern unsigned char deleteNode (unsigned char index)
	{
		ST_Node * pTmp = 0 ;//catch node gonna be deleted
        ST_Node * pFollowingTmp = 0 ;//next node of pTmp
        ST_Node * pReverseTmp = 0 ;//pre-node of pTmp
	    unsigned char cnt = 0 ; //check if index reached
        unsigned char u8Ret = 0 ;

        if(pHead == 0 )
        {
             u8Ret = 1 ;
        }
        else
        {
            pTmp = pHead ;
            while(cnt != index)
			{
				pTmp = pTmp -> pNext;//if index not reached go to next
				cnt++;
            }
            pReverseTmp = (pTmp-1);// catch pre-node
            pFollowingTmp =  (pTmp+1);// catch following node
            pReverseTmp -> pNext = pFollowingTmp;// linking pre-node of the following one
            free(pTmp) ; //delete node
            u8Ret = 0 ;
        }
        return u8Ret ;
	}

extern unsigned char readElementByIndex(int index, ST_Node *output)
{
  unsigned char u8Ret = 0;
  ST_Node *Tmp = 0;
  int cnt = 0;

  if(pHead == 0)
  {
	u8Ret = 1;
  }
  else
  {
		Tmp = pHead;
		while(cnt <= (index-1) && Tmp != 0)
		{
			Tmp =  Tmp -> pNext;
			cnt++;
		}
	output -> Data = Tmp -> Data;
	output -> pNext = 0;
	u8Ret = 0;
  }
	return u8Ret;
}
