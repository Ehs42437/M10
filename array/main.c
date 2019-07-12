#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int arr [10] = {0,1,2,3,4,5,6,7,8,9};

    for (i=0;i<(sizeof(arr)/sizeof(int));i++)
    {
        printf("%d\n",arr[i]);
    }

    //Size of array , number of elements
    printf("Size of array %d\n",sizeof(arr)/sizeof(int));

    return 0;
;}
