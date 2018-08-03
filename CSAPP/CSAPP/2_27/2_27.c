#include<stdio.h>

int uadd_ok(unsigned x,unsigned y)
{
	unsigned sum;
	sum=x+y;
	if(sum<x)	
		return 0;
	else
		return 1;
}

int main()
{
	unsigned sum,x,y;
	sum=sizeof(unsigned);
	printf("unsigned所占字节大小为:%u\n",sum);
	printf("------------------------------\n| 判断两无符号数的和是否溢出 |\n------------------------------\n请输入两数:(以逗号分割)\n");
	scanf("%u,%u",&x,&y);
	sum=uadd_ok(x,y);
	if(sum==1)
		printf("数%u和数%u的和不会产生溢出\n",x,y);
	else
		printf("数%u和数%u的和溢出\n",x,y);
	return 0;
}
