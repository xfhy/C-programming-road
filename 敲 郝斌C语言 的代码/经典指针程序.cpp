/*
2015��1��29��14:57:26
ָ�����ʶ 
*/
#include<stdio.h>


//���������ܣ�  ����*p   *q��ֵ 
void interchange(int * q,int * w)    
{
   int t;
   
   t  = *q;  //     q��int *����      * q��int ���� 
   *q = *w;    //�����*q�ȼ���a      *w�ȼ���b
   *w = t;
    
   return;    //����return;���Բ�д����Ϊ������void��������д��ȽϹ淶���������˲�֪���Ǵ����������������� 
}

int main(void)
{
	int a;
	int b;
	
	a = 33;
	b = 84;
	 
	interchange(&a,&b);      //������int *���ͣ�������ȡ��ַȥ���͸������ �൱����  q=&a  w=&b
	printf("a = %d,b = %d\n",a,b);
	
	return 0;
} 
