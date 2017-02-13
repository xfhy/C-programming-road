/*
2015年1月30日10:51:12
指针运算：只能相减 
*/

# include<stdio.h>

int main(void)
{
   int i = 666;
   int j = 233;	
   int * p;
   int * q;
   int a[5] = {1,2,3,4,5};    
   
   p = &a[4];
   q = &a[1];
   
   printf("a[1]和a[4]相差%d个单元\n",p - q);      //如果两个指针指向的是同一块连续空间中的不同存储单元
                                                    //则这两个指针可以相减 
	
   return 0;
}

