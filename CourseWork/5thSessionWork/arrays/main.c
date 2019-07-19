#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i = 0;
    char str1[10] = {0};
    char str[] = {'H','E','L','L','O'};
    char *pstr = str;
    for(i = 0;i < sizeof(str)/sizeof(char) ;i++)
    {
    printf("%c\n",str[i]);
    printf("%c\n",*(pstr+i));
    }
    printf("%d\n",strlen(str));

    memcpy(str1,str,5);
    for(i = 0;i < 5; i++)
    {
      printf("%c",str1[i]);
    }

    return 0;
}
