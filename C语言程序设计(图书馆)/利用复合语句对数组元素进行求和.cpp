/*
2015��2��14��13:33:35 
���ø�����������Ԫ�ؽ������ 
*/  
# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int main(void)
{
	int a[10],i;    //���������i 
	printf("��������i�ĵ�ַ&i = %x\n",&i);
	srand(time(0));
	for(i=0; i<10; i++)
	   a[i] = rand()%20; 
	for(i=0; i<10; i++)
	    printf("%d ",a[i]);
	printf("\n");
	/*-------�������---------*/
	{
		int i,sum;  //������������ i 
		printf("���Ϻ�����i�ĵ�ַ&i = %x\n",&i);
		sum = 0;
		for(i=0; i<10; i++)
		   sum+=a[i];
		printf("��:%d \n",sum);
	}
	
	return 0; 
}                                 
