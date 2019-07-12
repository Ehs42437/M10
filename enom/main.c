// ENUM
#include <stdio.h>
#include <stdlib.h>

enum AppState
{
    State_One, // by default 0 if no value added // if initialized with = 1
    State_Two, // by default 1 if no value added // increment = 2
    State_Three, // by default 2 if no value added // increment = 3
}y,z; // create 2 variables from type enum [if global will initialize by the value of 1st state if not defined or can get any of the three states]

int main()
{
    enum AppState x = State_One; // x can take a value from this data type with 1 of 3 states values // x is int


    printf("Hello world!\n");
    return 0;
}
