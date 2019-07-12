#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    const int *const pointer = &x;


    (*pointer)++; // will give error as I want to change address of a constant pointer

    return 0;
}
