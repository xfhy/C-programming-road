/*
2015��1��27��16:40:59
һ������ȫ�����Ƹ���һ������ 
 
*/
# include <stdio.h>
int main(void)
{
   int i;
   int a[5] = {1,2,3,4,5};
   int b[5];
   
   /*for(i=0;i<=4;i++)
   {
   	b[i]=a[i];                    //for��while�����໥ת�� 
   	printf("%d",b[i]); 
   } */
   
   i=0;
   while(i<=4)
   {
   	b[i]=a[i];
   	printf("%d",b[i]);
   	i++;
   }
    
   return 0;
}

