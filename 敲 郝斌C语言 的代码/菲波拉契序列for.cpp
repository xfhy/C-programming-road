/*
�Ʋ���������   1   2  3 5 8 13 21(��N�����ǰ����֮��)
��45���ھͿ��ԣ�����45��������ֵ) 
2015��1��27��09:45:48 
*/
#include<stdio.h>
int main(void)
{
	int f1=1; 
	int f2=2;
	int f3;
	int n,i;
	char ch; 
	do
	{ 
		printf("������Ʋ��������е�N����");
		scanf("%d",&n);
	
		if(n==1)
			printf("1\n");
	
		else if(n==2)
			printf("2\n");
	
		else
		{
			for(i=3;i<=n;i++)//�����ʼ�й��� 
				{
		   			f3=f1+f2;
		   			f1=f2;//ִ��һ��ѭ�������¸�ֵ����N��ǰ�����f1��f2 
		   			f2=f3;
				}
			printf("%d\n",f3);
			printf("�����������ô��(Y/N):");
			scanf(" %c",&ch);//%cǰ�����ӿո�  ԭ���� 
		} 
	}while('Y'==ch||'y'==ch);//��ð�chд�ں��� 
	
	return 0;
} 
