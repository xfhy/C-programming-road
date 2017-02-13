/*
2015年2月7日10:48:17
函数  来判断质数 
*/
# include <stdio.h>
# include <math.h>   //包含sqrt函数 

int isprime(int m)    //判断质数 
{
	int i,k,t=1;
	if(m==0||m==1)
		t = 0;
	else
	{
		k = (int)sqrt(m);
		for(i=2; i<=k; i++)
		{
			if(m%i==0)
			{
			  t = 0;
			  break;       //当m%i==0-时及时终止for 
		    }
			else
			  t = 1; 
		}
	}
	return (t);
}

int main(void)
{
	int m; 
	printf("请输入需要判断的数:");
	scanf("%d",&m);
	if(isprime(m))
	   printf("YES!"); 
	else
	   printf("NO!");	
	return 0;
} 
