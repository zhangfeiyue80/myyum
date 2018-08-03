#include <stdio.h>
float sum_elements(float a[],unsigned length)	{
	int i;
	float result=0;

	for (i=0;i<length;i++)
	{
		result += a[i];
//		printf("%d	%f\n",i,result);
	}
	return result;
}
int main(){
	int number,i;
	float b[50];
	printf("您将输入几个浮点数?\n");
	scanf("%d",&number);
	for(i=0;i<number;i++)
		scanf("%f",b+i);
//	sum_elements(b,number);
	printf("输入的所有浮点数求和结果为:%f\n",sum_elements(b,number));
}
