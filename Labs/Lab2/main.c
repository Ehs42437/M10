#include <stdio.h>
#include <stdlib.h>

void part1(){

    // unsigned == var + u
    //printf(#x, ) >> hexa print 0xff

    /*
    float x = 3.1;

    // if x == 3.1 output : wrong cause there's rounding rule make 3.1 = 3.0999 if we add (f) casting

    if(x == 3.1f){
        printf("correct\n");
    }else{
        printf("wrong");
    }
    */

    //reverse loop with 0 take less time
    char x = 10;
    int y = (char)x;
    printf("%d", y);

    //Bad behave
    int z = 10;
    printf("%d %d %d", x++, ++x , x);
    //11 11 10

    //continue to skip one loop
}
int main(){
    int x = 0;
    do{
    if(1){
        printf("%d\n",x);
        continue;
    }
    printf("%d\n",0);
   }while(x < 30);

    return 0;
}
