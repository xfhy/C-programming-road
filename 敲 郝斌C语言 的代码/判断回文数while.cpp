/*
�������
2015��1��27��09:08:55 
*/
#include<stdio.h> 
int main(void)
{
	int sum = 0;
	int m;
	int val;
	
	printf("����������Ҫ�жϵ����֣�");
	scanf("%d",&val);
	
	m=val;
	while(m)                //��MΪ0ʱ��Ϊ�٣�m=��������Ϊ�棻 
	{
		sum = sum*10 + m%10;//eg:val = 99;   sum = 9;  m=9; sum = 99; m = 0;  ֱ������ѭ�����������if 
		m/=10;
	} 
	
	if(val == sum)
	printf("Yes!\n");
	else
	printf("No!\n");
 
	return 0;
}
