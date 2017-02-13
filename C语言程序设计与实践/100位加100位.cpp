/*
2015年4月9日20:52:59 
100位加100位 
*/

# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int main(void)
{
	int a[60],b[60],c[60];
	int i,j,t = 0;
	srand(time(0));
	for(i=0; i<60; i++)
	{
		a[i] = rand()%10;
	}
	printf("第一个数为:\n");
	printf(" ");
	for(i=0; i<60; i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	
	 
	for(i=0; i<60; i++)
	{
		b[i] = rand()%10;
	}
	printf("第二个数为:\n");
	printf(" ");
	for(i=0; i<60; i++)
	{
		printf("%d",b[i]);
	}
	printf("\n");
	
	printf("相加的和:\n");
	printf("");
	//c[59] = a[59] + b[59];
	for(i=59; i>0; i--)
	{
	    c[i] = a[i] + b[i] + t;
	    t = 0;
		if(c[i]>=10)
		{
			t = 1;
			c[i]=c[i]%10;
		}
	} 
	c[0] = a[0] + b[0] + t;
	for(i=0; i<60; i++)
	{
		printf("%d",c[i]);
	}
	printf("\n");
	
	return 0; 
} 
