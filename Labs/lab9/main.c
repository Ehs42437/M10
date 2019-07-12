#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *pvoid = 0 ;
    int x = 5 ;
    (pvoid) = &x ;
    scanf("%d" ,(int*)(pvoid)) ;
    printf("%d" , *((int*)(pvoid))) ;

    return 0;
}
