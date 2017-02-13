/*
2015年2月20日19:51:49
调用函数两次,其自变量空间不同 
秘诀:动态内存 
*/
# include <stdio.h>
# include <malloc.h>

void f(void)
{
	int * n = (int *)malloc(10*sizeof(int));  //分配了动态内存记得查看是否分配成功(n==NULL?) ,这里略 
	printf("&n = %x\n",&*n);
}

int main(void)
{
	f();
	f();
	
	return 0;
} 
