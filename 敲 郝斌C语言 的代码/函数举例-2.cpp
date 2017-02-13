/*
2015年1月27日21:36:06
函数举例 
*/
# include <stdio.h>

int f(void)   
{
	return 10;   //return作用：1，终止函数  2，向主调函数返回10 
} 

void g(void)//函数前面的void表示该函数 没有返回值   
{
	//return 0；   //error  因为与前面的void冲突 
} 

void h()
{
	return;  //return只用来终止函数，不向主调函数返回任何值 
} 

int main(void)
{
   int j=88;
   j=f();
   printf("%d",j);

   return 0;
}

