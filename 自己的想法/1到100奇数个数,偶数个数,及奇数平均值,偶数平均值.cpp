/*
2015��2��6��13:00:30
1��100��������,ż������,������ƽ��ֵ,ż��ƽ��ֵ 
*/
# include <stdio.h>
# include <Windows.h>

int main(void)
{
	system("title 1��100��������,ż������,������ƽ��ֵ,ż��ƽ��ֵ ");
	int  i;
	float ave1,ave2;
	float sum1 = 0,sum2 = 0;
	int j = 0,k = 0;
	
	for (i = 2;i <= 100;i+=2) //ż�� 
	{
		sum1 = sum1 +i;
		j = j+1;
	}
	printf("ż������=%d,ż����=%f,ż��ƽ��ֵ=%f\n",j,sum1,sum1/j);
	
	for (i = 1;i <= 100;i+=2) //���� 
	{
		sum2 = sum2 +i;
		k = k+1;
	}
	printf("��������=%d,������=%f,����ƽ��ֵ=%f\n",k,sum2,sum2/j);
	
	return 0;
} 
