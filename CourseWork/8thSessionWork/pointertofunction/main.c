#include <stdio.h>
#include <stdlib.h>

int Add(int x , int y);

int main()
{
    int var1 = 5;
    int var2 = 10;
    int Res = 0;
    int (*pAdd)(int A , int B) = 0;
    pAdd = Add;
    Res = (*pAdd)(var1,var2);
    printf("%d",Res);

    return 0;
}

int Add(int x , int y)
{
    return x + y;
}
