/*
2015��3��30��17:00:46
������� 
*/
# include <stdio.h>

int main(void)
{
	int m,i;
	printf("������һ����λ��:\n");
	scanf("%d",&m);
	if(m>=10000 && m<=99999)
	{
		printf("%d%d%d%d%d\n",m%10,(m%100)/10,(m%1000)/100,(m%10000)/1000,(m%100000)/10000);
	}
	else
	  printf("�������!\n");
	
	return 0; 
} 
