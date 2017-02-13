/*
2015年3月7日21:41:11
猜数字 
*/
# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int found(int i)
{
	   int j;
	   printf("请输入您想比较的数:"); 
		scanf("%d",&j);
		if(j>i)
		{
		  printf("您输入的数字大了!\n");
		  found(i);
	   }
		else if(i==j)
		{
			printf("我擦,居然相等!   结束程序\n");
		  return 0;
	   }
		else
		{
		  printf("小了!\n");
		  found(i);
	   }
}

int main(void)
{
	int i,j;
	char ch;
	srand(time(0));
	i = rand()%100;
	printf("原数字为%d\n",i);
	found(i);
	
	return 0;
} 
