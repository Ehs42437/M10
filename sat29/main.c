#include <stdio.h>
#include <stdlib.h>
#include "string.h"

//Function prototyope

int add(int var1,int var2)
{
    return var1+ var2;
}

int main()
{
char x=0;
char y=0;
unsigned char z =0 ;
scanf("%d",&x);
scanf("%d",&y);
 z = add(x,y);
printf("final result %d\n",z);

return 0;


}

