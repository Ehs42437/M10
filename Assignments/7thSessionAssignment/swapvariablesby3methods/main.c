#include <stdio.h>
#define SWAP(x, y)  temp = x; x = y; y = temp;

int main()
{
    int a = 0;
    int b = 0;
    int temp;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);

    //first method
    temp = a;
    a = b;
    b = temp;
    //second method (function call back)
    swap(&a,&b);
    //using Macro
    SWAP(a, b);

    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}


void swap(int *x, int *y)
{
    if(x != y)    // Checking that x and y are not pointing to the same location
    {
        *x ^= *y;
        *y ^= *x;
        *x ^= *y;
    }
}

