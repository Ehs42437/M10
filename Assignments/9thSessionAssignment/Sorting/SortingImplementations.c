#include "SortingHeaders.h"

extern void swap(int *parr2, int *parr1)
{
    int tmp =0;
    tmp = *parr2;
    *parr2 = *parr1;
    *parr1 = tmp;
}

extern void SelectionSort(int *pArr,int NoofElements)
{
    int min = 0;
    for(int i = 0; i <= NoofElements - 1;i++)
    {
          min = *(pArr+i);
          for(int j = i; j <= NoofElements - 1 ;j++)
         {
           if(*(pArr+j) < min)
           {
             min = *(pArr+j);
             swap(pArr+j,pArr+i);
           }
         }
    }
    printf("The selection sorted array =\n");
    printArray(pArr,NoofElements);

}

extern void BubbleSort(int *pArr,int NoofElements)
{
  for (int k = 0; k <= NoofElements - 1;k++)
  {
      for(int i = 0; i <= NoofElements - 2; i++ )
      {
          if(*(pArr+i+1) < *(pArr+i))
          {
              swap(pArr+i+1,pArr+i);
          }
      }
  }
   printf("The Bubble sorted array =\n");
   printArray(pArr,NoofElements);
}

extern void MergeSort(int *pArr)
{
  int mid = 0;
  int NoofElements = sizeof(pArr)/sizeof(int);
  int Left[20];
  int right[20];

  if (NoofElements < 2)
  {
      return;
  }
  else
  {
        mid = NoofElements / 2;
        for(int i = 0;i < mid - 1 ;i++)
        {
            Left[i] = *(pArr+i);
        }
        for(int i = mid; i < NoofElements - 1;i++)
        {
            right[i - mid] = *(pArr+i);
        }
         MergeSort(Left);
         MergeSort(right);
         Merge(Left ,right ,pArr ,mid ,NoofElements - mid ,NoofElements);
  }
}

extern void Merge(int *pLeft ,int *pRight,int *pArr,int NL,int NR ,int N)
{
    int k = 0;
    int i = 0;
    int j = 0;
    while(i < NL && j <NR)
    {
        if(*(pLeft+i) < *(pRight+j))
           {
               *(pArr+k) = *(pLeft+i);
               i++;
           }
           else
            {
                *(pArr+k)=*(pRight+j);
                j++;
            }
            k++;
    }
    while(i < NL)
    {
        *(pArr+k) = *(pLeft+i);
        i++;
        k++;
    }
    while(j < NR)
    {
        *(pArr+k) = *(pRight+j);
        j++;
        k++;
    }

}

extern void printArray(int *pArr,int NoofElements)
{

    for(int k = 0;k <= NoofElements - 1;k++)
          {
            printf("%d\n",*(pArr+k));
          }
}
