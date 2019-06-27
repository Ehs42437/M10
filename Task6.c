#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number=0;

    int rotatetimes=0;

    printf("Enter your number\n");

    scanf("%d",&number);

    printf("Enter number of rotations\n");

    scanf("%d",&rotatetimes);

    rotateleft(number,rotatetimes);

    rotateright(number,rotatetimes);

        return 0;
}

int rotateright (unsigned int NUM,int rotatingtimes)
{

    int x=0;

    int y=0;

    x = 32;

    y=(NUM>>rotatingtimes )| (NUM<< (x-rotatingtimes));

    printf("%d\n",y);

    return (y);
}
int rotateleft (unsigned int NUM,int rotatingtimes)
{

    int x=0;

    int y=0;

    x = 32;

    y=(NUM<<rotatingtimes )| ((NUM>> x-rotatingtimes));

    printf("%d\n",y);

    return (y);
}

