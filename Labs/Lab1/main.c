#include <stdio.h>
#include <stdlib.h>
// #include "stdib.h" search for lib in project

void part1(){

	unsigned int u32Input = 0;
	printf("Enter u32Input : "); scanf("%d", &u32Input); printf("\n\nInput = %d\n", u32Input);


	// %d specifies location of decimal number sequentially
	// %c specifies location of char sequentially
	printf("Size of Int = %d\n" ,sizeof(int));
	printf("Size of Double = %d\n" ,sizeof(double));
	printf("Size of Float = %d\n" ,sizeof(float));
	printf("Size of char = %d\n" ,sizeof(char));
	printf("Size of long = %d\n" ,sizeof(long));
	printf("Size of long long = %d\n" ,sizeof(long long));
	printf("Size of short = %d\n" ,sizeof(short));

	// %0.4f 0.0000 >> %f 0.000000 >>> to specific format for decimal number
	//%20 spaces from left %-20 space from right
	printf("%020d", 41);

	//to add range case 100 ... 80 in switch
	// (0101) var << 1 (1010)  left shift
	//0x1 hexa 0000001
}

int main(int argc, char *argv[]) {
	return 0;
}
