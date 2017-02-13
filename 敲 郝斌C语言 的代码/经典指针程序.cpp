/*
2015年1月29日14:57:26
指针的认识 
*/
#include<stdio.h>


//本函数功能：  互换*p   *q的值 
void interchange(int * q,int * w)    
{
   int t;
   
   t  = *q;  //     q是int *类型      * q是int 类型 
   *q = *w;    //这里的*q等价于a      *w等价于b
   *w = t;
    
   return;    //这里return;可以不写（因为上面是void），但是写起比较规范，这样别人才知道是从这里结束这个函数的 
}

int main(void)
{
	int a;
	int b;
	
	a = 33;
	b = 84;
	 
	interchange(&a,&b);      //上面是int *类型，所以是取地址去发送给上面的 相当于是  q=&a  w=&b
	printf("a = %d,b = %d\n",a,b);
	
	return 0;
} 
