#include <stdio.h>
#include <string.h>

int htoi(const char*);
int getRawInt(char);

int main()
{
        char *hex = "6c";
        printf("%c", htoi(hex));
        return 0;
}

int htoi(const char *hex)
{
    const int LEN = strlen(hex) - 1;
    int power = 1;
    int dec = 0;

    for(int i = LEN; i>=0 ; i--)
    {
        dec +=getRawInt(hex[i])*power;
        power *= 16;
    }
    return dec;
}

int getRawInt(char c)
{
    if(isalpha(c))
    {
        return toupper(c) - 'A' +10;
    }
    return c - '0';
}
