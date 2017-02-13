#include <stdio.h>

int change(int *a,int n,int m)   //下面传入的是数组首地址,所以这里用(int *)类型接收  
{
	int i,j,t;
	for(i=0;i<n;i++)    //将数组前n个元素,放入临时变量t中,循环一次放一个元素 
	{
		t = a[0];       //将数组第一个元素暂时存起来 
		for(j=0; j<9; j++)
			a[j] = a[j+1];   //将数组从第二个元素开始,往前移动,直接覆盖前一个的值 
		a[9] = t;     //将a[0]的值赋给最后一个元素 
	}
}
int main(void)
{
	int i;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	change(a,3,7);          //a代表数组名(数组首地址) 
	for(i=0;i<10;i++)
	  printf("%4d",a[i]);       //输出时%4d  : 占一个元素4个位置 
	  
	return 0; 
}
