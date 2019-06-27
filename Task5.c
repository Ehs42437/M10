#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num=0;

    printf("Please enter the number: ");

    scanf("%d", &Num);

    if(Num & 0x1)
    {
        printf("ODD");
    }

    else
    {
        printf("EVEN");
    }

    return 0;
}
