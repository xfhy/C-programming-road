/*
2015年1月29日21:37:37
确定一个数组需要两个参数：数组名（首地址）   数组长度 
*/

#include<stdio.h>

void f(int * p,int i)  //把任何一个一维数组的全部内容输出    下面数组的长度不能只通过数组名获取 
                                                     //还需要获取数组的长度 
{
	int j;
	for(j = 0;j < i;j++)
         printf("%d  ",*(p+j));	  //*（p+j） 等价于  p[j]  等价于b[j]   等价于*(b +j) 
                                       //printf("%d  ", p[j]);
    printf("\n"); 
}
int main(void)
{
	 
	int b[8] {233,4,35,534,235,233,245,54};  //一维数组名是常量  是用来存放第一个元素地址的 
	int i;
	
	f(b,8);  //b是int * 
	for(i = 0;i<8;i++)
	  printf("%d  ",b[i]);
	printf("\n"); 
	for(i = 0;i<8;i++)
	  printf("%d  ",*(b+i));
	printf("\n"); 
	
	return 0;
}
