/*
2015年1月27日09:23:45 
*/
#include<stdio.h>
int main(void)
{
	int m;
	int sum = 0;
	int val;
	
	printf("请输入您需要判断的数字：");
	scanf("%d",&val);
	
	for(m=val;m;m/=10)
	{
		sum = sum*10 + m%10;
	} 
	
	if(sum = val)
	  printf("Yes!\n");
	else
	  printf("No!\n");
	return 0;
}
