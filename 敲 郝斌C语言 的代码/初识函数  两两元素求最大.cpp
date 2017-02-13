/*
2015年1月27日20:33:26
函数
求两两元素之和 
*/
# include <stdio.h>
     //max只是函数的名字，i和j是形参 
void max(int i,int j)//插在main函数之前，引用   比较两数谁大 
{
	if(i>j)
	printf("%d\n",i);
	else
	printf("%d\n",j);
} 

int main(void)//首先执行的是main函数 
{
   int a,b,c,d,e,f;
   a=14;
   b=54;
   c=543;
   d=45;
   e=34;
   f=35;
   
   max(a,b);//程序会跳到max内函数去执行  a的值发送给i,b的值发送给j;使用完一次之后，给i,j分配的空间会被释放掉 
   max(c,d);
   max(e,f);

   return 0;
}

