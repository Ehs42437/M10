#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0; // entered by user
    int int_bits = 0; // total bits - 1
    int dropped_MSB = 0;
    int rotation = 0;

    printf("Enter a number\n");
    scanf("%d",&num);

    printf("Enter rotation number\n");
    scanf("%d",&rotation);

    int_bits = sizeof (int) * 8 -rotation; // calculate number of shifts needed to make MSB a LSB
    dropped_MSB = num >> int_bits; // store the MSB as LSB

    num = num << rotation; // shift left 1 bit

    num = num | dropped_MSB; // store LSB in the shifted number

    printf("The number after rotation is %d\n",num);


    return 0;
}
