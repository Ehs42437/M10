#include <stdio.h>
#include <stdlib.h>

enum appstate{
state_1;// value will increment according to last value 0
state_2;// 1
state_3;// 2

}; // x; gonna create new enum
//or write enum appstate x on main;


//typedef to define a new type
typedef char byte;

int main()
{
    // pointer to pointer **ptr = 0;

    //array of pointer | refers to array of char
    //enum build by compiler
    //enum takes integers data types kinda equal struct of integers

    char *pstr[10] = {"hello", "world"};
    return 0;
}
/*
    Union = structure but it overwrite of data ... and take the biggest type

    void sumArr(int * x){
        int res =0, cnt = 0;

        for (cnt = 0; cnt < sizeOfArr; cnt++)
            res += x[cnt];
    }

    struct student{
        char szName[20];
        int u32level;
    };

    struct student x = {{"MAHMOUD}, 10, 5};

    struct student *y;
    printf("%d", y->u32level);
