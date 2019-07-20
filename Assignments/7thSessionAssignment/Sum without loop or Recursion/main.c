#include <stdio.h>

int main()
{

    int N = 5, sum = 0;

    int array[] = { 1, 2, 3, 4, 5 };

    sum = sumarr(array, N);

    printf("%d", sum);
}
int sumarr(int array[], int N)
{
    int sum = 0, index = 0;

label:
    sum = sum + array[index++];

    if (index < N)
    {
        goto label;
    }
    return sum;
}
