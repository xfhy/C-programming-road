/*
2015年2月6日12:06:54
1到100的和 
*/
# include <stdio.h>

int main(void)
{
	int i;
	int j;
	int sum = 0;
	
	for (i = 1; i <= 100; i++ )
	{
		sum +=i;
	}
	printf("%d",sum);
	return 0;
} 
