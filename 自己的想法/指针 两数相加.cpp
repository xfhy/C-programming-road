/*
2015年1月29日17:03:02
指针的自我出题练习 
*/ 
# include <stdio.h>
float add(float * p,float * q)
{
	float sum;
	sum = *p + *q; 
	return sum;
}
int main()
{
	float a;
	float b;
	 
	printf("本程序功能：求两数之和\n"); 
	printf("请输入需要求和的两个数（中间用空格隔开）\n");
	do
	{
		    scanf("%f",&a);
		    scanf("%f",&b);
		     
			
			add(&a,&b);
			printf("sum = %f\n",add(&a,&b));
	}while(1);
}
