#include<stdio.h>
int main(void)
{
	int i = 1,j,sum = 0;
	
	printf("�˳���Ϊ��1�ӵ�ĳ�����ĺ�\n"); 
	printf("������N=");
	scanf("%d",&j);
	
	for(i = 1;i <= j;i++)
	{ 
	sum = sum + i;
	} 
	
	printf("sum = %d\n",sum);
	
	return 0;
} 
