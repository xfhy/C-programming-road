/*
2015��2��7��09:06:26
 ѡ������ 
*/
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void)
{
	int i,j,t,m;
	int a[10];
	srand(time(0));
	
	for(i=0; i<10; i++)
	   a[i] = rand()%20;
	   
	printf("��һ��������������:\n"); 
	for(i=0; i<10; i++)
	   printf("%d ",a[i]);
	printf("\n");

/*------�Լ����------*/	
	for(i=0; i<10; i++)
	 {
	 	for(j=0; j<10;j++)
		 {
		 	if(a[j] < a[j+1])
		 	{
		 		t = a[j];
		 		a[j] = a[j+1];
		 		a[j+1] = t;
			 }
		 } 
	 } 
	 
	 printf("��һ�������:\n");
	 for(i=0; i<10; i++)
	    printf("%d ",a[i]);
	printf("\n"); 
    
    /*--------�̿����ϵ��㷨--------�о���ˬ----*/	
	srand(time(0));
	
	printf("�ڶ���������������:\n");
	for(i=0; i<10; i++)
	   a[i] = rand()%30;
	   
	for(i=0; i<10; i++)
	   printf("%d ",a[i]);
	 printf("\n");  
 
	for(i=0; i<10; i++)
	{
		m = i;
		for(j=i+1; j<10;j++)
		{
			if(a[j] > a[m])
			m = j;
		}
		if(m!=i)
		{
			t = a[i];
			a[i] = a[m];
			a[m] = t;
		}
	} 
	
	printf("�ڶ��������:\n");
	for(i=0; i<10; i++)
	   printf("%d ",a[i]);
	return 0;
} 
