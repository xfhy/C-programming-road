/*
2015��2��6��13:11:21
�ж����� 
*/
# include <stdio.h>

int main(void)
{
	int n;
	int i;
	int val;
	printf("��������Ҫ�жϵ�����:");
	scanf("%d",&val); 
	
	for(i = 2;i<val;i++)   //����:�Ӷ���ʼ���Ǹ�����һ�����ܳ��� 
	{
		if(0 == val%i)
		break;
	}
	
	if(i == val)
	printf("YES!");
	else
	printf("NO!");
	
	return 0;
}
