#include <stdio.h>
#include <stdlib.h>

//Go to statement
/**Example**/
/*
Not recommended cause make readability and meantanbility harder

int x
scanf("%d", &x);

if(x==5)
    go to Jump;
else
    go to jump2

jump: printf("Jump");
jump2: printf("Jump");

*/

//pointer to function
//pointer to void is valid

/*
void *pVoid = 0;
int x = 5;
(pvoid) = &x;

*/
/* return type    parameters
 int (*ptn)(int a, int b)
*/

/*
int add(int x, int y);

int main()
{
    int z = 5;
    int w = 10;
    int res = 0;
    int (*ptn)(int A, int B) = 0;

    ptn = Add;
    res = *ptn(z, w);

    return 0;
}

int add(int x, int y){
    return x+y;
}
*/

// typedef with struct
/*
typedef Struct struct_Name{
    char szName[20];
    int grade;
} typedef_Name ;

same with union and enum
*/


/*
// Type of malloc
(int*)malloc(size with bytes); return pointer to void to use it u need to do an explicit type casting

int x = size;
pArr = (int *)malloc(x * sizeof(int));
pArr[0] = 10;
*(pArr + 2) = 8;

free(pArr); clear pArr data


(void*)calloc(Num elements, sizeOf(int)); same with malloc difference in arguments and this initialize with zero

(void*)realloc(pArrm, new_size); resize memory
*/

// file.h shared between modules
int main()
{

   return 0;
}






