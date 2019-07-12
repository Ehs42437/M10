#include <stdio.h>
#include <stdlib.h>

int main()
{
   int var1 ;
   scanf("%d",&var1);
   if (var1 & 0x1)
   {
    printf("odd");
   }
   else
   {
    printf("even");
   }
    return 0;
}
