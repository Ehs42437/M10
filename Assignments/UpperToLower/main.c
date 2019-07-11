#include <stdio.h>
#include <stdlib.h>

int main()
{
    char originalChar = 0;
    char convertedChar = 0;


    while(1){
        printf("Enter Char : ");
        scanf("%c", &originalChar);
//this switch statement supported only in GNU C standard
        switch(originalChar){
            case 'a' ... 'z' : printf("Converted Char to Upper : %c\n", (originalChar - 32));
                               break;

            case 'A' ... 'Z' : printf("Converted Char to Lower : %c\n", (originalChar + 32));
                               break;

            default : break;
        }
    }

    return 0;
}
