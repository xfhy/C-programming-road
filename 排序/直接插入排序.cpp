# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void)
{
	int a[10];
	srand(time(0));//��ֵ 
	for(int i=0; i<10; i++)
	{
		a[i] = 1+rand()%100;
	}
	int k,j;
	for(int i=1; i<10; i++)
	{
		k = a[i];
		j = i-1; 
		while( (j>=0)&&(k<a[j]) )   //Ѱ����Ҫ����ĵط� 
		{
			a[j+1] = a[j];   //������ 
			j--;
		}
		a[j+1] = k;
	} 
	
	for(int i=0; i<10 ;i++)  //��� 
	{
		printf("%d ",a[i]);
	}
	
	return 0;
} 
