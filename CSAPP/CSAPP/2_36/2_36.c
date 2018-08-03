#include <stdio.h>
#include <stdint.h>
#define MAXLINE	2147483648ll
#define MINLINE	-2147483648ll
/*
  Determine whether arguments can be multiplied without overflow;
  don't overflow ,return 1;overflow return 0
*/


/*	方法一		*/
int tmult_ok(int x,int y)	{
	int p=x*y;
	/* Either x is zero, or dividing p by x gives y */
	return !x || p/x==y;
}



/*	方法二		*/
int tmult_ok1(int x,int y)	{
	int64_t x64=(int64_t)x,y64=(int64_t)y;
	int64_t mul=x64*y64;
//	printf("int64_t类型所占字节数为:%d\n",sizeof(int64_t));
//	printf("int类型所占字节数为:%d\n",sizeof(int));
	printf("int64_t x64值为:%lld\n",x64);
	printf("int64_t x64所占字节数为:%d\n",sizeof(x64));
//	printf("size_t所占字节数为:%d\n",sizeof(size_t));
//	printf("long int所占字节数为:%d\n",sizeof(long int));
//	printf("mul所占字节数为:%d\n",sizeof(mul));
	printf("此两数相乘的积为:%lld\n",mul);
//	if (4294967296ll<MAXLINE && 4294967296ll>=MINLINE)
//		printf("maxline,minline pass test:>\n");
	if (mul<MAXLINE && mul>=MINLINE)
	{
		printf("自写代码返回值为:1\n");
		return 1;
	}
	else
		return 0;
}


int main()	{
	int x,y;
	printf("请输入两有符号整数(介于-2147483648和2147483647之间,两数之间用逗号隔开):\n");
	scanf("%d,%d",&x,&y);
	if(tmult_ok(x,y))
		printf("书中给出的代码判断此两数相乘不溢出:>\n");
	else
		printf("书中给出的代码判断此两数相乘溢出!!\n");
	if(tmult_ok1(x,y))
		printf("自写代码判断此两数相乘不溢出:>\n");
	else
		printf("自写代码判断此两数相乘溢出!!\n");
	return 0;
}
