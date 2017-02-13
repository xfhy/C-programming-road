/*
当用户应该输入数字时，一不小心输入了英文或者汉字，用下面的while continue可以处理 
2015年1月27日14:45:54 
*/
#include<stdio.h>
int main(void)
{
   int i;
   int j;
   char ch;
   
    
   do
   {
  	 	 printf("请输入i的值：");
   		 scanf("%d",&i);
  		 printf("i = %d\n",i);
   
  		 while((ch = getchar())!='\n')
  		 continue;
   
  		 printf("请输入j的值:");
 	     scanf("%d",&j); 
 	 	 printf("j = %d\n",j);
	}while(1);

   return 0;
}

