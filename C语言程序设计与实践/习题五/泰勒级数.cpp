/*
2015��4��1��20:43:56
̩�ռ��� 
*/
# include <stdio.h>
# include <math.h>

int main(void)
{
	float item,i=1,k=1,x,t=1,nume,deno=1,sum; 
	printf("������X:\n");
	scanf("%f",&x);
	nume = x;  //���� 
	item = x;   //��ʱֵ 
	while(fabs(item)>=1e-5)   //fabs(x):��x�ľ���ֵ     1e-5 = pow(10,-5) 
	{
		item = (nume/deno)*i;   //ͨʽ   ����/��ĸ *����(+/-) 
		sum = sum +item;         
		 
		nume = nume*x*x;         //x�˻��Ӷ�, 
		deno = t*(t+1)*(t+2);   //����һ��һ�����׳� 
		t+=2;          //���ӷ�ĸ 
		k++;          //��¼���� 
		i = i*(-1);  //���Ʒ��� 
	} 
	printf("%f  %d\n",sum,k);
	
	return 0; 
} 
