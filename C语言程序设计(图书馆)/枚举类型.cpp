/*
2015年3月8日09:58:57
枚举类型 
*/
# include <stdio.h>

enum colors{red=1,green,blue};     //定义枚举,如果没有修改red=1;那么默认从0开始,0  1  2  3  4  ...... 

int main(void)
{
	int num;
	enum colors col;            //col是枚举变量 
	printf("1=red,2=green,3=blue.  选择:");
	scanf("%d",&num);
	col = (enum colors)num;   //强制类型转化
	switch(col)
	{
		case red:
			printf("red\n");
			break;
		case green:
			printf("green\n");
			break;
		case blue:
			printf("blue\n");
			break;
		default:
			printf("??\n");
	} 
	
	
	return 0; 
} 
