/*
2015年2月6日10:22:51
按位取反  ~ 
*/
# include <stdio.h>

int main(void)
{
	int i = 5;  //二进制 0000 0101  
	int k;
	
	k = ~i; //k          1111 1010  这是负的,要取反加1才能得到十进制数
	                   //0000 0101   :取反 
	                   //0000 0110  = -6 :加1后   这是k的十进制数 
	printf("%d",k);
	
	return 0;
} 
