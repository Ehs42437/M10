#include <stdio.h>
#include <stdlib.h>

int main()
{
    int res = 0;
    int maxVal = 0;
    int centerPoint = 0;
    int array [10] = {1,2,3,4,5,6,7,8,9,10};

    maxVal = 10;
    centerPoint = (sizeof(array)/(sizeof(int)*2)-1);
    res = centerPoint * maxVal + array[centerPoint];

    printf("Result = %d", res);

    return 0;
}
