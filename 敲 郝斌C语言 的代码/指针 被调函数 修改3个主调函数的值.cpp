/*
2015年1月29日20:05:21
指针 定义函数  修改3个值，再返回 
*/ 

#include <stdio.h>

void revise(int * p,int * q,int * i)  //修改下面3个数的值 
{
	*p = 233;
	*q = 233;
	*i = 6666666;
	
	return;
}

int main()
{
	int a,b,c;
	
	a = 1;
	b = 2;
	c = 3;
	
	 revise(&a,&b,&c);//&a发送给p 
	 printf(" a = %d\n b = %d\n c = %d\n",a,b,c);
	
	return 0;
}
