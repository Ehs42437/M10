#include <stdio.h>
#define DEBUG

int main()
{
    char x = 0;
    char y = 5;
    char z = 0;

    printf("Enter a number\n");
    scanf("%c",&x);

    #ifdef DEBUG
    if (x =='0')
    {
        printf("x value is %d\n",x);
    }
    #endif // DEBUG

    z = y / x;

    printf("Result is %d\n",z);
    return 0;
}
