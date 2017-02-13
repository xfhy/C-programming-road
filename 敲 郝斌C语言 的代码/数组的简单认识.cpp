# include <stdio.h>
int main(void)
{
   int a[5] = {1,2,3,4,5};//a是数组名字,5是元素的个数   是从0开始   a[0] a[1] a[2] a[3] a[4] 
   int i; 
   
   for(i=0;i<=4;i++)
   printf("%d",a[i]); 

   return 0;
}

