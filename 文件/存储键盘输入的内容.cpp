/*
2015��6��3��22:59:36
�洢������������� 
*/
# include <stdio.h>
# include <stdlib.h> 
# include <string.h>
 
int main(void)
{
	FILE *fp;
	char str[100],file[10];
	printf("�������ļ���·��(����):");
	scanf("%s",file); 
	if((fp=fopen(file,"w"))==NULL)
	{
		printf("���ܴ���Ҫ���Ƶ��ļ�!\n");
		exit(0);
	}
	printf("�������ļ�����(��#����):");
	scanf("%s",str); 
	while(strcmp(str,"#")!=0)
	{
		fputs(str,fp);
		scanf("%s",str);
	}
	fclose(fp);
	
	return 0; 
} 
