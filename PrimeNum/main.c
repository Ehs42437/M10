#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt;

    for (cnt = 1; cnt <= 3; cnt++)
    {
        printf("%d\n",cnt);
    }


    for (cnt = 4; cnt <= 30; cnt++)
    {
        if ((cnt%2) == 0)
        {
            ;
        }
        else if ((cnt%3)==0)
        {
            ;
        }
        else if ((cnt%5)==0)
            {
                ;
            }
        else
            {
                printf("%d\n",cnt);
            }
    }

    return 0;
}
