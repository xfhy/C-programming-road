/*
2015��2��25��15:10:15
�޲κ�ָ�� 
*/
# include <stdio.h>

#define OR ||       //��������Ժ�,���������OR����||     ����Ǻ� 
#define PI 3.1415926
#define FORMAT "%-4d%-4d\n"

int main(void)
{
	int a,b,c;
	double s;
	a =  3;
	b =  5;
	if(a OR b)
	{
		printf(FORMAT,a,b);
		c = a>b?a:b;
		s = c*c*PI;
		printf("%g \n",s);    // %g  :��ʾ��С�����������ʡ�Ժ����
		                      //eg:   50.10000 ��%g����Ļ�,����50.1 
	} 
	
	return 0;
} 
