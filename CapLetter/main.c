#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char small;
    unsigned char capital;

    printf("Enter a small letter\n");
    scanf("%c",& small);

    capital = small - 32;

    printf("The capital letter of %c is %c\n",small,capital);
    return 0;
}
