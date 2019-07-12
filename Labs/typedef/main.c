#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0 ;
    int *parr = 0 ;
    scanf("%d" , &x) ;
    parr = (int*)malloc(x * sizeof(int)) ;
    parr[0] = 10 ;
    parr[1] = 9;
    *(parr+2) = 8;
    printf("%d\n" , parr[0]) ;
    printf("%d\n" , *(parr+1)) ;
    scanf("%d" , parr[3]) ;
    free(parr) ;

    return 0;
}
