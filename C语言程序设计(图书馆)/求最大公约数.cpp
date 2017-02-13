/*
 2015年2月7日12:42:43
  求最大公约数 
  
  for(1,2,3)
  A;
  
  等价于 
  1;
  while(2)
   {
      A;
      3 ;
   }
*/
# include <stdio.h>

int judge(int i, int j) 
{
	int t;
	
	if(i<=0 || j<=0)
	{
		printf("小伙子,负数和零就算了哇!  ^-^ \n");  //输出提示信息 
		return (0);                                  //结束程序 
	}
	
	t = i % j;  //求第一次的余数,t为余数 
	while(t)
	{
		i = j;      //把本次的除数作为下一次循环的被除数 
		j = t;     //把本次的余数作为下一次循环的除数 
		t = i % j;  //求新的余数 
	}
	return j; 
}

int main(void)
{
	int i,j;
	
	printf("请输入求公约数的两个数(中间用逗号隔开):");
	scanf("%d,%d",&i,&j);
	
	if(judge(i,j))
	   printf("最大公约数为%d\n",judge(i,j));
	
	return 0;
} 
