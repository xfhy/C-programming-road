/*
2015��2��7��10:48:17
����  ���ж����� 
*/
# include <stdio.h>
# include <math.h>   //����sqrt���� 

int isprime(int m)    //�ж����� 
{
	int i,k,t=1;
	if(m==0||m==1)
		t = 0;
	else
	{
		k = (int)sqrt(m);
		for(i=2; i<=k; i++)
		{
			if(m%i==0)
			{
			  t = 0;
			  break;       //��m%i==0-ʱ��ʱ��ֹfor 
		    }
			else
			  t = 1; 
		}
	}
	return (t);
}

int main(void)
{
	int m; 
	printf("��������Ҫ�жϵ���:");
	scanf("%d",&m);
	if(isprime(m))
	   printf("YES!"); 
	else
	   printf("NO!");	
	return 0;
} 
