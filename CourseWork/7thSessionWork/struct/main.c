#include <stdio.h>
#include <stdlib.h>

struct student
{
    char arr[10];
    int Grade;
};
int main()
{
    struct student y ;
    struct student *x = &y;
    strcpy (y.arr,"Ahmed");
    strcpy(x->arr ,"Ahmed2" );
    printf("%s",y.arr);
    printf("%s",x ->arr);
    return 0;
}
