/*
2015��4��24��9:21:06
�õݹ鷨д��¥�� һ�ο�����һ�� 
���������� N���Ļ��ж�������¥���� 
��ʵ���ǷƲ���������
*/
/*
# include <stdio.h>             //�ǵݹ鷽�� 

int main(void)
{
	int i,f1,f2,f3,x;
	f1 = 1;
	f2 = 2;
	//f3 = f1+f2;
	scanf("%d",&x);
	if(x==1)
	  printf("1\n");
	else if(x==2)
	  printf("2\n");
	else
	{
		for(i=3; i<=x; i++)
		{
			f3 = f1+f2;
			f1 = f2;
			f2 = f3;
		}
		printf("%d\n",f3);
    }
	
	 
	
	return 0; 
} */
# include <stdio.h>     //�ݹ鷽�� 

void bb(int x,int f1,int f2)   //�����X��,��ǰһ��,ǰһ�� 
{
	int f3 = f1+f2;           //����һ������� 
	while(x>3)                  
	{
		f1 = f2;                //f1,f2������ 
		f2 = f3;
		return bb(x-1,f1,f2);   //�����,ֱ����� 
	}  
	printf("%d\n",f3);           //�����������һ�� 
}

int main(void)
{
	int x,f1=1,f2=2;
	printf("������ݹ�ĵ�n��:\n");
	scanf("%d",&x);
	if(x==1)
	  printf("1\n");
	else if(x==2)
	  printf("2\n");
	else if(x>=3)
	{
	  bb(x,f1,f2); 
    }
	
	return 0;
} 
