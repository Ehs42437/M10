#include <stdio.h>
#include <stdlib.h>
#include "SortingHeaders.h"


int main()
{
    int NoofElements = 20;
    int i = 0;
    int arr[NoofElements];
    printf("Please enter No of Array Elements = ");
    scanf("%d",&NoofElements);
    printf("Please Enter the array Elements =\n");
    for(i = 0;i <= NoofElements - 1;i++)
    {
        scanf(" %d",&arr[i]);
    }
    printf("The array =\n");
    for(i = 0;i <= NoofElements - 1;i++)
    {
        printf("%d\n",arr[i]);
    }

    SelectionSort(arr,NoofElements);
    BubbleSort(arr,NoofElements);
    if(!MergeSort(arr,NoofElements))
    {
     printf("The Merge Sorted array =\n");
     for(i = 0;i <= NoofElements - 1;i++)
     {
        printf("%d\n",arr[i]);
     }
    }
    else
    {
        printf("Error in merging ");
    }

    return 0;
}


