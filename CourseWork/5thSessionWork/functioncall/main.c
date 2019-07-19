#include <stdio.h>
#include <stdlib.h>

void Add(int *pvar1 , int *pvar2,int *pres);

int main()
{
    int var1 = 10;
    int var2 = 5;
    int res = 0;
    Add(&var1 , &var2 , &res);
    printf("the sum = %d",res);
    return 0;
}
void Add(int *pvar1 , int *pvar2 , int *pres)
{
    *pres =  *pvar1 + *pvar2 ;
}
