/*
2015��4��20��20:25:35
7.2 ϰ���� ��һ������,����һ����λ��,������Ӧ���ĸ������ַ� 
*/
# include <stdio.h>

void out(int *a)       //��һ�ַ��� 
{
	int i;
	for(i=0; i<4; i++)
	{
		printf(" %d",a[i]);
	}
}

void out1(int i)       //�ڶ��ַ��� 
{
	int a[4];          
	a[3] =  i%10;
	a[2] = (i/10)%10;
	a[1] = (i/100)%10;
	a[0] = i/1000;
	int j;
	for(j=0; j<4; j++)
	{
		printf(" %d",a[j]);
	}
}

int main(void)
{
	/*                       //��һ�ַ��� 
	int a[4],i;
	printf("�������ĸ���\n");
	for(i=0; i<4; i++)
	{ 
	   scanf("%d",&a[i]); 
    }
    out(a);*/
    int i;
	printf("������һ����λ��\n");
	scanf("%d",&i);
	out1(i);
	
	return 0; 
} 
