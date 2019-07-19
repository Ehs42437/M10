#include <stdio.h>
#include <stdlib.h>
int x ; // .bss as it is global variable not initialized [RAM]
int y = 1; // .data global variable initialized [RAM]
static int v = 1; // .data as it is static global variable initialized [RAM]
static int A; //.bss as it is static global variable not initialized [RAM]
const int z = 0; // .rodata as it's constant [ROM]

int main()
{
    int o; //stack as it's local variable not initialized
    int M = 5; //stack as it's local variable initialized
    static int V ; //.bss as it's static local variable not initialized
    static int q = 0;// .data as it's static local variable initialized
    const int R = 0; //.rodata as it's constant [ROM]
    return 0;
}
