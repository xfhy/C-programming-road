/*
2015年5月1日19:35:57
输出txt文件 
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
			c = fgetc(fp);            //将fp中的字符放入c中 
			fprintf(stdout,"%c",c);   //将c中的字符输出到屏幕上 
		}
		fclose(fp);                  //记得关闭文件 
	} 
	
	return 0;
}
