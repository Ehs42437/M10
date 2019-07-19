#include <stdio.h>
#include <stdlib.h>
#define DEBUG

int main()
{
    char x = 0;
    char y = 20;
    char res = 0;
    scanf("%d",&x);

    #ifdef DEBUG
    printf("%d\n",x);
    #endif

    res = y/x;
    printf("%d",res);

    return 0;
}
