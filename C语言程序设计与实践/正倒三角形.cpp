/*
2015年4月1日22:11:57
正倒三角形 
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
	for(i=0; i<x; i++)   //打印x-1行 
	{
		for(j=0; j<=i; j++)
		{
			printf(" ");
		}
		for(k=0; k<=2*x-4-2*i; k++)   //注意行数与x的关系 
		{
			printf("*"); 
		}
		printf("\n");
	}
	
	return 0; 
} 
