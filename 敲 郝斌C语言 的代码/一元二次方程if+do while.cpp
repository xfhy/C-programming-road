/*
2015年1月27日11:18:43 
可以实现多次输入方程系数abc 
*/#include<stdio.h>
#include<math.h>
int main(void)
{
    float x1,x2;
	float delta;
	float a,b,c;
	char ch; 
	
	do
	{
		printf("请输入一元二次方程的三个系数：\n");
		printf("a = ");
		scanf("%f",&a);
	
		printf("b = ");
		scanf("%f",&b);
	
		printf("c = ");
		scanf("%f",&c);
	
		delta=b*b-4*a*c;
		printf("delta = %f\n",delta);
	
	 
 
		if(delta>0)
		{
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf(" x1 = %f\n x2 = %f\n",x1,x2);
		}
	
		else if(0 == delta)
		{
			x1 = x2 =-b / (2*a);
			printf("x1 = x2 =%f\n",x1,x2);
		}
	
		else
		{
			printf("该方程组无实数解!\n");
		}
		printf("您想继续么？(Y/N)");
		scanf(" %c",&ch);//%c前面必须加空格 
    }while('y'==ch||'Y'==ch);//把if那些语句全部包含进去，
	//do while会一直执行，如果while里面是除开0以外的任何数字，一直为真。
	//while后面记得打; 
	
	
		
	return 0;
}
