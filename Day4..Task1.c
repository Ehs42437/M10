#include <stdio.h>

int main()
{
    float y=3.5;
    float x=3.1;

    if (x==3.1)         //should be correct!! bas tel3et wrong
    {
        printf("correct\n");
    }
    else
    {
        printf("wrong\n");
    }

    //while this will work correctly!!

    if (y==3.5)
    {
         printf("correct\n");
    }
    else
    {
        printf("wrong\n");
    }
    return 0;
}

//because we didnt use the type casting!! fa el number bytgghayar due to the rounding of memory l7ad ma ywsal l shakl
//number * exponential!!




