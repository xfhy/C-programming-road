/*
2015年3月30日17:00:46
倒序输出 
*/
# include <stdio.h>

int main(void)
{
	int m,i;
	printf("请输入一个五位数:\n");
	scanf("%d",&m);
	if(m>=10000 && m<=99999)
	{
		printf("%d%d%d%d%d\n",m%10,(m%100)/10,(m%1000)/100,(m%10000)/1000,(m%100000)/10000);
	}
	else
	  printf("输入错误!\n");
	
	return 0; 
} 
