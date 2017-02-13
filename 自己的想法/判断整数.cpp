/*
2015年2月17日18:20:35
判断整数 
*/
# include <stdio.h>

int main(void)
{
    float i;
	printf("请输入需要判断的数字:");
	
	/*
	if(scanf("%d",&i) == 1)    //错误的,这里是 
	   printf("宫黑雷,这是个整数哦!\n");
	else
	   printf("米咿呀嘿,你错啦,哈哈哈!\n"); 
	   */
	scanf("%f",&i);
	if(i==int(i))
	  printf("宫黑雷,这是个整数哦!\n");
	else
	   printf("码咿呀嘿,这不是整数,哈哈!\n"); 
	   
	return 0; 
} 
