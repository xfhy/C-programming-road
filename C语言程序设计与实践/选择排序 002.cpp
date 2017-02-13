/*
2015年4月8日12:40:30 
选择排序 
*/
# include <stdio.h>

int main(void)
{
	int a[5] = {31,5423,54,667,54};
	int i,j,min,t;
	for(i=0; i<5; i++)
	{
		min = a[i];
		for(j=i+1; j<5; j++)
		{
			if(a[i]<a[j])
		    {
		    	t = a[i];
		    	a[i] = a[j];
		    	a[j] = t;
			}
		}
	} 
	for(i=0; i<5; i++)
	{
		printf("%4d",a[i]);
	}
	return 0; 
} 
