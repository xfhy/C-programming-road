#include<stdio.h>
# include <stdlib.h>
# include <time.h>

void sort(int *a,int n)  //数组名,长度 
{
	int i,j,t;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++) 
		{
		   if(a[j] > a[j+1])
		   {
		   	  t = a[j];
		   	  a[j] = a[j+1];
		   	  a[j+1] = t;
		   }	
		}
	}
}

int main(void)
{
    int a[1000],i;
	srand(time(0));
	for(i=0; i<1000; i++)
	{
		a[i] = rand()%100 + 1;
		printf("%4d ",a[i]);
	}
	printf("\n\n");
	printf("-------------------------------------------------------------");
	printf("\n\n");
    sort(a,1000);
    
    for(i=0; i<1000; i++)
	{
		printf("%4d ",a[i]);
	}
	
	return 0;
} 
