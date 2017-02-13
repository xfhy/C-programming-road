#include<stdio.h>
int main(void)
{
	int i=1,sum = 0;
	while(i<=100)
	{
		sum = sum + i;
		i++; 
	}
	printf("%d",sum); 
	return 0;
}
