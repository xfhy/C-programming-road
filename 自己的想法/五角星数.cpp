/*
2015年5月19日20:31:52
五角星数 
*/
# include <stdio.h>
# include <math.h>

int main(void)
{
	int x,a,b,c,d,e,t,i=0;
	int g[100]={0};
	for(x=10000; x<=99999; x++)
	{
		t = x;
		a = x%10;
		a = pow(a,5);
		x/=10;
		b = x%10;
		b = pow(b,5);
		x/=10;
		c = x%10;
		c = pow(c,5);
		x/=10;
		d = x%10;
		d = pow(d,5);
		x/=10;
		e = x%10;
		e = pow(e,5);
		x/=10;
		if(t==(a+b+c+d+e))
		{
			g[i] = t;
			i++;
		}
	} 
	int max=0,min=0;
	for(int j=0; g[j]!=0; j++)
	{
		if(max<g[j])
			max = g[j];
		if(min>g[j])
		   min = g[j];
	}
	
	printf("max=%d,min=%d\n",max,min);
	return 0; 
} 
