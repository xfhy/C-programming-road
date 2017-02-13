/*
2015年2月25日15:10:15
无参宏指令 
*/
# include <stdio.h>

#define OR ||       //整了这个以后,下面可以用OR代替||     这就是宏 
#define PI 3.1415926
#define FORMAT "%-4d%-4d\n"

int main(void)
{
	int a,b,c;
	double s;
	a =  3;
	b =  5;
	if(a OR b)
	{
		printf(FORMAT,a,b);
		c = a>b?a:b;
		s = c*c*PI;
		printf("%g \n",s);    // %g  :表示将小数点后多余的零省略后输出
		                      //eg:   50.10000 以%g输出的话,就是50.1 
	} 
	
	return 0;
} 
