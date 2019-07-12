#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][3]={{0,1,2},{3,4,5}};
    /* char cnt1;
    char cnt2;

    for (cnt1 = 0 ; cnt1 < 2 ; cnt1++)
    {
        for (cnt2 = 0 ; cnt2 < 3 ; cnt2++)
        {
            printf("%d\n",arr[cnt1][cnt2]);
        }
    }
*/
// another method
    int (*pArr)[3] = arr; // pointer to array of 3 elements
    //int *(pArr)[3] = arr; // pointer to array of 3 pointers
    char i = 0;
    char j = 0;

    for (i = 0 ; i < 2 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
        printf("%d\n",*(*(pArr + i)+j)); // syntax to access array
        }
    }
    return 0;
}
