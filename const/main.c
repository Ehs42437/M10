#include <stdio.h>
#include <stdlib.h>

int main()
{
    const volatile int x = 1;

    scanf("%d",&x);

    if (x == 1)
    {
        printf("Error 1\n");
    }
    else
    {
        printf("Error 2\n");
    }
    return 0;
}
