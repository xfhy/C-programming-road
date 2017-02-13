/*
2015年1月27日16:40:59
一个数组全部复制给另一个数组 
 
*/
# include <stdio.h>
int main(void)
{
   int i;
   int a[5] = {1,2,3,4,5};
   int b[5];
   
   /*for(i=0;i<=4;i++)
   {
   	b[i]=a[i];                    //for与while可以相互转化 
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

