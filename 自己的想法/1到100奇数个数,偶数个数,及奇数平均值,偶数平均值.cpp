/*
2015年2月6日13:00:30
1到100奇数个数,偶数个数,及奇数平均值,偶数平均值 
*/
# include <stdio.h>
# include <Windows.h>

int main(void)
{
	system("title 1到100奇数个数,偶数个数,及奇数平均值,偶数平均值 ");
	int  i;
	float ave1,ave2;
	float sum1 = 0,sum2 = 0;
	int j = 0,k = 0;
	
	for (i = 2;i <= 100;i+=2) //偶数 
	{
		sum1 = sum1 +i;
		j = j+1;
	}
	printf("偶数个数=%d,偶数和=%f,偶数平均值=%f\n",j,sum1,sum1/j);
	
	for (i = 1;i <= 100;i+=2) //奇数 
	{
		sum2 = sum2 +i;
		k = k+1;
	}
	printf("奇数个数=%d,奇数和=%f,奇数平均值=%f\n",k,sum2,sum2/j);
	
	return 0;
} 
