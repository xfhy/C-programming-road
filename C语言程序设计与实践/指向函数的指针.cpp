/*
2015年5月13日11:12:54
指向函数的指针 
*/
# include <stdio.h>
# include <ctype.h>
# include <math.h>

float f1(float b,float r,int i);
float f2(float b,float r,int i);   //函数声明 
int main(void)
{
	int i,ch;
	float b=5000.0,r=0.098,bx;
	float (*fp)(float b,float r,int i);    //定义函数指针 
	printf("计算复利否? y/n\n");
	scanf("%c",&ch);
	if(ch=='n')
	{
		fp = f1;     // f1是函数的首地址,fp是拿来接收函数地址的,现在*fp就是函数本身 
	} 
	else
	{
		fp = f2;
	}
	for(i=3; i<6; i++)
	{
		bx = (*fp)(b,r,i);
		printf("%.3f %d %.2f %.2f",b,i,r,bx);
	}
	
	return 0; 
} 
float f1(float b,float r,int i)
{
	return (b*(1+i*r));
}
float f2(float b,float r,int i)
{
	return (b*pow((1+r),i));
}
