/*
2015年4月7日14:28:32
选择排序 
*/
# include <stdio.h>

int main(void)
{
	int a[5] = {12,456,45,335,48}; 
	int i,j,k,min,t;
	for(i=0; i<5; i++)
	{
		min = a[i];  //首先把第一个数当做最小 
		for(j=i+1; j<5; j++)  //从第二个数开始,与第一个数进行比较看谁更小 
		{
			if(a[j]<a[i])   //(第一次)找到第二个到最后一个的最小的数与第一个进行比较,并交换 
			{
			   //k = j;
			   t = a[j];
			   a[j] = a[i];
			   a[i] = t;
		    }
		}
	}
	
	for(i=0; i<5; i++)   //输出 
	{
		printf("%d ",a[i]); 
	}
	
	return 0; 
} 
