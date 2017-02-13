/*
2015年6月3日22:46:47
文件复制 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE *fp1,*fp2;
	char file1[20],file2[20];
	char ch;
	printf("请输入需要复制的文件:");
	scanf("%s",file1);
	if((fp1=fopen(file1,"r"))==NULL)
	{
		printf("不能打开需要复制的文件!\n");
		exit(0);
	}
	printf("请输入需要粘贴的位置:");
	scanf("%s",file2); 
	if((fp2=fopen(file2,"w"))==NULL)
	{
		printf("不能打开需要粘贴的路径!\n");
		exit(0);
	}
	while((ch=fgetc(fp1))!=EOF)
	  fputc(ch,fp2); 
	printf("复制成功!\n");
	fclose(fp1);
	fclose(fp2);
	
	return 0; 
} 
