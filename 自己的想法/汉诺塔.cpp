/*
2015年4月24日17:11:02
汉诺塔 
*/
# include <stdio.h>
long int i=0;    //全局变量 
void bb(int x,char a,char b,char c)
{
	if(x>0)
	{
		bb(x-1,a,c,b);               
		//printf("%c-->%c\n",a,b);
		i++;
		bb(x-1,c,b,a);
	}
}

int main(void)
{
	char a,b,c;
	a = 'A';
	b = 'B';
	c = 'C';
	int x;
	printf("请输入有多少个盘子\n");
	scanf("%d",&x);
	bb(x,a,b,c); 
	printf("需要搬运%d次\n",i);
	
	return 0; 
} 
