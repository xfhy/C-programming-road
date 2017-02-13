/*
2015年6月3日22:11:54
查看.c文件的数据 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE *fp;
	if((fp=fopen("D:\\txt\\1.cpp","r"))==NULL)
	{
		printf("Can't open the file");
		exit(0);
	}
	char c;
	while((c=fgetc(fp))!=EOF)
	{
		putchar(c);
	}
	fclose(fp);
	
	return 0; 
} 
