/*
2015年1月31日10:36:11
静态变量不能跨函数使用 
*/
# include<stdio.h>

void f(int ** q)   //现在*q就是p 
{
	int i = 5;
	*q = &i;
	return; 
}

int main()
{
	int * p;
	f(&p);
	printf("%d\n",*p);  //这里其实是错误的   使用完f()函数后，i就被释放了，然而它却把i的值读出来了
	                   //这是不允许的 
	
	return 0;
}
