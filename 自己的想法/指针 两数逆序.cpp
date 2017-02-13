/*
2015年1月29日17:27:21 
两数逆序 
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
