/*
2015��2��4��09:54:02
ð������ 
*/

# include<stdio.h>

void sort(int * p,int len)  //����������,����� 
{
	int i,j,t;
	for(i=0;i<len-1;i++)   //���ֻ��Ҫ����len - 1�� 
	{
		for(j=0;j<len-1;j++)   //�����໥���� 
		{
			if(p[j] > p[j+1])   //ifĬ��ֻ�ܿ���һ�����,��Ҫ��{}�ſ��Կ��ƶ����� 
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
		    }
		}
	}
	
	 
}

int main(void)
{
	int a[5] = {1,34,54,-3,233};
	int i;
	
	sort(a,5);  //ȷ��һ��������Ҫ:�׵�ַ(������)�ͳ��� 
	
	for(i=0;i<5;i++)
	printf("%d ",a[i]);
	
	printf("\n");
	
	
	return 0;
}
