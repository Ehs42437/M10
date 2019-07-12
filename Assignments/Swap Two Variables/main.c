#include <stdio.h>
#include <stdlib.h>

void swap(int *n1, int *n2){
    int backUp = 0;
    backUp = *n2;
    *n2 = *n1;
    *n1 = backUp;
}
int main()
{
    int x = 5, y = 6;

    printf("Before Swap\n");
    printf("First Var : %d\n", x);
    printf("Second Var : %d", y);

    swap(&x, &y);

    printf("\n\nAfter Swap\n");
    printf("First Var : %d\n", x);
    printf("Second Var : %d", y);

    return 0;
}
