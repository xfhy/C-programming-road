/*
2015年1月28日18:09:09
求从2到某个数之间所有的素数 
*/
#include<stdio.h>

bool isprime(int val)  //判断某个数是否是素数 
{
	int i; 
	for(i = 2;i<val;i++)
	{
		if(0 == val%i)
		break;
	}
	if(i == val)
	 return true;
	else
	 return false;
}

void output(int j)  //将2到某个数之间的素数在显示器上输出 
{
	int i;
	for(i = 2;i <= j;i++)
		{
			if(isprime(i))
			printf("%d是素数！\n",i);
	    }
	
} 

int main(void)
{
	int i;
	int m;
	
	printf("本程序功能：求2到某个数之间的所有素数，并输出。\n");
	do
	{
		 
		printf("请输入您需要判断的数字："); 
		scanf("%d",&m);
		output(m);   //输进来的值M将发送给上面函数中定义的j
		 
    }while(1);
	 
	return 0;
} 
