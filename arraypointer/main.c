#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    char arr [10] = {0};
    char cnt = 0;

    * (arr + 0) = 1; // add 0 + the address of array and add 1 in the new address > array address still no change
    * (arr + 1) = 2; // add 1 + the address of array and add 2 in the new address > array address still no change

    for (cnt = 2; cnt < 10 ; cnt ++)
    {
        *(arr+cnt)=cnt;
    }

    return 0;
}

*/
int main ()
{
    char *pChar = "Hello World!!!"; // compiler assigned address as "" are found
    // stored in rodata as it takes strings and constant
    *(pChar+4) = 'w'; // change string no. 5 from O to W

    printf("%s",pChar); // will give error as we try to access wrong memory
    return 0;
}
