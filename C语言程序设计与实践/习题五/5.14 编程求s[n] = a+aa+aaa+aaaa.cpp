/*
2015��4��6��14:32:43
5.14 �����s[n] = a+aa+aaa+aaaa....��ֵ.���統a=2,n=4ʱ,s[n] = 2+22+222+2222;
a��n�ɼ������� 
*/
# include <stdio.h>

int main(void)
{
	int sum=0; 
	int temp,i;
	int a,n;
	printf("������a��n(�м��ö��Ÿ���)");
	scanf("%d,%d",&a,&n);
	temp = a;    //����һ���ӽ�ȥ 
	for(i=0; i<n; i++)
	{
		sum+=temp;
		printf("%d+",temp);
		temp = temp*10 +a; 
	}
	printf("���Ϊ:%4d",sum);

	return 0;
}
