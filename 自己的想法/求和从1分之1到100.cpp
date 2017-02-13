/*
2015年2月6日12:09:33
求1+1/2+1/3+...+1/100的和 
*/

# include <stdio.h>

int main(void)
{
	int i;
	float sum = 0;
	for(i = 0;i <= 100;i++)
	{
		sum = sum + 1/(1.0+i);   //必须加小数,不然他会求出来得整数,则1/2,1/3等等都等于0 
	}
	printf("%f",sum);
	
	return 0;
} 
