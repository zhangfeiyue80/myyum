#include <math.h>
#include "../basic.h"

#define MINLINE -pow(2,31)

//判断两有符号数和是否溢出,溢出返回0，否则返回1
int tsub_ok(int x,int y)	{

	if(y=MINLINE){
		if( x>=MINLINE&&x<=-1 )
			return 1;
		else
			return 0;
	}
	else
	return tadd_ok(x,-y);

}

int tsub_ok_bug(int x,int y)	{

	return tadd_ok(x,-y);

}
//无用测试函数
int test(void)	{
	int number;
	printf("please input a int number:");
	scanf("%d",&number);
	printf("所输入的int数为:%d;\n该数的负数为:%d;\n该数转化为无符号数为:%u",number,-number,(unsigned)number);
	printf("\n");
	return 0;
}

//无用测试函数
int test1(int y)	{
	printf("-y is %d",-y);
	printf("\n");
	test2(-y);
	return 0;
}

//无用测试函数
int test2(int y)	{
	printf("函数test2参数y值为:%d",y);
	return 0;
}

int main(void)	{
	int number=MINLINE;
	int x,y,flag;

//	int number=-10;

	printf("MINLINE is %d\n",number);

//	test1(number);

	printf("please input x,y(please limit them with \",\")\n");
	scanf("%d,%d",&x,&y);

// buggy function section
	flag=tsub_ok_bug(x,y);
	if(flag==0)
		printf("the buggy function result of x-y overflow!!\n");
	else
		printf("the buggy function result of x-y don't overflow\n");

// right function  section
	flag=tsub_ok(x,y);
	if(flag==0)
		printf("the function result of x-y overflow!!\n");
	else
		printf("the function result of x-y don't overflow\n");

	return 0;
}
