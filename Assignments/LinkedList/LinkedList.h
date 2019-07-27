	#ifndef LINKEDLIST_H_INCLUDED
	#define LINKEDLIST_H_INCLUDED
	#include "stdlib.h"
	#include "stdio.h"

	// define new type Node
	typedef struct Node
	{
		int Data ;
		//points to the following node
		struct Node *pNext ;
	}ST_Node;


	extern unsigned char createList (ST_Node * pFirst ) ; //Create first node on the list
	extern unsigned char addHead (ST_Node * pNewHead) ; //add new Head node
	extern unsigned char deleteHead (void); //delete Head node
	extern unsigned char addTail  (ST_Node * pNewTail); //add node at the end
	extern unsigned char readElementByIndex(int index, ST_Node *output);
	/**Assignment starts here **/
	extern unsigned char printList (void); //printList upon to head node
	extern unsigned char listLength (unsigned char *pCnt); //return length of list
	extern unsigned char deleteTail(void); //delete last node
	extern unsigned char addNodeByIndex(ST_Node * pNewNode, unsigned char index); // add node according to index
	extern unsigned char deleteNodeByIndex(unsigned char index); // delete node according to index

	#endif // LINKEDLIST_H_INCLUDED
