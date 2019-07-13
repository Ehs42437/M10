#include <stdio.h>
#include <stdlib.h>

int rotateRight(int x, int n);
int rotateLeft(int y, int z);

int main()
{
    char typeofRotation = 0;
    int noofrotations = 0;
    int number = 0;
    int output = 0;
    printf("the number = ");
    scanf("%d",&number);
    printf("Type of rotation = ");
    scanf("%c",&typeofRotation);

    switch(typeofRotation)
    {
    case 'l':
        {
          printf("no of LeftRotations = ");
          scanf("%d",&noofrotations);
          output=rotateLeft(number,noofrotations);
          break;
        }
    case 'r':
        {
          printf("no of rightRotations = ");
          scanf("%d",&noofrotations);
          output=rotateRight(number,noofrotations);
          break;
        }
    }
        printf("%d",output);

    return 0;
}


int rotateRight(int x, int n)
{
  return ((x >> n) | (x << (32 - n)));
}

int rotateLeft(int y, int z)
{
  return ((y << z) | (y >> (32 - z)));
}
