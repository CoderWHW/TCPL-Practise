/*
ʹ�ù�ʽ�����϶� = (5/9) (���϶�-32)��ӡ0��~300�������-�����¶��������ձ���20Ϊ���ݣ� 
*/ 
#include <stdio.h>

int main(void)
{
	int fahr,Celsius;	//�����������������϶Ⱥ����϶� 
	int lower,upper,step;
	
	lower = 0;		//�¶ȱ����� 
	upper = 300;	//�¶ȱ����� 
	step = 20; 		//����
	
	while(lower <= upper)	//�ظ�ִ�У�������Ϊ��ֹ��� 
	{
		fahr = lower;
		Celsius = 5 * (fahr-32) /9;
		printf("%d\t%d\n",fahr,Celsius);
		
		lower += step;	//�൱��lower = lower + step; 
	} 
	
	return 0;
}
