#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#includ "stdlib.h"
typedef struct Node
{
    int Data;
    struct Node *pNext;
}ST_Node;

extern unsigned char createList(ST_Node *pFirst);
extern unsigned char addHead (ST_Node *pNewHead);
extern unsigned char deleteHead (void);
extern unsigned char addTail(ST_Node *pTail);
extern unsigned char DeleteTail(void);
extern unsigned char addElementbyIndex(int EValue,int EIndex);
extern unsigned char CountNodes(void);
extern unsigned char DeleteElementByIndex(int EIndex);
extern unsigned char PrintElementsofLinkedList(void);

#endif // LINKEDLIST_H_INCLUDED
