#include <stdio.h>

int main()
{
    long long u8cnt1=0;
    long long u8cnt2=0;

    printf("Please insert a number: ");
    scanf("%d", &u8cnt1);

    for (u8cnt2=u8cnt1-1 ; u8cnt2>0 ; u8cnt2--)
    {
        u8cnt1= u8cnt1 * u8cnt2;
    }

    printf("The factorial= %d", u8cnt1);

    //kol ma el raqam bykbar law makabartesh el data type zay men int l long aw long long haydene =0 3ashan hy3mmel overflow

    return 0;
}
