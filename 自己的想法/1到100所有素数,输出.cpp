/*
2015��2��6��13:20:54
1��100��������,��� 
*/
# include <stdio.h>

int f(int val)
{
   int n;
	int i; 
	
	for(i = 2;i<val;i++)   //����:�Ӷ���ʼ���Ǹ�����һ�����ܳ��� 
	{
		if(0 == val%i)
		break;
	}
	
	if(i == val)
	printf("val = %d\n",val);
	 
}

int main(void)
{
	int i;
 
    for(i = 0;i <= 100;i++)
	{
		 f(i);
	}
	
	return 0;
} 
