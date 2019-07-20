#include <stdio.h>
#include <stdlib.h>

void R_array(int arr[],int size);

int main()
{
    int arr[10],i,size;
    printf("Enter the number of array elements:\n");
    scanf("%d",&size);

    printf("Enter the array elements :\n");
    for(i=0;i<size;i++)
        scanf("%d\n",&arr[i]);
    R_array(arr,size);
    printf("The reversed array is :\n");
    for(i = 0;i < size;i++)
        printf("%d\n",arr[i]);
    getch();

    return 0;
}

void R_array(int arr[],int size)
{
    int temp ;
    int start = 0;
    int  end = size - 1;

    if(start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
        R_array(arr+1,size-2);
    }
}
