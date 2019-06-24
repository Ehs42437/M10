#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num;
    unsigned int rotation;
    unsigned int shift_num;
    unsigned int shift_drop;

    printf("Enter a number\n");
    scanf("%d",&num);

    printf("Enter number of rotates\n");
    scanf("%d",&rotation);

    shift_num = num << rotation;
    shift_drop = num >> (8 - rotation);

    printf("After %d rotations, the new number is %d\n",rotation,(shift_num | shift_drop));

    return 0;
}
