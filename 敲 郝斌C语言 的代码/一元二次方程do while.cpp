/*
��һԪ���η��̵Ľ�
do while 
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	double delta;
	double a,b,c;
	double x1,x2;
	
	printf("�������Ԫһ�η��̵�������ϵ��a b c:");
	scanf("%lf %lf %lf",&a,&b,&c);
	delta = b*b-4*a*c;
	do
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);//��ð�2a������ 
		printf("x1 = %lf\n  x2 = %lf\n",x1,x2);//Ҫ��%f�������x1��x2�п�����С�� 
	}while(delta>=0);
	do
	{
		printf("�޽�\n");
	}
	while(delta<0);
	return 0;
}
