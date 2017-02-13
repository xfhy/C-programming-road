/*
2015年2月6日13:11:21
判断素数 
*/
# include <stdio.h>

int main(void)
{
	int n;
	int i;
	int val;
	printf("请输入需要判断的素数:");
	scanf("%d",&val); 
	
	for(i = 2;i<val;i++)   //素数:从二开始到那个数减一都不能除清 
	{
		if(0 == val%i)
		break;
	}
	
	if(i == val)
	printf("YES!");
	else
	printf("NO!");
	
	return 0;
}
