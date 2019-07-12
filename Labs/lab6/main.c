#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0 ;
    int type = 0;
    int array [10] = {0,1,2,3,4,5,6,7,8,9};
for (i=0;i<=9;i++)
    {
        type = array [i];
        printf("%d\n",type);
    }
    return 0;
}
