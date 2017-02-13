/*
2015年2月6日10:14:58
 | (按位或) 
*/
# include <stdio.h>

int main(void)
{
	int i = 5;  //二进制0101 
	int j = 9;  //二进制1001    sbbbb
	int k;
	
	k = i | j; //k      1101  =13 
	printf("%d",k);
	
	return 0;
} 
