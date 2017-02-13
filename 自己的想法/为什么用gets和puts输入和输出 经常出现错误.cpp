/*
2015年3月7日23:11:41
C语言结构体为什么用gets和puts输入和输出 经常出现错误？
   因为你没有用getchar()也就是冲掉回车键
   
你这个的问题在于，gets（）以回车做为分隔符，当你输入日时你会打一个回车，
系统就将这个回给了gets()但是gets()又以回车做为分隔符，所以这个回车并没有读入进gets()中，
所以最终会直接输出。
*/
#include <stdio.h> 
#include <string.h> 
struct kind 
{ 
  int year; 
  int month; 
  int day; 
  char menber[20]; 
}all; 
int main(void) 
{ 
	printf("请输入年分\n"); 
	scanf("%d",&all.year ); 
	
	printf("请输入月份\n"); 
	scanf("%d",&all.month); 
	
	printf("请输入日\n"); 
	scanf("%d",&all.day); 
	
	getchar();        ///////
	
	printf("请输入成员\n"); 
	gets(all.menber); 
	printf("%d年%d月%d日 成员%s\n",all.year ,all.month ,all.day ,all.menber );
	
	 
}

   
