#include "linkedlist.h"

static ST_Node *pHead = 0;

extern unsigned char createList(ST_Node *pFirst)
{
    unsigned char u8Ret;
    if(pHead == 0)
    {
        pHead = (ST_Node *) malloc(sizeof(ST_Node));
        if(pHead == 0)
        {
            u8Ret = 1;
        }
        else
        {
         pHead->Data = pFirst->Data;
         pHead->pNext = 0;
         u8Ret = 0;
        }

    else
    {
       u8Ret = 1;
    }
    return u8Ret;

}
extern  unsigned char addHead (ST_Node *pNewHead)
{
    ST_Node *pTmp = 0;
    unsigned char u8Ret = 0;

    if (pHead ==0 )
    {
        createList(pNewHead);
        u8Ret = 1;
    }
    else
    {
       pTmp->Data = pNewHead ->Data;
       pTmp->pNext = pHead;
       pHead = pTmp;
       u8Ret = 0;
    }
   return u8Ret;

}
extern unsigned char deleteHead (void)
{
    ST_Node *pTmp = 0;
    unsigned char u8Ret = 0;
    if (phead == 0)
    {
         u8Ret = 1;
    }
    else
    {
        pTmp = pHead; // in order to know the memory that you are gonna free
        pHead = pHead->pNext;
        free(pTmp);
        u8Ret = 0;
    }
    return u8Ret;
}

extern unsigned char addTail( ST_Node *pTail)
{
    ST_Node *pTmp = 0;
    ST_Node *pNewNode = 0;  //in order to create memory for new node
    unsigned char u8Ret = 0;
    if (pHead ==0)
    {
        u8Ret = createList(pTail);
    }
    else
    {
        pTmp = pHead;
        while(pTmp->pNext != 0 )
        {
            pTmp = pTmp -> pNext;
        }
        pNewNode = (ST_Node*)malloc(sizeof(ST_Node));
        if(pNewNode == 0)
        {
            u8Ret = 1;
        }
        else
        {
            pTmp->pNext = pNewNode;
            pNewNode->pNext = 0;
            pTail = pNewNode;
            u8Ret = 0;
        }
      return u8Ret;
    }
}

// Assignment start from here
extern unsigned char DeleteTail(void)
{
   unsigned char u8ret;
   ST_Node *pTail = 0;
   ST_Node *pTmp = 0;

   if(pHead == 0)
   {
       u8ret = 1;
   }
   else
   {
       pTmp = pHead;
       while(pTmp ->pNext != 0 )
       {
           pTail = pTmp;
           pTmp = pTmp-> pNext;
       }
       free(pTmp);
       pTail->pNext = 0;
       u8ret = 0;
    }

    return u8ret;
}

extern unsigned char addElementbyIndex(int EValue,int EIndex)
{
    unsigned char u8ret;
    ST_Node *pTmp = 0;
    int count = 0;
    int NoofNodes = 0;

    if(pHead == 0)
    {
        createlist(pHead);
        pHead->Data = EValue;
        pHead->pNext = 0;
        u8ret = 0;
    }
    else
    {
        NoofNodes = CountNodes();
        if (NoofNodes < EIndex)
        {
           u8ret = 1;
        }
        else
        {
           pTmp = pHead;
           while (count <= EIndex)
            {
                pTmp = pTmp->pNext;
                count++;
            }
            pTmp->Data = Evalue;
            u8ret = 0;
        }
    }
   return u8ret;
}

extern unsigned char DeleteElementByIndex(int EIndex)
{
  unsigned char u8ret;
  unsigned int NoofNodes = 0;
  unsigned int u8cnt = 0;
  ST_Node *pTmp = 0;
  NoofNodes = CountNodes();

  if(NoofNodes < EIndex)
  {
      u8ret = 1;
  }
  else
    {
        pTmp = pHead;
        while(u8cnt <= EIndex)
        {
            pTmp = pTmp->pNext;
            u8cnt++;
        }
       pTmp->Data = 0;
       u8ret = 0;
    }
  return u8ret;
}

 extern unsigned char CountNodes(void)
 {
     unsigned int NoofNodes = 0;
     ST_Node *pTmp = 0;

     if(pHead ==0)
     {
         NoofNodes = 0;
     }
     else
        {
            pTmp = pHead;
            while (pTmp->pNext != 0)
            {
                pTmp = pTmp->pNext;
                NoofNodes = NoofNodes + 1;
            }
        }

     return NoofNodes;
}

extern unsigned char PrintElementsofLinkedList(void)
{
    unsigned char u8ret = 0;
    unsigned int NoofNodes = 0;
    unsigned int u8cnt = 0;
    ST_Node *pTmp = 0;
    NoofNodes = CountNodes();

    if(pHead == 0)
    {
        u8ret = 1;
    }
    else
    {
        pTmp = pHead;
        while(u8cnt<NoofNodes)
            {
                printf("%c",pTmp->Data);
                pTmp = pTmp->pNext;
            }
            u8ret = 0;
    }

  return u8cnt;

}
