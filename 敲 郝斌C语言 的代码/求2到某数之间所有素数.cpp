/*
2015��1��28��18:09:09
���2��ĳ����֮�����е����� 
*/
#include<stdio.h>

bool isprime(int val)  //�ж�ĳ�����Ƿ������� 
{
	int i; 
	for(i = 2;i<val;i++)
	{
		if(0 == val%i)
		break;
	}
	if(i == val)
	 return true;
	else
	 return false;
}

void output(int j)  //��2��ĳ����֮�����������ʾ������� 
{
	int i;
	for(i = 2;i <= j;i++)
		{
			if(isprime(i))
			printf("%d��������\n",i);
	    }
	
} 

int main(void)
{
	int i;
	int m;
	
	printf("�������ܣ���2��ĳ����֮��������������������\n");
	do
	{
		 
		printf("����������Ҫ�жϵ����֣�"); 
		scanf("%d",&m);
		output(m);   //�������ֵM�����͸����溯���ж����j
		 
    }while(1);
	 
	return 0;
} 
