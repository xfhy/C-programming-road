/*
2015年1月29日09:08:52
全局变量和局部变量 
*/
#include <stdio.h>

int k = 10000;  //全局变量

void f(int i)    //i和j都是局部变量 
{
	int j;
	printf("k = %d\n",k);
} 
int main()
{
	f(67);    
	
	return 0;
}
