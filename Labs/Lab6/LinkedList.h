#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include "stdlib.h"
/**LinkedList**/
typedef struct Node{
    int data;
    struct Node *pNext;
}ST_Node;

extern unsigned char createList(ST_Node *pFirst);
extern unsigned char addHead(ST_Node *pNewHead);
extern unsigned char deleteHead(void);
extern unsigned char addTail(ST_Node *pNewTail);

//delete tail
//add element by index
//delete element by index
//print linked list

#endif // LINKEDLIST_H_INCLUDED
