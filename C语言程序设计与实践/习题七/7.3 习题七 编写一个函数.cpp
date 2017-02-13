/*
2015年4月20日20:47:59
7.3 习题七 编写一个函数,用"选择排序法"对输入的10个字符从小到大排序 
*/ 
# include <stdio.h>
# include <string.h>

void output(char *a)
{
	int i,j,min,t,len;
	len = strlen(a);          //判断字符串长度 
	for(i=0; i<len; i++)        //在数组的整个长度内 
	{
		min = a[i];             //从第一个字符开始,设它为最小值,然后再拿它与后面
		                        //的元素比较,看谁小,小的在前面 
		for(j=i+1; j<len; j++)  //从i+1元素开始 
		{
			if(a[i]>a[j])      //如果a[i]>a[i+1]就交换 
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for(i=0 ; i<len; i++)
	{
		printf("%c",a[i]);     //换过序的输出 
	}
}

int main(void)
{
	char a[] = "qwerty1351thdr11515ydcfgxuio";    //输入一串乱字符 
	output(a); 
	
	return 0; 
} 
