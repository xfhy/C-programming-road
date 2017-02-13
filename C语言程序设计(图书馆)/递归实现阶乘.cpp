/*
2015年2月19日19:37:09
递归实现阶乘 
*/
 # include <stdio.h>
 
 long fact(long n)    //递归函数,这里是直接递归(自己调用自己) 
 {
 	static int x;       //用静态变量记录调用次数,x默认值为0 
	 x++;
	 printf("第%d次调用\n",x); 
 	long c = 1;    //结果要初始化,不然是垃圾值 
 	if(n>1)   
 	   c = n*fact(n-1);   //这里开始自己调用自己啦,n不断缩小,直到n=1; 
 	return c;   //返回结果 
 }
 
 int main(void)
 {
 	long i; 
 	printf("请输入您想计算哪个数的阶乘:\n");
 	scanf("%ld",&i); 
 	long c = fact(i);
 	printf("%ld\n",c);
 	
 	return 0;
 } 
