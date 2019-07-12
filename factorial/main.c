/*#include <stdio.h>
#include <stdlib.h>

int main()
{
  int cnt = 1;
  int num = 1;

  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &num);

  cnt = num-1;

  //while (cnt > 1)
  //for (cnt = num - 1; cnt > 1; cnt--) // 1 not matter is * gives same result
    do {
        num = num * cnt;
        cnt--; // only for while loop
    }while (cnt >1);

  printf("Factorial is %d\n", num);
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

int multi (int x);

int main()
{
    int x = 5;
    int res = 0;
    res = multi(x);
    printf("%d",res);
    return 0;
}
int multi (int x)
{
    if (x == 1)
        return 1;
        return x * multi(x-1);
}
