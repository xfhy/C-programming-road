/*
2015��2��10��09:45:40
��������Ӽ��˳��Ž�������ļ����� 
*/

# include <stdio.h>

int main(void)
{
	float result,temp;
	char ch;
	printf("\t��������ֻ�����Ӽ��˳�����\n");   //��ʾ�û���׼���� 
	printf("�����ʽ:eg:3.569*5.2,    6.41+5.154   ....\n"); 
	scanf("%f",&result);           //�Ȱ���������Ǹ�ֱֵ�ӷŽ�result����,������������ 
	while((ch = getchar())!='U')   //������������ĸ,ֻҪ�û������������ĸ������ 
	{ 
		if(ch == '+')            //����û�����'+'��,��ִ��������� 
		{
			scanf("%f",&temp); 
			result = result + temp;
			printf("%f\n",result);
		}
		
		if(ch == '-')
	    {
	        scanf("%f",&temp); 
			result = result - temp;
			printf("%f\n",result);	
		}
		
		if(ch == '*')
	    {
	        scanf("%f",&temp); 
			result = result * temp;
			printf("%f\n",result);	
		}
		
		if(ch == '/')
	    {
	        scanf("%f",&temp); 
			result = result / temp;
			printf("%f\n",result);	
		}
		
		/*if(ch == '=')
		{
			printf("%f\n",result);
		}*/
	}
	return 0;
} 
