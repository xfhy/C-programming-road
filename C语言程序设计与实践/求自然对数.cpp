/*
2015年4月14日22:20:42
求自然对数 
*/
# include <stdio.h>
# include <math.h>
 
int main(void)
{
	double mole,deno=1.0,i=1;   //分子 ,分母 
	double item,sum=0,t;
	int x,j,k=1;
	printf("请输入X:\n");
	scanf("%d",&x); 
	mole = x;   //分子 
	item = x;
	t = 1;
	j = 1;
	while(item>=1e-5)
	{
		item = mole/deno;
		sum = sum + item;
		mole = mole*x;
		//j = 1;
		j++;
		t = j;  //t不断增大 
		while(t>=1)   //求阶乘 
		{
			k = k*t;  //挨个一次乘 
			t--;
		}
		deno = k;  //分母为阶乘的值 
		k = 1;   //把k(阶乘结果)初始化,不然会多乘了 
	}
	printf("%f",sum+1);
	
	return 0; 
} 
