/*
2015年4月17日13:07:13
P103 6,3将输入的十进制转换成任意进制的数 
*/
# include <stdio.h>

void change(int c,int b)   //十进制c转为b进制 
{
	int a[50];   //定义一个数组装每次取余的数 
	int t=0,i;
	while(c!=0)
	{
		a[t] = c%b;     //每次取余后装好 
		c = c/b;        //每次取余后记得除一下 
		t++;            //依次 往后 
	}
	for(i=t-1; i>=0; i--)   //上面t多加了一次,所以这里减去
	{
		if(a[i]<10)
		  printf("%d",a[i]);   //小于10就输出数字 
		else
		  printf("%c",a[i]+87);   //大于10输出字母 
	}
}

int main(void)
{
    int c,b;
    printf("请输入您想进行转换的十进制数:\n");
    scanf("%d",&c);
	printf("请输入您想转为多少进制:\n");
	scanf("%d",&b);
	change(c,b); 
	
	return 0;
} 
