/*
2015��4��2��19:13:58
���������Ĺ̶��� 
*/
# include <stdio.h>

void bb(int n)
{
	int i,j,sum=0;
	for(i=1; i<n; i++)   //����С��n����Ϊ,С��n �����ų�ֻ��һ��������� 
	{
	   j=i-1;        //�����һ����Ϊ�����һ��j++�˵� 
	   while(sum<n)  // ��sum >= nʱ,�˳�ѭ�� 
	   {
	   	  j++;
	   	  sum = sum + j;  //��������� 
	   }
	   if(sum==n)
	     printf("%d...%d = %d\n",i,j,n);
		sum = 0;	//����ֵ,��Ȼ�����һֱ�� 
	}
}

int main(void)
{
	int n;
	printf("������һ����:");
	scanf("%d",&n);
	bb(n); 
	
	return 0; 
} 
