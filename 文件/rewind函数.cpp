/*
2015��6��5��13:45:09
rewind���� 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE *fp1,*fp2;
	char ch;
	if((fp1=fopen("D:\\file\\1.cpp","r"))==NULL)
	{
		printf("���ܴ��ļ�!\n");
		exit(0);
	}
	if((fp2=fopen("D:\\file\\2.cpp","w"))==NULL)
	{
		printf("���ܴ��ļ�!\n");
		exit(0);
	}
	while((ch=fgetc(fp1))!=EOF)
	  fputc(ch,fp2);
	  
	rewind(fp1);    //���ļ��ڲ���ָ������ָ��һ�����Ŀ�ͷ
	//����������ַ���,����Ҫ�ر�֮�������´� 
	
	while((ch=fgetc(fp1))!=EOF)
	  putchar(ch);
	fclose(fp1);
	fclose(fp2);
	
	return 0;
} 
