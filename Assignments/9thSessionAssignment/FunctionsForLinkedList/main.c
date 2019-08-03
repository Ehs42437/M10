#include <stdio.h>
#include <stdlib.h>
#include "Linkedlist.h"
#include "LinkedStack.h"
#include "LinkedQueue.h"

int main()
{
    //Testing linked list
    ST_Node *pElem1 = 0;
    ST_Node *pElem2 = 0;
    ST_Node *pElem3 = 0;
    ST_Node *pElem4 = 0;
    ST_Node *pRead = 0;
    unsigned int Valu = 0;
    unsigned int NoofNodes = 0;
    pElem1 = (ST_Node*)malloc(sizeof(ST_Node));

    if(pElem1 == 0)
    {
        printf("Error1");
    }
    else
        {
            pElem1->Data = 6;
            pElem1->pNext = 0;

            if(!createList(pElem1))
            {
                pElem2 = (ST_Node*)malloc(sizeof(ST_Node));
                if(pElem2 == 0)
                {
                 printf("Error2");
                }
                else
                    {
                      pElem2->Data = 5;
                      pElem2->pNext = 0;
                      if(!addTail(pElem2))
                      {
                        free(pElem1);
                        free(pElem2);
                        pElem3 = (ST_Node*)malloc(sizeof(ST_Node));
                        if(pElem3 == 0)
                       {
                          printf("Error 3");
                       }
                       else
                          {
                              pElem3->Data = 8;
                              pElem3->pNext = 0;
                              if(!addHead(pElem3))
                              {
                                    printf("The list before adding new element = \n");
                                    printList();
                                    free(pElem3);
                                    pElem4 = (ST_Node*)malloc(sizeof(ST_Node));
                                    if(pElem4 == 0)
                                    {
                                        printf("Error 4");
                                    }
                                    else
                                    {
                                        pElem4->Data = 3;
                                        pElem4->pNext = 0;
                                        if(!addElementByIndex(pElem4,2))
                                        {
                                          pRead = (ST_Node*)malloc(sizeof(ST_Node));
                                          NoofNodes = listLength();
                                          readElementByIndex(0,pRead);
                                          Valu = pRead->Data;
                                          printf("The list after adding the New Element = \n");
                                          printList();
                                          printf("NO OF NODES = %d\n",NoofNodes);
                                          printf("The Read Element = %d\n",Valu);
                                          //deleteHead();
                                          deleteTail();
                                          printf("The list after deleting Tail = \n");
                                          printList();
                                        }
                                    }

                              }
                          }
                       }
                      }
                    }
            }


    return 0;
}
