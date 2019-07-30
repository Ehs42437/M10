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
    printArray(arr,NoofElements);
    SelectionSort(arr,NoofElements);
    BubbleSort(arr,NoofElements);
    MergeSort(arr);
    printf("The Merge Sorted array =\n");
    printArray(arr,NoofElements);

    return 0;
}


