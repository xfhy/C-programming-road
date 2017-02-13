#include<stdio.h>
int main(void)
{
	int i = 1,j,sum = 0;
	
	printf("此程序为从1加到某个数的和\n"); 
	printf("请输入N=");
	scanf("%d",&j);
	
	for(i = 1;i <= j;i++)
	{ 
	sum = sum + i;
	} 
	
	printf("sum = %d\n",sum);
	
	return 0;
} 
