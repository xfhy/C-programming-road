/*
2015年4月17日15:02:53
习题六 6.2有一个数组内放10个整数 .编程找出其中最小的数和它的下标
然后把它和数组中最前面的元素对换 
*/
# include <stdio.h>

void out(int * a)  //输出数组 函数 
{
	int i;
	for(i=0; i<10;i++)
	  printf("%4d",a[i]); 
	printf("\n");
} 

void change(int *a,int *b)   //用指针交换主函数的两个数 
{
	int t;    //*a和*b是int类型 ,所以用int类型的作为暂时值 
	t = *a;
	*a = *b;
	*b = t; 
}

int main(void)
{
	int a[10] = {41,58,45,15,23,15,48,4,87,15};
	int i,min,t; 
	printf("原数组为:\n"); 
	out(a);   //输出数组 
	min = a[0];
	for(i=0; i<10; i++)
	{
		if(a[i]<min)   //如果遇到更小的就赋值给min 
	       min = a[i];
	}
	for(i=0; i<10;i++)
	{
		if(a[i]==min)   //找到a[i]与min相等就跳出循环,找到了下标 
		   break;
	} 
	printf("最小的数为%d,下标为%d:\n",min,i+1);
	change(&a[0],&a[i]);  //交换两个元素 
	out(a);  //输出 
	
	return 0; 
} 
