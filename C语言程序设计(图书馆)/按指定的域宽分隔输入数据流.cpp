/*
2015年2月19日20:14:26
按指定的域宽分隔输入数据流 
*/

# include <stdio.h>

int main(void)
{
	int a;
	float x,y;
	printf("请输入3个数:");
	scanf("%2d%3f%4f",&a,&x,&y);   //输入3个数据,域宽分别为2,3,4 
	printf("a = %d,x = %g,y = %g\n",a,x,y);    //%g输出浮点数,舍去小数点后的无效零 
	 /*
	 请输入3个数:123456789
		a = 12,x = 345,y = 6789
     */
	return 0;
} 
