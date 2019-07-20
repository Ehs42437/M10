#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void R_array(int *parr, int n);

int main()
{
    int arr[10],i,j,n,temp;
    printf("Enter the number of array elements:\n");
    scanf("%d",&n);

    printf("Enter the array elements :\n");
    for(i=0;i<n;i++)
        scanf("%d\n",&arr[i]);
    R_array(arr,n);
    printf("The reversed array is :\n");
    for(i = 0;i < n;i++)
        printf("%d\n",arr[i]);
    getch();

    return 0;
}

void R_array(int *parr,int n)
{
    int temp ;
    int i = 0;
    int j= n-1;

    while(i<j)
    {
        temp = *(parr+i);
        *(parr+i) = *(parr+j);
        *(parr+j) = temp;

        i++;
        j--;
    }

}

