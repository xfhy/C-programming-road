/*
求回文数
2015年1月27日09:08:55 
*/
#include<stdio.h> 
int main(void)
{
	int sum = 0;
	int m;
	int val;
	
	printf("请输入您需要判断的数字：");
	scanf("%d",&val);
	
	m=val;
	while(m)                //当M为0时则为假；m=其他数则为真； 
	{
		sum = sum*10 + m%10;//eg:val = 99;   sum = 9;  m=9; sum = 99; m = 0;  直接跳出循环，到下面的if 
		m/=10;
	} 
	
	if(val == sum)
	printf("Yes!\n");
	else
	printf("No!\n");
 
	return 0;
}
