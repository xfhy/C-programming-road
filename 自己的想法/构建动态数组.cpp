/*
2015年3月15日20:19:00
构建动态数组 
*/
# include <stdio.h>
# include <malloc.h> 

int main(void)
{
	int n,i;
	int * p;
	printf("请输入动态数组的长度:\n");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
	{
		p[i] = i+1; 
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",p[i]);
	} 
	return 0;
} 
