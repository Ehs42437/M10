#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input = 0;
    int u8cnt2 = 2;
    int u8cnt3 = 3;
    int u8cnt5 = 5;
    int u8cnt7 = 7;

    printf("Number = ");
    scanf("%d",&input);

    if(input > 100)
    {
        printf("Error Please Enter a number less than 100");
    }

    else if(input >=0 && input <= 100)
    {
    for (int maincnt = 0;maincnt <= input ;maincnt++)
    {
        if(maincnt == 2*u8cnt2)
        {
            printf(" ");
            u8cnt2 = u8cnt2 + 1;
            continue;
        }
        if (maincnt == 3*u8cnt3)
        {
            printf(" ");
            u8cnt3 = u8cnt3 + 1;
            continue;
        }
        if (maincnt == 5*u8cnt5)
        {
            printf(" ");
            u8cnt5 = u8cnt5 + 1;
            continue;
        }
        if (maincnt ==7*u8cnt7)
        {
            printf(" ");
            u8cnt7 = u8cnt7 + 1;
            continue;
        }
        else
        {
            printf("  %d", maincnt);
            continue;
        }
    }
    }
    return 0;
}









