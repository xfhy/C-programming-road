/*
2015年2月20日09:50:56
含有函数的表达式可以任左值 
*/
# include <stdio.h>

int * f(void)
{
	static int n=5;
	printf("%d\n",n);
	return (&n);       //返回静态局部变量的指针 
}

int main(void)
{
	*f()=100;       //在这里我推测应该是先运行函数,再赋值     利用表达式*f()间接修改f的静态局部变量 
	f();           //调用f,输出修改后的静态局部变量值 
	
	return 0;
} 
