#include "LinkedList.h"

static ST_Node *pHead = 0;

extern void createList(ST_Node *pFirst){
    unsigned char u8Ret = 0; //fail = 1 , success = 0 flag

    if(pHead == 0){
        pHead = (ST_Node*)malloc(sizeof(ST_Node));

        //if heap is full will return 0
        if(pHead == 0)
            u8Ret = 1;
        else{
            pHead -> data = pFirst -> data;
            pHead -> pNext = 0;
            u8Ret = 0;
        }
        u8Ret = 0;
    }else{

        u8Ret = 1;
    }
    return u8Ret;
}

extern unsigned char addHead(ST_Node *pNewHead){
    // we save data on tmp memory case user free memory doesn't affect on code
    ST_Node *pTmp = 0;
    unsigned char u8Ret = 0;
    if(pHead == 0){
        u8Ret = createList(pNewHead);
    }else{
        pTmp = (ST_Node *)malloc(sizeof(ST_Node));
        if(pTmp == 0)
            u8Ret = 1;
        else{
            pTmp -> data = pNewHead -> data;
            pTmp -> pNext = pHead;
            pHead = pTmp;
            u8Ret = 0;
        }
    }
    return u8Ret;
}

extern unsigned char deleteHead(void){
    unsigned char u8Ret = 0;
    ST_Node *pTmp = 0;

    if(pHead == 0)
        u8Ret = 1;
    else{
        pTmp = pHead;
        pHead = pHead -> pNext;
        free(pTmp);
        u8Ret = ;
    }
    return u8Ret;
}

extern unsigned char addTail(ST_Node *pNewTail){
    unsigned char u8Ret = 0;
    ST_Node *pTmp = 0; // last node
    ST_Node *pNewNode = 0; // new node

    if(pHead == 0){
        u8Ret = createList(pNewTail);
    }else{
        pTmp = pHead;
        while(pTmp -> pNext != 0){
            pTmp = pTmp -> pNext;
        }

        pNewNode = (ST_Node *) malloc(sizeof(ST_Node));
        pNewNode -> pNext = 0;
        if(pNewNode == 0)
            u8Ret = 1;
        else{
            pTmp -> pNext = pNewNode;
            pNewNode -> data = pNewTail -> data;
            u8Ret = 0;
        }

        u8Ret = 0;
    }

    return u8Ret;
}
