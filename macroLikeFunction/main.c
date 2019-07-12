#include <stdio.h>
#include <stdlib.h>
/*
#define SUM (X,Y) ((X) + (Y))
int main()
{
    int z = 0;
    z = SUM (5,6);
    printf("%d",z);
    return 0;
}

*/
//#define MAX (x,y) ((x) > (y))?(x):(y)  // if x>y will return x , else return y

// Define macro to find sum of two numbers
#define SUM(x, y) ((x) + (y))

int main()
{
    int num1, num2;

    // Input two numbers from user
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    // Calculate and print sum using macro
    printf("Sum(%d, %d) = %d\n", num1, num2, SUM(num1, num2));

    return 0;
}
