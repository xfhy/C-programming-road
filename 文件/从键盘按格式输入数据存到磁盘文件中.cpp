/*
2015��6��4��13:33:41
�Ӽ��̰���ʽ�������ݴ浽�����ļ��� 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	char s1[20],s2[20];
	int x,y;
	FILE *fp;
	if((fp=fopen("D:\\file\\x.txt","w"))=NULL)
	{
		printf("���ܴ��ļ�!\n");
		exit(0);
	}
	fscanf(stdin,"%d",&x);
	printf("�����ֵ:%d\n",x);
	//getchar();
	fprintf(fp,"%d\n",x);  
	fclose(fp);
	
	return 0;
}
