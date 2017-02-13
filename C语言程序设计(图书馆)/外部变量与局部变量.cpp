/*
2015年2月14日16:20:58
外部变量与局部变量 
*/
# include <stdio.h>

int m = 5;      //外部变量的初始化 

void abf(void)
{
	static int i = 0;   //静态变量 ,只有在程序结束时i才会被释放 
	int n = 0,m = 0;    //局部变量,n,m在函数结束时即被释放  
	                    // 这里m与外部变量同名
	i++;
	m++;                //这里m是局部变量而不是外部变量 
	n++;
	printf("i=%d,n=%d,m=%d\n",i,n,m);     //输出3个局部变量的值 
}

void nmf(void)
{
	m++;     //将外部变量+1; 
}

int main(void)
{
	abf();
	abf();    //这里调用abf()函数第二次,但是i不会被初始化 ,i是静态变量,只有在程序结束时才会被释放 
	nmf();
	printf("m=%d\n",m);   //输出外部变量 
	m*=10;
	printf("m=%d\n",m);   //输出外部变量*10后的结果 
	
	return 0;
}

