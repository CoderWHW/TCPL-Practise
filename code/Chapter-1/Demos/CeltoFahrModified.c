/*
ʹ�ù�ʽ�����϶� = (5/9) (���϶�-32)��ӡ0��~300�������-�����¶��������ձ���20Ϊ���ݣ� 
�޸İ棺��������汾 
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
ע��
%3.0������ռ3���ַ�������С������
%6.1������ռ6���ַ�������1λС�� 
*/
