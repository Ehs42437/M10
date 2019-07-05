#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int originalNum = 0;
    unsigned int timesOfShifts = 0;

    printf("Enter the Number Wanna Be Shifted : ");
    scanf("%d", &originalNum);

    printf("Enter the Times of Shifts : ");
    scanf("%d", &timesOfShifts);

    //left
    printf("LEFT Rotate Shifted Number : %d\n", (originalNum << timesOfShifts) | (originalNum >> sizeof(originalNum) - timesOfShifts));

    //right
    printf("RIGHT Rotate Shifted Number : %d\n", (originalNum >> timesOfShifts) | (originalNum << sizeof(originalNum) - timesOfShifts));

    return 0;
}
