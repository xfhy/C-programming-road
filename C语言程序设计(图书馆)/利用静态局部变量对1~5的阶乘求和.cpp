/*
2015年2月14日13:53:00
利用静态局部变量对1~5的阶乘求和 
证明:静态局部变量的声明周期从初始化开始 ,到整个程序结束. 
*/
# include <stdio.h>

int fac(int n)
{
    static long t=1;   //静态局部变量在声明前加关键字static 
    t = t*n;           //静态局部变量的声明周期从初始化开始 ,到整个程序结束. 
                        //所以t 一直没被释放,函数结束时t也是没被释放的 ,直到程序结束 
	return t;
}

int fac1(int n)      //这是不用静态变量的函数 
{
	int t;
	int k = 1;
	for(t=1; t<=n; t++)
	  k = t * k ;
	return k;
}

int main(void)
{
	int i;
	long t,sum;
	for(i=1; i<=5; i++)
	{
		t = fac(i);         //t的结果是i! 
		//t = fac1(i); 
		printf("%d\n",t);   //输出i! 
		sum+=t;             //阶乘累加  
	}
	printf("%d ",sum);
	return 0;
} 
