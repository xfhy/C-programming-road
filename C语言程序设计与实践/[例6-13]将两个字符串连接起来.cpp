/*
2015��4��13��7:57:44
[��6-13]�������ַ�����������,��Ҫ��strcat���� 
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char a[20];
	char b[10];
	int i=0,j=0;
	printf("Enter your word to a AND b \n");
	gets(a);
	gets(b);
	while(a[i]!='\0')   //�����ǰ�a�����һ��λ���ҳ��� 
	  i++;      
	while(b[i]!='\0')   //��a�����һ��λ�ÿ�ʼ,��b��ÿһ��Ԫ�ض���ֵ��a�ĺ����λ�� 
	  a[i++] = b[j++];
	a[i] = '\0';     //һ���ǵ�������'\0',�������ַ��� 
	printf("%s ",a[20]);	
	return 0; 
} 
