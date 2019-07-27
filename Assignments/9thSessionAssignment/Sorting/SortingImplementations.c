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
    for(int i = 0;i <= NoofElements -1 ;i++)
    {
        printf("%d\n",*(pArr+i));
    }

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
    for(int i = 0;i <= NoofElements -1 ;i++)
    {
        printf("%d\n",*(pArr+i));
    }
}

extern unsigned char MergeSort(int *pArr,int NoofElements)
{
  unsigned char u8Ret;
  int mid = 0;
  int Left[mid];
  int right[NoofElements - mid];

  if (NoofElements <2)
  {
      u8Ret = 1;
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
         MergeSort(Left,mid);
         MergeSort(right,NoofElements-mid);
         Merge(Left ,right ,pArr ,mid ,NoofElements-mid ,NoofElements);
         u8Ret = 0;
    }

    return u8Ret;
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
