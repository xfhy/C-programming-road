/*
2015��4��13��8:49:04
[��6-14]��һ������,�Ƚ������ַ���s1��s2,���s1>s2���һ������ 
�������0,С���������,����strcmp����,��gets()���� 
*/
# include <stdio.h>

int main(void)
{
	/*                        //�Լ���ĳ��� 
	char a[10],b[10];     
	int i=0,j=0;
	printf("Enter your words\n");
	gets(a); 
	gets(b);
	while(a[i]!='\0' && b[i]!='\0')
	{
		if(a[i]>b[i])
		{
			printf("2");
			break;
		}
		i++;
	}
	i=0;
	while(a[i]!='\0' && b[i]!='\0')
	{
		if(a[i]==b[i])
		{
			printf("0");
			break;
		}
		i++;
	}
	i=0;
	while(a[i]!='\0' && b[i]!='\0')
	{
		if(a[i]<b[i])
		{
			printf("-2");
			break;
		}
		i++;
	}
	
	return 0;*/
	int i=0,resu;
	char a[100],b[100];
	printf("�����ַ��� 1:\n");
	gets(a);
	printf("�����ַ��� 2:\n"); 
	gets(b);
	while(a[i]==b[i] && a[i]!='\0')   //��������Ⱦ�����ȥ 
	  i++;
	if(a[i]=='\0' && b[i]=='\0')      //���һֱ������ȵ�,�����0 
	  resu=0;
	else
	  resu = a[i] - b[i];            //���������� 
	printf("%d",resu);
	
	return 0;
}  
