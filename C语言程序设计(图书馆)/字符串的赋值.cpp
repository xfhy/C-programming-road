/*
2015年2月28日19:16:11
字符串的赋值 
*/
# include <stdio.h>
# include <string.h> 

int main(void) 
{
	/*------利用字符串常量给字符数组初始化-------*/
	char c1[8] = "china";    //等价于char c1[8] = {'c','h','i','n','a','\n'}; 
	char c2[] = "china";     //等价于char c2[] =  {'c','h','i','n','a','\n'}; 
	printf("%s   %s",c1,c2); 
	/*------这时可以修改字符串变量中某一元素的值--------*/
	c1[4] = 'A';   //把字符串变量c1中的小写字符a改为大写A 
	c2[1] = 'H';   //把字符串变量c2中的小写字母h改为大写H
	
	//c1 = "china";  //非法!字符串变量不是左值 
	
	const char * p1 = "china";   //const char *p1;   p1 = "china";
	char * p2 = "china";         //char * p2; p2 = "china";
	//p2[0] = 'C';     //非法! 编译时不会报错,但是在运行时被强制停止
	printf("\n%s   %s",p1,p2);
	char str[3] = {'a','b','c'};    //str不是字符串
	char str1[4] = {'a','b','c','\0'};   //str1才 字符串
	printf("\n%s",str1);
	return 0;
}
