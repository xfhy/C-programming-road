/*
2015��1��27��11:18:43 
����ʵ�ֶ�����뷽��ϵ��abc 
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
		printf("������һԪ���η��̵�����ϵ����\n");
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
			printf("�÷�������ʵ����!\n");
		}
		printf("�������ô��(Y/N)");
		scanf(" %c",&ch);//%cǰ�����ӿո� 
    }while('y'==ch||'Y'==ch);//��if��Щ���ȫ��������ȥ��
	//do while��һֱִ�У����while�����ǳ���0������κ����֣�һֱΪ�档
	//while����ǵô�; 
	
	
		
	return 0;
}
