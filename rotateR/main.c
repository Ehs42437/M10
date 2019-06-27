#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int rotation = 0;
    int dropped_LSB = 0;

    printf("Enter a number to rotate right!\n");
    scanf("%d",&num);
    printf("Enter number of rotation!\n");
    scanf("%d",&rotation);

    dropped_LSB = num << ((sizeof (int) * 8) - rotation);

    num = num >> rotation;

    num = num | dropped_LSB;

    printf("After rotation number is %d\n",num);

    return 0;
}
