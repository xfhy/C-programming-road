/*
2015��4��1��22:11:57
���������� 
*/
# include <stdio.h>

int main(void)
{
	int i,j,k,x;
	scanf("%d",&x);
	for(i=0; i<=x; i++)
	{
		for(j=x-i; j>0; j--)
		{
			printf(" "); 
		}
		for(k=0; k<2*i-1; k++)
		{
			printf("*");
		} 
		printf("\n");
	} 
	for(i=0; i<x; i++)   //��ӡx-1�� 
	{
		for(j=0; j<=i; j++)
		{
			printf(" ");
		}
		for(k=0; k<=2*x-4-2*i; k++)   //ע��������x�Ĺ�ϵ 
		{
			printf("*"); 
		}
		printf("\n");
	}
	
	return 0; 
} 
