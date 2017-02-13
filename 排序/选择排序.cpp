/*
2015年4月7日14:28:32
选择排序 
*/
#include<stdio.h>

int main(void)
{
	int a[10]={45,12,45,56,78,46,49,46,46,79};
	int i,j,k,m;
	for(i=0;i<9;i++)
	{
		k=i;            //第一次,第一个数 
		for(j=i+1;j<10;j++)   //从第二个数开始到最后与第一个数进行比较,找最大的 
		{
		  if(a[k]>a[j])
		    k=j;
		}
		if(k!=i)     //找到最大的与第一个数交换 
		{
			m=a[i];
			a[i]=a[k];
			a[k]=m;
		}
	}
	printf("由选择法由小到大排序后:\n");
	for(i=0;i<10;i++)
	printf("%4d",a[i]);
	printf("\n");
	
	return 0; 
}
