/*
2015年2月6日13:20:54
1到100所有素数,输出 
*/
# include <stdio.h>

int f(int val)
{
   int n;
	int i; 
	
	for(i = 2;i<val;i++)   //素数:从二开始到那个数减一都不能除清 
	{
		if(0 == val%i)
		break;
	}
	
	if(i == val)
	printf("val = %d\n",val);
	 
}

int main(void)
{
	int i;
 
    for(i = 0;i <= 100;i++)
	{
		 f(i);
	}
	
	return 0;
} 
