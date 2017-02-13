/*
2015年5月10日22:32:11
测试goto语句 
*/
# include <stdio.h>

int main(void)
{
	int i;
	scanf("%d",&i);
	if(i=0)
	  goto lo;
lo:
    printf("你是傻逼!"); 
	
	return 0; 
} 
