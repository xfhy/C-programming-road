/*
2015��1��27��21:36:06
�������� 
*/
# include <stdio.h>

int f(void)   
{
	return 10;   //return���ã�1����ֹ����  2����������������10 
} 

void g(void)//����ǰ���void��ʾ�ú��� û�з���ֵ   
{
	//return 0��   //error  ��Ϊ��ǰ���void��ͻ 
} 

void h()
{
	return;  //returnֻ������ֹ�����������������������κ�ֵ 
} 

int main(void)
{
   int j=88;
   j=f();
   printf("%d",j);

   return 0;
}

