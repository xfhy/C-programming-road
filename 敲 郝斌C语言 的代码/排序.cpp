#include<stdio.h>
int main(void)
{
    int i, j, k,t;
	scanf("%d %d %d",&i, &j,&k);
		if(i>j)
		{
			t = i;
			i = j;
			j = t;
		}
		if(i>k)
		{
			t = i;
			i = k;
			k = t;
			
		}
		if(j>k)
		{
			t = k;
			j = k;
			k = t;
			
		}
		
		printf("%d %d %d",i,j,k); 
	
	return 0;
} 
