/*
2015��2��20��10:13:43
�����Լ�� 
*/
# include <stdio.h>

int main(void)
{
	int a,b,min,i,div;
	char ch; 
	do
	{
		printf("������Ҫ�����Լ����������(�м��ö��Ÿ���):");
		scanf("%d,%d",&a,&b);
		if(a<b)
		{
			min = a;
			for(i=min;i>1;i--)
			{
				if(a%i==0 && b%i==0)
				{
				    div = i;
				    break;
				}
			}
			if(i==1)
			   printf("�����Լ��!\n");
			else
			   printf("���Լ��Ϊ%d\n",div);
		}
		
		else
		{
			min = b;
			for(i=min;i>1;i--)
			{
				if(a%i==0 && b%i==0)   //����С�Ǹ������¼���,�������a��b���ܱ�ͬʱ������,��ô�������Լ�� 
				{
				    div = i;
				    break;   //�������Լ��,��ֹforѭ�� 
				}
			}
			if(i==1)
			   printf("�����Լ��!\n");
			else
			   printf("���Լ��Ϊ%d\n",div);
		}
		printf("���������?(y/n):");
		//ch=getchar();       //������Ϊɶ�����������ַ������� 
		//getchar();   
		scanf(" %c",&ch);
    }while(ch=='y');
    
	return 0;
} 
