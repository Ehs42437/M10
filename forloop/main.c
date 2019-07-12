#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char u8cnt = 0;

    for (u8cnt=10; u8cnt> 0;u8cnt--) // if > 0 will be faster as comparing to zero is more faster [zero already stored]
        // saved 1 instruction in each loop // loading takes most long clock cycles
    {
        printf("%d\n",u8cnt);
    }

    printf("End of the game!\n");
    return 0;
}
