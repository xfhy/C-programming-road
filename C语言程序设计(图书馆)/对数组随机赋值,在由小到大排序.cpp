/*
2015-2-6 16:51:42
�����������ֵ,����С�������� 
*/
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void)
{
	int i,a[5];
	srand(time(0));
	for(i=0; i<5; i++)
	   a[i] = rand()%20;
	for(i=0; i<5; i++)
	   printf("%d\t",a[i]);
	 printf("\n"); 
	
	int j,t;             //ð������ 
	for (i=0; i<4; i++)     //��ཻ�����鳤�ȼ�һ��  �����뿴:1,2,3,4,5 
	{
	  for(j=0; j<4; j++)     //��һ�ν����ķ������ұ�,�ڶ��ΰѵڶ���ķ��ڵ����ڶ��� 
	  {
	      if(a[j] < a[j+1])    //ifĬ��ֻ�ܿ���һ�����, �Ҳ�,��ס!!!!! 
	      {
	         t = a[j];
	         a[j]= a[j+1];
	         a[j+1] = t;
	      }
	  }
    }
    
    for(i=0; i<5; i++)
	   printf("%d\t",a[i]); 
	   
	return 0;
} 
