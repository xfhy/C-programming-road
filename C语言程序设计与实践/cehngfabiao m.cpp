# include <stdio.h>

int main(void)
{
	int i,j,k;
	for(i=1; i<=9; i++)
	{
		for(k=1; k<=i; k++)
		{
			printf("%d*%d=%d ",i,k,i*k);
		}
		printf("\n");
	}
	
	return 0;
}
