/*
2015��2��6��15:42:51
������Ԫ�������ֵ��������Сֵ 
*/
# include <stdio.h>
# include <stdlib.h>   //����rand������srand���������� 
# include <time.h>

int main(void)
{
	int a[5],i,j,t;
	int min;
	srand(time(0));
	for(i=0; i<5; i++)
	   a[i] = rand()%20;
	   
	for(i=0; i<5; i++)  
	   printf("%d\t",a[i]);
	printf("\n");
	
	                        //��һ�ַ���    �Ƽ�ʹ�õ�һ�� 
	t = 0;
	for(i=1; i<5; i++)
	{
        if(a[i] < a[t])
		    t = i; 
    }
	printf("min = %d\n",a[t]);
     /*    
         min = a[0]; 
       	for(i=1; i<5; i++)    //�ڶ��ַ��� 
       	{
       	   if(a[i] < a[0])
       	   {
       	   	  t = a[i];
       	   	  a[i] = a[0];
       	   	  a[0] = t;
	       }
		}
      printf("min = %d\n",a[0]);
      */
	
	return 0;
} 
