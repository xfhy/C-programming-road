/*
2015��4��2��20:25:24
һ������ÿ��λ���֮�� 
*/
# include <stdio.h>

void bb(int n)
{
	int i,a[3],sum=0;
	a[0] = n/1000;
	a[1] = (n/100)%10;
	a[2] = (n/10)%10;
	a[3] = n%10;
	for(i=0; i<3; i++)
	{
	  sum =  sum + a[i];
    }
	printf("%d\n",sum);
}

int main(void)
{
	int n;
	printf("������һ����:");
	scanf("%d",&n);
	bb(n); 
	
	return 0; 
} 
