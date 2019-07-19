#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *pvoid = 0;
    int x = 5;
    int *pint = 0;
    pvoid = &x;
    pint = pvoid;
    printf("%d",*(int*)(pvoid));
    //printf("%d",*(pvoid));

}
