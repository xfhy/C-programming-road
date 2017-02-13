/*
2015Äê3ÔÂ29ÈÕ13:26:07
½×³Ë 
*/
# include <stdio.h>

int main(void)
{
	int t = 1,res,i=1,n;
	scanf("%d",&n);
	/*
	while(i<=n)
	{
		t = t*i;
		i++; 
	}*/
	for(i=1; i<=n; i++)
	{
		t = t*i;
	}
	
	printf("%d",t); 
	
	return 0; 
} 
