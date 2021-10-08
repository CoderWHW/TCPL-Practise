/*
使用公式：摄氏度 = (5/9) (华氏度-32)打印0°~300°的摄氏-华氏温度整数对照表（以20为阶梯） 
修改版：浮点运算版本 
*/ 
#include <stdio.h>

int main(void)
{
	float fahr,celesius;
	int lower,upper,step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	
	while(fahr <= upper)
	{
		celesius = (5.0/9.0) * (fahr - 32.0);
		printf("fahr:%3.0f\tcelesius:%6.1f\n",fahr,celesius);
		fahr += step;
	}
	
	return 0;
}
/*
注：
%3.0：至少占3个字符宽，不带小数部分
%6.1：至少占6个字符宽，保留1位小数 
*/
