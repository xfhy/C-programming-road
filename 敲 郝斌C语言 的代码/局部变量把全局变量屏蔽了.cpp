/*
  2015年1月29日09:26:20
  局部变量把全局变量屏蔽了 
*/
# include <stdio.h>

int i = 10000; 

void f(int i)    //局部变量把全局的屏蔽了，所以全局的i = 10000,就没有被输出去 
{
	 
	printf("i = %d\n",i);
}
int main(void)
{
	f(567);   
	
	return 0;
} 

/*
 在DEV C++里的输出结果是： 
 -------
 i = 567

--------------------------------
Process exited after 0.0996 seconds with return value 0
请按任意键继续. . .
 ------- 
*/
