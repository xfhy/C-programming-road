/*
���û�Ӧ����������ʱ��һ��С��������Ӣ�Ļ��ߺ��֣��������while continue���Դ��� 
2015��1��27��14:45:54 
*/
#include<stdio.h>
int main(void)
{
   int i;
   int j;
   char ch;
   
    
   do
   {
  	 	 printf("������i��ֵ��");
   		 scanf("%d",&i);
  		 printf("i = %d\n",i);
   
  		 while((ch = getchar())!='\n')
  		 continue;
   
  		 printf("������j��ֵ:");
 	     scanf("%d",&j); 
 	 	 printf("j = %d\n",j);
	}while(1);

   return 0;
}

