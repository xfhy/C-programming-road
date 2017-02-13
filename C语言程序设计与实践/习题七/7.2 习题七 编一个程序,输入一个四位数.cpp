/*
2015年4月20日20:25:35
7.2 习题七 编一个程序,输入一个四位数,输出其对应的四个数字字符 
*/
# include <stdio.h>

void out(int *a)       //第一种方法 
{
	int i;
	for(i=0; i<4; i++)
	{
		printf(" %d",a[i]);
	}
}

void out1(int i)       //第二种方法 
{
	int a[4];          
	a[3] =  i%10;
	a[2] = (i/10)%10;
	a[1] = (i/100)%10;
	a[0] = i/1000;
	int j;
	for(j=0; j<4; j++)
	{
		printf(" %d",a[j]);
	}
}

int main(void)
{
	/*                       //第一种方法 
	int a[4],i;
	printf("请输入四个数\n");
	for(i=0; i<4; i++)
	{ 
	   scanf("%d",&a[i]); 
    }
    out(a);*/
    int i;
	printf("请输入一个四位数\n");
	scanf("%d",&i);
	out1(i);
	
	return 0; 
} 
