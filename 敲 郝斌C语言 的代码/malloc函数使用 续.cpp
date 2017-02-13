/*
2015年1月30日20:14:20
malloc函数使用 --续 
*/
# include <stdio.h>
# include <malloc.h>

void f(int * q)
{
	*q = 233;
	//如果在这里加    free(q);   功能：释放内存  就是把q所指向的内容释放掉了，
	//也就是把p指向的内容释放掉了 ，就是把分配的动态内存（那4个字节）释放掉了 ，23行就不会输出任何东西
	return;
}

int main(void)
{
	int * p = (int *)malloc(sizeof(int));//sizeof(int)返回值是int所占的字节数 ，这里相当于是malloc(4) 
	*p = 10; 
	
	printf("%d\n",*p);  //10
	f(p);
	printf("%d\n",*p);  //233
	
	return 0;
}
