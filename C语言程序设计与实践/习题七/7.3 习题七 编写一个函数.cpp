/*
2015��4��20��20:47:59
7.3 ϰ���� ��дһ������,��"ѡ������"�������10���ַ���С�������� 
*/ 
# include <stdio.h>
# include <string.h>

void output(char *a)
{
	int i,j,min,t,len;
	len = strlen(a);          //�ж��ַ������� 
	for(i=0; i<len; i++)        //����������������� 
	{
		min = a[i];             //�ӵ�һ���ַ���ʼ,����Ϊ��Сֵ,Ȼ�������������
		                        //��Ԫ�رȽ�,��˭С,С����ǰ�� 
		for(j=i+1; j<len; j++)  //��i+1Ԫ�ؿ�ʼ 
		{
			if(a[i]>a[j])      //���a[i]>a[i+1]�ͽ��� 
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for(i=0 ; i<len; i++)
	{
		printf("%c",a[i]);     //���������� 
	}
}

int main(void)
{
	char a[] = "qwerty1351thdr11515ydcfgxuio";    //����һ�����ַ� 
	output(a); 
	
	return 0; 
} 
