#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inputchar = 0;
    char outputchar = 0;

        printf("Enter Char : ");
        scanf("%c", &inputchar);

        if(inputchar >= 65 && inputchar <= 90)
        {
             outputchar = inputchar + 32;
             printf("%c\n", outputchar);
        }

        else if  (inputchar >= 97 && inputchar <= 122)
        {
            outputchar = inputchar - 32;
            printf("%c\n", outputchar);
        }


    return 0;
}
