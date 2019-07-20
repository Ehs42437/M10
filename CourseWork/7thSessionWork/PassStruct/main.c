#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int passStruct(struct student *x);
struct student
{
    char arr[10];
    int Grade;
};
int main()
{
    struct student y;
    z = passStruct(&y);
    printf("s",z.arr);
    return 0;
}

int passStruct(struct student *x)
{
    strcpy(x->arr ,"Ahmed2");
    x->Grade = 50;
}
