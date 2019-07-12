#include <stdio.h>
#include <stdlib.h>

    int X; // bss memory seg initialized by default as 0
    int Y = 1;  // data
    static int W = 5;  // data
    static int A; // bss
    const int Z = 0; //  ro data
    int main()
    {
        int O; // stack
        int M = 5; // stack
        static int V; // bss
        static int Q = 0; // data
        const int R = 0; // ro data
    }
