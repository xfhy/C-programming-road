/*
2015��4��3��12:26:43
����3ɫ������ 
*/
# include <stdio.h>

int main(void)
{
	int i,j,k,l=0;
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=3; j++)
	    {
	    	for(k=1; k<=6; k++)
	    	{
	    		if(i+j+k==8)
	    		  l++; 
			}
		}
	} 
	printf("%d",l);
	return 0; 
} 
