#include <stdio.h>
#include <stdlib.h>
#define debug

int main()
{
    unsigned char x = 0 ;
    unsigned char y = 5 ;
    char z = 0 ;
    scanf("%c",&x);

    #ifdef debug
    if (x == '0')
    {
        printf("error %d" , x) ;
    }
    #endif // debug

    z = y/x ;
    printf("result is %d\n" , z);

    return 0;
}
