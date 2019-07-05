#include <stdio.h>

int main()
{
    int x=500;
    char y=128;     // el default signed

    y=x;    //data truncation occurs!! hayakhood el least significant byte bas!! fa da kda ba2a implicit type casting
            //3ashan el computer el 3amalha b nafso

    printf("%d",y);   //httla3 b -12!

    return 0;
}
