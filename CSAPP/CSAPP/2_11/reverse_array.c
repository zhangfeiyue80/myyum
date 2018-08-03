#include<stdio.h>
#include<string.h>

void inplace_swap(int *x,int *y){
	*y=*x^*y;
	*x=*x^*y;
	*y=*x^*y;
}
void reverse_array(int a[],int cnt){
	int first,last;
	for (first=0,last=cnt-1; first <last; first++,last--)
	inplace_swap(&a[first],&a[last]);
}
int main(){
	int number[20],i,n,num;
	printf("请输入将输入整数的个数:(回车结束输入):");
	scanf("%d",&n);
	printf("请输入%d个任意位数的整数(回车分隔/结束输入):\n",n);
	num=0;
	for(i=1;i<=n;i++){
		scanf("%d",number+(num++));
	}
	reverse_array(number,num);
	printf("头尾对调后的数组为:\n");
	num=0;
	for(i=1;i<=n;i++){
		printf("%d",number[num++]);
	}
	printf("\n");
	return 0;
}
