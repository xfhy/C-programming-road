/*
2015��2��6��15:27:11
�����ָ����� 
*/
# include <stdio.h>
# include <stdlib.h>  //����rand������srand�������� 
# include <time.h>   //����time���������� 

int main(void)
{
	int a[10],i;
	int * p;
	srand(time(0));
	
	for (i=0; i<10; i++)   //�ٺź������ո�ȽϺÿ� 
		a[i] = rand()%20;   //�����������ֵ 
	for (i=0; i<10; i++)
	    printf("%d\t",a[i]);
	p = a;
	for (i=0; i<10; i++)
	    p[i]++;
	for(i=0; i<10; i++)
	    printf("%d\t",a[i]);
	
	
	return 0;
} 
