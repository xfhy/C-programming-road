/*
2015��4��14��22:20:42
����Ȼ���� 
*/
# include <stdio.h>
# include <math.h>
 
int main(void)
{
	double mole,deno=1.0,i=1;   //���� ,��ĸ 
	double item,sum=0,t;
	int x,j,k=1;
	printf("������X:\n");
	scanf("%d",&x); 
	mole = x;   //���� 
	item = x;
	t = 1;
	j = 1;
	while(item>=1e-5)
	{
		item = mole/deno;
		sum = sum + item;
		mole = mole*x;
		//j = 1;
		j++;
		t = j;  //t�������� 
		while(t>=1)   //��׳� 
		{
			k = k*t;  //����һ�γ� 
			t--;
		}
		deno = k;  //��ĸΪ�׳˵�ֵ 
		k = 1;   //��k(�׳˽��)��ʼ��,��Ȼ������ 
	}
	printf("%f",sum+1);
	
	return 0; 
} 
