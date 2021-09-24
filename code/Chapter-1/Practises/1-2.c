/*
【练习1-2】
需求：向printf函数的参数字符串中添加转义字符\c，并观察结果 
*/

#include <stdio.h>

int main(void)
{
	printf("HelloWorld!\c");
}

/*
结论：\c并不属于转义字符序列的一部分，因此编译器会抛出异常 
*/
