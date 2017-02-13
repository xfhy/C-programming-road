/*
   2015年1月28日13:27:08
   函数声明 
*/
# include <stdio.h>

void  f(void);//如果把函数写在最下面，则要先声明一下，这里就是声明 

int main()
{
	f();
	return 0;
} 
void f(void)
{
	printf("haha!\n");
} 
