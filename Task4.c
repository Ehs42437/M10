#include <stdio.h>
#include <stdlib.h>

int main()
{
   int check=0;
   int Num=0;

   printf("Enter the number: ");

   scanf("%d", &Num);

   check = Num%2;

   switch(check)
   {
        case 1:
            printf("ODD");
            break;

        case 0:
            printf("EVEN");
            break;

        default:
            printf("Enter your number");
            break;
   }

    return 0;
}
