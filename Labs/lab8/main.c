#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0 ;
    scanf("%d" , &x) ;
    if (x == 5)
    {
        goto jump ;
    }
    else
    {
        goto jump2 ;
    }

    jump :
    printf("jump\n");
    jump2 :
    printf("jump2\n") ;
    return 0;
}
