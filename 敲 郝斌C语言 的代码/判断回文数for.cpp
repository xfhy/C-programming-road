/*
2015��1��27��09:23:45 
*/
#include<stdio.h>
int main(void)
{
	int m;
	int sum = 0;
	int val;
	
	printf("����������Ҫ�жϵ����֣�");
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
