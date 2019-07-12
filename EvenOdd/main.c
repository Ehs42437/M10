#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    /*if (number%2 == 0)
    {
        printf("The number is Even");
    }
    else
     {
     printf("The number is Odd");
     }*/
    if (number & 0x1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
    return 0;
}
