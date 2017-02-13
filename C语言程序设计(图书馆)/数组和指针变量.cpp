/*
2015年2月6日15:27:11
数组和指针变量 
*/
# include <stdio.h>
# include <stdlib.h>  //包含rand函数和srand函数声明 
# include <time.h>   //包含time函数的声明 

int main(void)
{
	int a[10],i;
	int * p;
	srand(time(0));
	
	for (i=0; i<10; i++)   //顿号后面打个空格比较好看 
		a[i] = rand()%20;   //给数组随机赋值 
	for (i=0; i<10; i++)
	    printf("%d\t",a[i]);
	p = a;
	for (i=0; i<10; i++)
	    p[i]++;
	for(i=0; i<10; i++)
	    printf("%d\t",a[i]);
	
	
	return 0;
} 
