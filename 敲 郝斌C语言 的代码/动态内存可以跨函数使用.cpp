/*
2015年1月31日13:05:54
动态内存可以跨函数使用 
*/ 
# include<stdio.h>
# include<malloc.h>

void f(int ** q)
{
	*q = (int *)malloc(sizeof(int));      //等价于p =  (int *)malloc(sizeof(int));
	**q = 5;    //等价于  *p = 5；   就是给上面分配的动态内存赋去5这个值 
	
	return;
}
int main(void) 
{
	int * p;
	f(&p); 
	printf("%d\n",*p);  //因为上面是动态分配的内存，所以即使上面的函数使用完之后
	                     //这里任然可以把那分配的动态内存给读出来 
	
	return 0;
}
