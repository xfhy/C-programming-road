/*
2015��1��29��17:27:21 
�������� 
*/
#include<stdio.h>
void interchange(int * p,int * q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t; 
	
	return;
} 
int main()
{
	int a;
	int b;
	
	a = 12;
	b = 16;
	
	interchange(&a,&b);
	printf("a = %d,b = %d\n",a,b);
	
	return 0;
}
