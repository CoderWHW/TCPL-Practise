/*
使用公式：摄氏度 = (5/9) (华氏度-32)打印0°~300°的摄氏-华氏温度整数对照表（以20为阶梯） 
*/ 
#include <stdio.h>

int main(void)
{
	int fahr,Celsius;	//定义整数变量，华氏度和摄氏度 
	int lower,upper,step;
	
	lower = 0;		//温度表下限 
	upper = 300;	//温度表上限 
	step = 20; 		//步长
	
	while(lower <= upper)	//重复执行，括号中为终止语句 
	{
		fahr = lower;
		Celsius = 5 * (fahr-32) /9;
		printf("%d\t%d\n",fahr,Celsius);
		
		lower += step;	//相当于lower = lower + step; 
	} 
	
	return 0;
}
