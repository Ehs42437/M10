#include <stdio.h>
#include <stdlib.h>
int main()
{
    int grade=0;

    printf("Enter your grade: ");

    scanf("%d", &grade);

    switch(grade)
    {
        case 0 ... 49:
            printf("Fail");
            break;

        case 50 ... 59:
            printf("Passed");
            break;

        case 60 ... 69:
            printf("Good");
            break;

        case 70 ... 79:
            printf("Very good");
            break;

        case 80 ... 100:
            printf("Excellent);
            break;

        default:
            printf("Enter your grade ");
            break;

    }
    return 0;
}
