/*
2015年1月30日16:18:31
初识  malloc函数 
*/

# include<stdio.h>
# include<malloc.h> 

int main(void)
{
	int i = 5;   //分配了4个字节  静态分配 
	int * p = (int *)malloc(4);  
	/*
	  1.   要使用malloc函数，必须添加malloc.h这个头文件
	  2.   malloc函数只有一个形参，并且这个形参是整型
	  3.   4 表示请求系统为本程序分配 4个字节
	  4.   malloc函数只能返回第一个字节的地址
	  5.   12行分配了8个字节，p变量只占了4个字节,p所指向的内存占了4个字节 (这是在TGM-GCC 4.8.1 32-bit release里)
	  6.   p本身所占的内存是静态分配 ，p所指向的内存是动态分配 
	*/
	
	printf("%d\n",sizeof(p));   //是拿来求某个类型占多少个字节的
	
	*p = 5;  // *p代表的就是一个int变量， 
	         //  只不过*p 这个整型变量的内存分配方式 和11行的i变量的分配方式不同
			  
	free(p);  /* free(p);表示把p所指向的内存释放掉，P本身的内存是静态的，
	            不能由程序猿手动释放，p本身的内存只能在P变量所在的函数运行终止时
				由系统自动释放 
			   */         
	
	return 0;
}
