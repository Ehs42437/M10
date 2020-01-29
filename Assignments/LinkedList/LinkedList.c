    #include "linkedlist.h"    //define headers

    static ST_Node * pHead = 0 ;  //public pointer points to Head, static to not be accessible for other files and to make lifeCycle longer

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
        ST_Node * pTmp = 0 ; // here we declared a temp to create node, we don't access directly with pNewHead to make sure if addresses of arguments changed or deleted not gonna affect on code
        unsigned char u8Ret = 0 ;

        if(pHead == 0 )
        {
            u8Ret = createList(pNewHead) ;  // create list with this node
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
                pTmp->Data  = pNewHead->Data ; // transfer data
                pTmp->pNext = pHead ; //next node goes to old head
                pHead = pTmp ; // update head position
                u8Ret = 0;
            }
        }

        return u8Ret ;
    }

    extern unsigned char deleteHead(void)
    {
        ST_Node * pTmp = 0 ;
        unsigned char u8Ret = 0 ;

        if(pHead == 0)
        {
             u8Ret = 1 ;
        }
        else
        {
            pTmp = pHead ;
            pHead = pHead->pNext ;  //update head
            free(pTmp) ; // delete old head
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
				while(pTmp  != 0)
				{
					printf("%d\n", pTmp -> Data);  //print all data of the following nodes
					pTmp = pTmp -> pNext;
				}
				u8Ret = 0;
			}
		}
        return u8Ret;
	}

    extern unsigned char listLength (unsigned char *pCnt)
    {
    	unsigned char nCnt =  0;  //node counter if returns 0  means it fail
		unsigned char u8Ret = 0;
    	ST_Node *pTmp = 0;  //Temporary pointer holds head

    	if(pHead == 0)
		{
			nCnt = 0;
			u8Ret = 1;//no head then fail
		}
		else
		{
			pTmp = pHead;
			if(pTmp == 0)
			{
				nCnt = 0;
				u8Ret = 1;//couldn't catch fail
			}
			else
			{
				while(pTmp != 0)
				{
					nCnt++;
					pTmp = pTmp -> pNext;
				}
				u8Ret = 0;
			}
		}
		*pCnt = nCnt;
		return u8Ret;
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
            if(pTmp->pNext == 0)
			{
				free(pTmp);
				pHead = 0;
			}
			else
			{
				while(pTmp -> pNext -> pNext != 0)
				{
					pTmp = pTmp -> pNext; //get last node
				}
				free(pTmp->pNext) ; //delete tail
				pTmp->pNext = 0;
			}
            u8Ret = 0 ;
        }
        return u8Ret ;
    }

    extern unsigned char addNodeByIndex (ST_Node * pNewNode, unsigned char index)
    {
		ST_Node * pTmp = 0 ;  //catch head address
        ST_Node * pFollowingTmp = 0 ; //catch following node of pTmp
        ST_Node * pNewNodeTmp = 0 ; //new node  pointer
        unsigned char u8Ret = 0 ;
        unsigned char cnt = 0; //check if index reached

        if(pHead == 0 )
        {
            u8Ret = createList(pNewNode) ;  //no head create new list
        }
        else
        {
            pTmp = pHead ;
            while (cnt < (index-1) && pTmp != 0)
            {
                pTmp = pTmp -> pNext; //if index-1 not reached go to next pTmp gonna catch pre-index node
                cnt++;
            }
            pFollowingTmp =  (pTmp->pNext);//gonna catch the following node of pTmp
            pNewNodeTmp = (ST_Node *) malloc(sizeof(ST_Node));//create new node
            if(pNewNodeTmp == 0 )
            {
                u8Ret =1;//couldn't create fail
            }
            else
            {
              pTmp -> pNext = pNewNodeTmp ;//pNext of pre-newNode refers to new node
              pNewNodeTmp -> pNext = pFollowingTmp;//pNext of newNode refers to following node of pre-newNode before creation
              pNewNodeTmp -> Data = pNewNode -> Data; //transfer data
              u8Ret = 0 ;
            }
        }
        return u8Ret ;
    }

	extern unsigned char deleteNodeByIndex (unsigned char index)
	{
		ST_Node * pTmp = 0 ;//catch node gonna be deleted
        ST_Node * pFollowingTmp = 0 ;//next node of pTmp
        ST_Node * pSelectedTmp = 0 ;//pre-node of pTmp
	    unsigned char cnt = 0 ; //check if index reached
        unsigned char u8Ret = 0 ;

        if(pHead == 0 )
        {
             u8Ret = 1 ;
        }
        else
        {
            pTmp = pHead ;
            while(cnt < (index-1))
			{
				pTmp = pTmp -> pNext;//if index not reached go to next
				cnt++;
            }
            pSelectedTmp = pTmp->pNext;// catch pre-node
            pFollowingTmp =  pTmp->pNext->pNext;// catch following node
            pTmp -> pNext = pFollowingTmp;// linking pre-node of the following one
            free(pSelectedTmp) ; //delete node
            u8Ret = 0 ;
        }
        return u8Ret ;
	}

	extern unsigned char readElementByIndex(int index, ST_Node *output)
	{
		unsigned char u8Ret = 0;
		int nCnt = 0;
		ST_Node *pTmp = 0;

		if(pHead == 0)
		{
			u8Ret  = 1;
		}
		else
		{
			pTmp = pHead;
			while(nCnt < index && pTmp != 0)
			{
				pTmp = pTmp->pNext;
				nCnt++;
			}
			output->Data = pTmp->Data;
			output->pNext = pTmp->pNext;
			u8Ret = 0;

		}
	    return u8Ret;
	}





