/*
2015��6��4��12:15:53
fgets������fputs���� 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE * fp1,*fp2;
	char file1[20],file2[20];
	char ch[400];
	printf("��������Ҫ���Ƶ��ļ�:");
	scanf("%s",file1);
	if((fp1=fopen(file1,"r"))==NULL)
	{
		printf("���ܴ���Ҫ���Ƶ��ļ�!\n");
		exit(0);
	}
	printf("��������Ҫճ����λ��:");
	scanf("%s",file2); 
	if((fp2=fopen(file2,"w"))==NULL)
	{
		printf("���ܴ���Ҫճ����·��!\n");
		exit(0);
	}
	while((fgets(ch,299,fp1))!=NULL)   //��fp1��ǰλ�ÿ�ʼ����n-1���ַ�,�Զ����Ͻ�β���'\0',��Ϊ�ַ���
	//�͵�ch�� 
	  fputs(ch,fp2); 
	printf("���Ƴɹ�!\n");
	fclose(fp1);
	fclose(fp2); 
	
	return 0; 
} 
