/*
菲波拉契序列   1   2  3 5 8 13 21(第N项等于前两项之和)
（45以内就可以，超过45就是垃圾值) 
2015年1月27日09:45:48 
*/
#include<stdio.h>
int main(void)
{
	int f1=1; 
	int f2=2;
	int f3;
	int n,i;
	char ch; 
	do
	{ 
		printf("请输入菲波拉契序列第N个：");
		scanf("%d",&n);
	
		if(n==1)
			printf("1\n");
	
		else if(n==2)
			printf("2\n");
	
		else
		{
			for(i=3;i<=n;i++)//第三项开始有规律 
				{
		   			f3=f1+f2;
		   			f1=f2;//执行一次循环后，重新赋值，把N的前两项赋给f1和f2 
		   			f2=f3;
				}
			printf("%d\n",f3);
			printf("您想继续输入么？(Y/N):");
			scanf(" %c",&ch);//%c前面必须加空格  原因略 
		} 
	}while('Y'==ch||'y'==ch);//最好把ch写在后面 
	
	return 0;
} 
