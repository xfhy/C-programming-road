/*
2015��5��1��19:35:57
���txt�ļ� 
*/
# include <stdio.h>
# include <stdlib.h>
int main(void)
{
	FILE * fp;
	char c;
	if((fp=fopen("d:\\123.cpp","r"))==NULL)
	{
		printf("Can't open this file!");
		exit(0);
	}
	else
	{
		while(!feof(fp))
		{
			c = fgetc(fp);            //��fp�е��ַ�����c�� 
			fprintf(stdout,"%c",c);   //��c�е��ַ��������Ļ�� 
		}
		fclose(fp);                  //�ǵùر��ļ� 
	} 
	
	return 0;
}
