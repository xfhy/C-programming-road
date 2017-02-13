/*
2015年4月2日22:55:47
爱因斯坦台阶问题 
*/
# include <stdio.h>

int main(void)
{
	int n;
	for(n=1; n<1000; n++)
	{
		if(n%2==1 && n%3==2 && n%5==4 && n%6==5 && n%7==0)
		  printf("%d\n",n);
	} 
	
	return 0; 
} 
