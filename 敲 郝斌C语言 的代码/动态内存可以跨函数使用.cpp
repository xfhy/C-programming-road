/*
2015��1��31��13:05:54
��̬�ڴ���Կ纯��ʹ�� 
*/ 
# include<stdio.h>
# include<malloc.h>

void f(int ** q)
{
	*q = (int *)malloc(sizeof(int));      //�ȼ���p =  (int *)malloc(sizeof(int));
	**q = 5;    //�ȼ���  *p = 5��   ���Ǹ��������Ķ�̬�ڴ渳ȥ5���ֵ 
	
	return;
}
int main(void) 
{
	int * p;
	f(&p); 
	printf("%d\n",*p);  //��Ϊ�����Ƕ�̬������ڴ棬���Լ�ʹ����ĺ���ʹ����֮��
	                     //������Ȼ���԰��Ƿ���Ķ�̬�ڴ�������� 
	
	return 0;
}
