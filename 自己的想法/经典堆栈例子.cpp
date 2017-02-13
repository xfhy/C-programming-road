/*
2015年5月17日14:19:05
经典堆栈例子 
*/ 

# include <stdio.h>

int a = 0;    //全局初始化区 
char *p1;     //全局未初始化区 
int main(void) 
{
	int b;                    //栈
	char s[] = "abc";        //栈 
	char *p2;                //栈 
	char *p3 = "123456";     //123456\0在常量区,p3在栈上      
	static int c =0          //全局静态初始化区 
	p1 = (char *)malloc(10); //堆 
	p2 = (char *)malloc(20);  //堆 
	
	return 0; 
} 
