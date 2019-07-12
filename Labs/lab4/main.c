#include <stdio.h>
#include <stdlib.h>

int main()
{

   unsigned int u32degree = 0 ;
   printf("Please enter student degree\n");
   scanf("%d",&u32degree);
   switch (u32degree/10)
{
    case 0 :
    printf("Grade is fail\n");
    break;
    case 1 :
    printf("Grade is fail\n");
    break;
    case 2 :
    printf("Grade is fail\n");
    break;
    case 3 :
    printf("Grade is fail\n");
    break;
    case 4 :
    printf("Grade is fail\n");
    break;
    case 5 :
    printf("Grade is pass\n");
    break;
    case 6 :
    printf("Grade is good\n");
    break;
    case 7 :
    printf("Grade is very good\n");
    break;
    case 8 :
    printf("Grade is excellent\n");
    break;
    case 9 :
    printf("Grade is fail\n");
    break;
    case 10 :
    printf("Grade is fail\n");
    break;
    default :
    break;
}

 return 0;
}
