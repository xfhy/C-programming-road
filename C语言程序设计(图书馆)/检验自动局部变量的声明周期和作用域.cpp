/*
2015年2月14日13:23:27
检验自动局部变量的声明周期和作用域 
*/
# include <stdio.h>

void abf(void)
{
	int a,b;
	printf("&a = %x, &b = %x\n",&a,&b);
}

void cde()
{
	int c,d;
	printf("&c = %x, &d = %x\n",&c,&d);
}
int main(void)
{
	int x,y;
	printf("main: &x=%x , &y=%x \n",&x,&y);
	abf();
	cde();
	printf("main: &x=%x , &y=%x \n",&x,&y);
	abf(); 
	return 0;
} 

/*
输出结果:
main: &x=28feac , &y=28fea8
&a = 28fe2c, &b = 28fe28
&c = 28fe2c, &d = 28fe28
main: &x=28feac , &y=28fea8

--------------------------------
总结: 自己定义的函数,先后被调用,所以分配的自变量空间可能相同 
因为前者占用的空间被系统撤销后可以分配给后者 
*/
