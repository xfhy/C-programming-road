/*
2015��4��6��22:41:33
[��6-10]  ����ַ��� 
*/
# include <stdio.h>
# include <string.h> 

int main(void)
{
	char a[5] = {'c','h','i','n','a'};    //���ַ������ֵ 
	char b[6] = "china";    //ע��,�������ַ���,��β����Ҫһ��λ��������"\0"
	char c[]  = "china";    //����ͨ������ֵ����ȷ�����鳤�� 
	char d[3][3] = {
	{'1','2','3'},
	{'1','2','3'},
	{'1','2','3'}
	              };
    int i,j;
	for(i=0; i<5; i++)
	{
		printf("%c",a[i]);
	} 
	printf("\n");
	
	for(i=0; i<5; i++)
	{
		printf("%c",b[i]);
	} 
	printf("\n");
	
	for(i=0; i<strlen(c); i++)   //���δ֪�����ַ��� 
	{
		printf("%c",c[i]);
	} 
	printf("\n");
	
	for(i=0; i<3; i++)   //�����ά���� 
	{
		for(j=0; j<3; j++)
		{
			printf("%c",d[i][j]);
		} 
		printf("\n");
	}
	
	return 0; 
} 
