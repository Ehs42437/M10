/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: charisma
 */
#include "util/delay.h"
#define F_CPU 16000000UL //UL deyat unsigned Long y3ne hytsgl k 4 byte
typedef unsigned char u8;
int main()
{
#define PORTA (*((u8*)0x3B))
#define DDRA  (*((u8*)ox3A))
#define PORTC (*((u8*)0x35))
#define DDRC  (*((u8*)0x34))
#define PORTD (*((u8*)0x32))
#define DDRD  (*((u8*)0x31))

	DDRD = 0xff;//just an initialization for all bits as output also mmkn 0b10101010
	DDRC = 0Xff;//bra el loop 3shan a2kd 3l direction bs l2nheya btst3ml f t7ded heya input wla output
	while(1)
	{
    	   PORTD = 0xff;
    	   PORTC = 0xff;
    	   _delay_ms(500);
		   PORTD = 0x00;
		   PORTC = 0x00;
		   _delay_ms(500);
	}
	return 0;
}

