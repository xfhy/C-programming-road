/*
2015��6��3��22:19:17
�����ɸ��ļ�����˳����ʾ����Ļ�� 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE *fp;
	int i,n;
	char ch;
	char argv[10][20];
	printf("��������Ҫ�鿴���ļ�����:"); 
	scanf("%d",&n);
	printf("��һ��������Ӧ�ļ���·��:\n");
	for(i=0; i<n;i++)
	{
		printf("�������%d���ļ���·��:",i+1);
		scanf("%s",argv[i]); 
	} 
	for(i=0; i<n; i++)
	{
	  if((fp=fopen(argv[i],"r"))==NULL)
	  {
	  	printf("���ܴ��ļ�!\n");
	  	exit(0);
	  }
	  while((ch=fgetc(fp))!=EOF) 
	    putchar(ch);
	 fclose(fp);
    }
	
	return 0;
} 
