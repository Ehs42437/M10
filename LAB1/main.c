#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int var=0;
    scanf("%d",&var);//& bt7ot el makan bta3 el input gowa el zero
   if (var&0x1)
   {
       printf("odd");
   }
   else
   {
       printf("evem");
   }
}
