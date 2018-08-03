#include <stdio.h>
#include "../basic.h"

#define MAXLINE 2^32-1

//方法二:
//判断两有符号数和是否溢出,溢出返回0，否则返回1

int tadd_ok2(int x,int y){
	int sum=x+y;
	return (sum-x==y)&&(sum-y==x);
}

//方法一:
//判断两有符号数和是否溢出,溢出返回0，否则返回1

/*
int tadd_ok1(int x,int y)
{
	int flag;
	unsigned sum;
	flag=uadd_ok((unsigned)x,(unsigned)y);
	sum=(unsigned)x+y;
	if(flag==0)
		return 0;
	else if(sum>MAXLINE)
		return 0;
	else
		return 1;
}
*/

int tadd_ok1(int x,int y)
{
	int flag;
	int sum;
	sum=x+y;
	if(x>0 && y>0 && sum<=0)
		return 0;
	else if(x<0 && y<0 && sum>=0)
		return 0;
	return 1;
}

int main()
{
	int x,y;
	int flag;
	int sum;	//用于判断是否溢出

//	printf("unsigned int数据类型所占字节大小为:%d\n",sizeof(unsigned));

	printf("请输入两个有符号整数(以逗号分隔,范围为-2.1475e+009~2.1475e+009):\n");
	scanf("%d,%d",&x,&y);
	sum=x+y;
	flag=tadd_ok1(x,y);
	if(flag==0)
		printf("方法一判断:输入的两有符号整数的和溢出:<\n和为:%d\n",sum);
	else
		printf("方法一判断:输入的两有符号整数的和未溢出:>\n和为:%d\n",sum);
	flag=tadd_ok2(x,y);
	if(flag==0)
		printf("方法二判断:输入的两有符号整数的和溢出:<\n和为:%d\n",sum);
	else
		printf("方法二判断:输入的两有符号整数的和未溢出:>\n和为:%d\n",sum);
	return 0;
}

