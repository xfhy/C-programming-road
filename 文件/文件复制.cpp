/*
2015��6��3��22:46:47
�ļ����� 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE *fp1,*fp2;
	char file1[20],file2[20];
	char ch;
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
	while((ch=fgetc(fp1))!=EOF)
	  fputc(ch,fp2); 
	printf("���Ƴɹ�!\n");
	fclose(fp1);
	fclose(fp2);
	
	return 0; 
} 
