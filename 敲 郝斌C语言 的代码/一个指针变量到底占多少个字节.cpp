/*
2015年1月30日11:10:33
一个指针变量到底占多少个字节 
*/
# include<stdio.h>

int main(void)
{
	int a = 3;  //int类型占4个字节  
	char ch = 'B'; //char类型 占1个字节 
	double k = 2.33;  //double类型占8个字节 
	int * p = &a;
	char * q = &ch;
	double * i = &k;
	
	printf("int指针占%d个字节\n",sizeof(p));   //sizeof(类型)；     是拿来求某个类型多少个占字节的 
	printf("char指针 占%d个字节\n",sizeof(q));
	printf("double指针 占%d个字节\n",sizeof(i));
	
	return 0;
}

/*
在DEV C++里的输出结果是：

int指针 占8个字节
char指针 占8个字节
double指针 占8个字节

--------------------------------

总结： 一个指针变量，无论它指向什么类型数据，所占字节都一样 
 
*/
