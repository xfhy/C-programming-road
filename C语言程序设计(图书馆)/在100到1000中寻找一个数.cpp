/*
2015年3月8日22:26:37
在100到1000中寻找这样的质数,它的个位数字和十位数字之和对10求余等于百位数字 
*/
# include <stdio.h>

int judge(int m)
{
	int i,val;
	for(i=2; i<m; i++)
	{
		if(m%i==0)
		  break;
	}
	if(i==m)
	  return 1;
	else
	  return 0;
} 

int main(void)
{
	int i,j,k,t,m,n;
	for(m=100; m<=1000; m++)
	{ 
	  if(judge(m))
	  {
	  	  t = m/100;    //百位
		  k = m/10-t*10;//十位 
	  	  j = m%10;    //个位 
	  	  n = (k +j)%10;
	  	  if(n==t)
	  	     printf("%d \n",m);
	  	  
	  }
   }
   
	return 0;
} 
