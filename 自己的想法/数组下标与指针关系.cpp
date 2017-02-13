#include<stdio.h>
int main(void)
{
	int a[5] = {1,2,3,4,5};
	int * p = a;  //定义指针为数组的名字（变量） a（名字 ， 常量）的地址就是第一个元素的地址 
      
	printf("%d\n",*(p+3));
	return 0;
}
