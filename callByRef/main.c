#include <stdio.h>
#include <stdlib.h>

void Add (int *x, int *y,int *res);

int main()
{
    int z = 5;
    int w = 6;
    int r = 0;

    Add(&z,&w,&r); // means we call by addresses

    printf("%d\n",r);
    return 0;
}
void Add (int *x, int *y,int *res)
{
    *res = (*x) + (*y); // need the value
}
