/*
2015��2��6��12:09:33
��1+1/2+1/3+...+1/100�ĺ� 
*/

# include <stdio.h>

int main(void)
{
	int i;
	float sum = 0;
	for(i = 0;i <= 100;i++)
	{
		sum = sum + 1/(1.0+i);   //�����С��,��Ȼ���������������,��1/2,1/3�ȵȶ�����0 
	}
	printf("%f",sum);
	
	return 0;
} 
