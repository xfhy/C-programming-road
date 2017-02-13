/*
2015年1月31日09:31:55
多级指针 
*/ 
# include<stdio.h>
int main(void)
{
	int i;
	int * p = &i;  //p = &i 
	int ** q = &p;  //q = &p
	int *** r = &q;  //r = &q         存地址 
	/*
	   r指向q的地址，q指向p的地址，p指向i的地址。
	   所以 *p = **q = ***r = i;  
	*/ 
	
	*p = 233;
	printf("%d\n",i); 
	
	**q = 666;
	printf("%d\n",i); 
	
	***r = 856;
	printf("%d\n",i); 
	
	
	return 0;
} 

/*
在DEV C++里的输出结果是：
233
666
856

--------------------------------
Process exited after 0.1283 seconds with return value 0
请按任意键继续. . .
*/
