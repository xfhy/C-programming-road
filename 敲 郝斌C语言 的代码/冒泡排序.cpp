/*
2015年2月4日09:54:02
冒泡排序 
*/

# include<stdio.h>

void sort(int * p,int len)  //将数组排序,并输出 
{
	int i,j,t;
	for(i=0;i<len-1;i++)   //最多只需要交换len - 1次 
	{
		for(j=0;j<len-1;j++)   //两两相互交换 
		{
			if(p[j] > p[j+1])   //if默认只能控制一个语句,需要加{}才可以控制多个语句 
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
		    }
		}
	}
	
	 
}

int main(void)
{
	int a[5] = {1,34,54,-3,233};
	int i;
	
	sort(a,5);  //确定一个数组需要:首地址(数组名)和长度 
	
	for(i=0;i<5;i++)
	printf("%d ",a[i]);
	
	printf("\n");
	
	
	return 0;
}
