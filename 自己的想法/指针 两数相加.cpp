/*
2015��1��29��17:03:02
ָ������ҳ�����ϰ 
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
	 
	printf("�������ܣ�������֮��\n"); 
	printf("��������Ҫ��͵����������м��ÿո������\n");
	do
	{
		    scanf("%f",&a);
		    scanf("%f",&b);
		     
			
			add(&a,&b);
			printf("sum = %f\n",add(&a,&b));
	}while(1);
}
