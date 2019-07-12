// pointer to pointer
#include <stdio.h>
#include <stdlib.h>

int main()
{

    //int **p32_pointer = 0; // pointer to pointer > address number 0 (reset vector - start point) - OS may make virtual address 0

    char *pStr[2]={"Hello World","123456"};
    char cnt = 0;
   // *(pStr[0]+1)  // if i need the 2nd value in the 1st pointer of strings

    printf("%c\n",*(pStr[0]+1)); // to print e
    printf("%s\n",(pStr[0])); // %s to print all string but removed * to call the address not the value
    printf("%c\n",*(pStr[0]+12)); // to print 1
    printf("%c\n",*(pStr[1]+0)); // to print 1

    for (cnt = 0;cnt < 2; cnt ++)
    {
        printf("%s", (pStr[cnt])); // print all strings
        printf(" "); // make space between strings
    }

    printf("\n"); // make line before end of program

    return 0;
}
