/*
2015年2月14日13:33:35 
利用复合语句对数组元素进行求和 
*/  
# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int main(void)
{
	int a[10],i;    //主函数里的i 
	printf("主函数里i的地址&i = %x\n",&i);
	srand(time(0));
	for(i=0; i<10; i++)
	   a[i] = rand()%20; 
	for(i=0; i<10; i++)
	    printf("%d ",a[i]);
	printf("\n");
	/*-------复合语句---------*/
	{
		int i,sum;  //复合语句里面的 i 
		printf("复合函数里i的地址&i = %x\n",&i);
		sum = 0;
		for(i=0; i<10; i++)
		   sum+=a[i];
		printf("和:%d \n",sum);
	}
	
	return 0; 
}                                 
