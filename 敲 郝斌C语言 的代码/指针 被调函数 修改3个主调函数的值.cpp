/*
2015��1��29��20:05:21
ָ�� ���庯��  �޸�3��ֵ���ٷ��� 
*/ 

#include <stdio.h>

void revise(int * p,int * q,int * i)  //�޸�����3������ֵ 
{
	*p = 233;
	*q = 233;
	*i = 6666666;
	
	return;
}

int main()
{
	int a,b,c;
	
	a = 1;
	b = 2;
	c = 3;
	
	 revise(&a,&b,&c);//&a���͸�p 
	 printf(" a = %d\n b = %d\n c = %d\n",a,b,c);
	
	return 0;
}
