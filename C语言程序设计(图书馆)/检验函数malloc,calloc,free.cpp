/*
2015年2月14日17:07:59
动态空间的申请与释放 
检验函数malloc,calloc,free 
养成好习惯 1,分配了动态空间后,一定要判断是否分配成功 
养成好习惯 2,申请的动态空间如果不再需要,那么记得释放掉 
*/
# include <stdio.h>
# include <stdlib.h>

void f1(void)    //释放了p空间了的 
{

	int * p = (int *)malloc(5*sizeof(int));   //这里写成 sizeof(int)而不写成4是因为,写成4的话
	                                    //不适合程序的移植,因为 如果某一系统的普通整型占8个字节,那么在这样的系统上
									//我们得到的就不是长度为5的整型数组空间 
    if(p==NULL)       //养成好习惯 1,分配了动态空间后,一定要判断是否分配成功 
    {
    	printf("动态分配失败\n"); 
    	exit(1);     //终止程序,这个函数在stdlib.h函数声明里 
	}
	printf("%x\n",p);   
	free(p);        //养成好习惯 2,申请的动态空间如果不再需要,那么记得释放掉 
	                //以免成为程序运行时不可再分配的空间,造成'闲置'. 
}

void f2(void)    //没有释放p的空间 
{
	int * p = (int*)calloc(5,sizeof(int));
	if(p==NULL)
	{
		printf("动态分配失败\n");
		exit(1); 
	}
	printf("%x\n",p); 
}

int main(void) 
{
	 f1();
	 f1();
	 f2();
	 f2();
	
	return 0; 
}
