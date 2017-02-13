/*
5.17 编程:输入n,输出n的所有质数因子(如n=13860,则输出2,2,3,3,5,7,11) 
*/
# include <stdio.h>

int jugle(int n)
{
	int i;
	for(i=2; i<n; i++)
	{
		if(n%i==0)
		  break; 
	}
	if(n==i)
	  return n;
	else
	  return 0; 
}

int main(void)
{
	int n,i=2,j;
	scanf("%d",&n);
    //printf("%d",jugle(n)); 
    while(n%2==0)   //输出n的所有2因子 
    {
    	n/=2;
    	printf("2  ");
	}
	
    for(j=3; j<=n; j+=2)    //再查找3,5,7....这些因子 
	{
		while(n%j==0)
		{
			n/=j;     //如果那个质数可以除清,那么就输出来 
			printf("%d  ",j);
		} 
	} 
	
	return 0; 
} 
