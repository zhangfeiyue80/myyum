#include <stdio.h>
#include "../basic.h"

int div16(int x)
{
	int number=x;
	printf("the bit of x is:");
	show_bytes(&number,sizeof(int));

	number=((1<<4)-1)&(number>>31);
	printf("the bit of ((1<<4)-1)&(x>>31) is:");
	show_bytes(&number,sizeof(int));
	return (number+((1<<4)-1)&(number>>31))>>4;
}


int main()
{
//	printf("unsigned int所占字节数为%d\n",sizeof(unsigned int));
	printf("char所占字节数为%d\n",sizeof(char));
	int number;
	printf("please input a int number x:");
	scanf("%d",&number);
	printf("the value of x/16 is %d\n",div16(number));
	return 0;
}
