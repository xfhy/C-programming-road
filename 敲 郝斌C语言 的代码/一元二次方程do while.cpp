/*
求一元二次方程的解
do while 
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	double delta;
	double a,b,c;
	double x1,x2;
	
	printf("请输入二元一次方程的是三个系数a b c:");
	scanf("%lf %lf %lf",&a,&b,&c);
	delta = b*b-4*a*c;
	do
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);//最好把2a括起来 
		printf("x1 = %lf\n  x2 = %lf\n",x1,x2);//要用%f来输出，x1，x2有可能是小数 
	}while(delta>=0);
	do
	{
		printf("无解\n");
	}
	while(delta<0);
	return 0;
}
