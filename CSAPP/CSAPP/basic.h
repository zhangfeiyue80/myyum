#include <stdio.h>
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, size_t len) 
{
	size_t i;
	for (i=0;i<len;i++)
		printf(" %.2x",start[i]);
	printf("\n");
}

//判断两无符号数和是否溢出,溢出返回0，否则返回1
int uadd_ok(unsigned x,unsigned y)
{
	unsigned sum;
	sum=x+y;
	if(sum<x)	
		return 0;
	else
		return 1;
}

//判断两有符号数和是否溢出,溢出返回0，否则返回1
int tadd_ok(int x,int y)
{
	int flag;
	flag=uadd_ok((unsigned)x,(unsigned)y);
	if(flag==0)
		return 0;
	else
		return 1;
}

//判断int型数是正数还是负数,正数返回０，负数返回１
int posi_neg(int x)
{
	unsigned int number=(unsigned int)x;
	return (int)((number-((number<<1)>>1))>>31);
}
