#include<stdio.h>
#include<math.h>
void main()
{
	int i,num,len=0,temp,comp;
	scanf("%d",&num);
	temp = num;
	while(1)
	{
		len++;
		num=num/10;
		if(abs(num)==0)
			break;
	}
	num = temp;
	comp = pow(10,len) - num;
	printf("%d",comp);
}
