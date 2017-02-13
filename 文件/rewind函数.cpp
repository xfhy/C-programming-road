/*
2015年6月5日13:45:09
rewind函数 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE *fp1,*fp2;
	char ch;
	if((fp1=fopen("D:\\file\\1.cpp","r"))==NULL)
	{
		printf("不能打开文件!\n");
		exit(0);
	}
	if((fp2=fopen("D:\\file\\2.cpp","w"))==NULL)
	{
		printf("不能打开文件!\n");
		exit(0);
	}
	while((ch=fgetc(fp1))!=EOF)
	  fputc(ch,fp2);
	  
	rewind(fp1);    //将文件内部的指针重新指向一个流的开头
	//如果不用这种方法,就需要关闭之后再重新打开 
	
	while((ch=fgetc(fp1))!=EOF)
	  putchar(ch);
	fclose(fp1);
	fclose(fp2);
	
	return 0;
} 
