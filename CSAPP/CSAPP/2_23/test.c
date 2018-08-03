#include "../basic.h"
int fun1(unsigned word){
	return (int) word  >> 24;
}
int main(){
	unsigned int number;
	int number1;
	printf("please input a hex number:");
	scanf("%u",&number);

	printf("number的位表示为:");
	show_bytes((byte_pointer) &number,sizeof(int));
	printf("number to decimalist is %d\n",number);
	printf("(int) number >> 24值为%d\n",fun1(number));

	printf("(int) number >> 24位表示为");
	number1=fun1(number);
	show_bytes((byte_pointer) &number1,sizeof(int));
}
