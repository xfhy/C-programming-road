/*
2015年5月13日11:34:15
希尔排序shell 
*/
#include<stdio.h>
int main(void)
{
	int a[10] = {56,56,61,23,564,15,4,16,89,15};
	int i,j,k=9,t;
	while(k>0)
	{
		for(i=k;i<10;i++)
		{
			j=i-k;
			while(j>=0)
			  if(a[j]>a[j+k])
			    {
				  t=a[j];
				  a[j]=a[j+k];
				  a[j+k]=t;
				}
			  else 
			    break;
		}
		k/=2;
	}
	printf("你输入的数字希尔排序由小到大排序为:\n");
	for(i=0;i<10;i++)
	  printf("%4d",a[i]);
	printf("\n");
}
