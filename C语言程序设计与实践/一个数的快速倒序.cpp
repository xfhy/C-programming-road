/*
2015年4月2日22:29:38
数快速倒序 
*/
# include <stdio.h>

int main(void)
{
	int i,j=0,k;
	printf("请输入一个数:");
	scanf("%d",&k);
	while(k!=0)
	{
       i = k%10;      //把末尾的数取出来 
       j = j*10+i;    //把上次取的数*10,再加这次取出来的末尾的那个数   暂时存储在j里 
       k = k/10;      //把末尾的那个数抛弃 
	} 
	printf("%d\n",j);  
	
	return 0; 
} 
