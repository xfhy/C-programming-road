/*
2015年2月6日20:55:18
计协编程第一次作业 第四题 a)
4.对于任意给定一维整型数组a[],其长度大于0且不超过1000000，长度与数组元素由键盘输入，现要求：

a)	（选做)将数组a的前n个元素与后m个元素交换位置，已知前n个元素与后m个元素无交叉，m与n大小不超过数组长度。如：
            a[11]={1,2,3,4,5,  6,7,  8,9,10,11}; 
			当n=5，m=4时；交换后数组为: 
			a[11]={8,9,10,11,  6,7,  1,2,3,4,5};
要求交换过程中不使用其他数组。
 
*/

# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int i,j;
	int len;
	printf("请输入数组长度:");   //数组长度有用户输入 
	scanf("%d",&len); 
	int * p;
	p = (int *)malloc(sizeof(int)*len);   //组建动态数组 
	
	printf("请输入数组各个元素:");    //输入数组 
	for(i=0; i<len; i++)
	{
		scanf("%d",&p[i]);
	}
	
	printf("您输入的数组为:\n"); 
	for(i=0; i<len; i++)       //输出数组 
	{
		printf("%d ",p[i]);
	}
	
	
	
	return 0;
} 
