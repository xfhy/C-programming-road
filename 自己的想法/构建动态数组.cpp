/*
2015��3��15��20:19:00
������̬���� 
*/
# include <stdio.h>
# include <malloc.h> 

int main(void)
{
	int n,i;
	int * p;
	printf("�����붯̬����ĳ���:\n");
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
