#include "linkedlist.h"

static ST_Node *pHead = 0;

extern unsigned char createList(ST_Node *pFirst)
{
    unsigned u8Ret;
    if(pHead == 0)
    {
        pHead = (ST_Node *) malloc(sizeof(ST_Node));
        if(pHead == 0)
        {
            u8Ret = 1;
        }
        else
        {
         pHead -> Data = pFirst ->Data;
         pNext = nullptr ;
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
        pHead = pHead -> pNext;
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
            pTmp -> pNext = pNewNode;
            pNewNode ->pNext = nullptr;
            pTail = pNewNode;
            u8Ret = 0;
        }
      return u8Ret;
    }
}
