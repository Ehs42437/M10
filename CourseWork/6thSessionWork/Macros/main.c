#include <stdio.h>
#include <stdlib.h>
#define SUM(x,y) ((x)+(y))
#define MAX(l,n) ((l)>(n)?(l):(n))

int main()
{

    int z = 0;
    int m = 0;
    z = SUM(5,11);
    m = MAX(5,11);
    printf("%d %d",z , m);
    return 0;
}
