/*
2015年2月28日20:07:03
字符串的标准输入/输出函数 
*/
# include <stdio.h>

int main(void)
{
	char  c[300];
	gets(c);   //从键盘输入一个字符串,按回车键结束,字符串连同回车符(一般是换行符)一起进入输入缓冲区 
	puts(c);    //gets()和puts()都是stdio.h里面的函数 
	
	
	return 0;
}
