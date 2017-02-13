/*
2015年4月1日22:46:02
亲密对数 
*/

# include <stdio.h>
# include <math.h>

int main(void)
{
	long int n,a,b,m,i,sum1=0,sum2=0;
	for(a=6; a<=5000; a++)
	{
		for(b=6; b<=5000; b++)
		{
			for(i=1; i<=a/2; i++)
			{
				if(a%i==0)
				  sum1 = sum1+i;
			}
			for(i=1; i<=b/2; i++)
			{
				if(b%i==0)
				  sum2 = sum2+i;
			}
			if(sum1==b && sum2==a && a!=b)
			{
			  printf("%ld %ld是亲密数!\n",a,b);
			   
		    }
		    sum1=0;
			sum2=0;
		}
	}
	return 0; 
} 
