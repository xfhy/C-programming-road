/*
2015年6月3日22:59:36
存储键盘输入的内容 
*/
# include <stdio.h>
# include <stdlib.h> 
# include <string.h>
 
int main(void)
{
	FILE *fp;
	char str[100],file[10];
	printf("请输入文件的路径(名称):");
	scanf("%s",file); 
	if((fp=fopen(file,"w"))==NULL)
	{
		printf("不能打开需要复制的文件!\n");
		exit(0);
	}
	printf("请输入文件内容(以#结束):");
	scanf("%s",str); 
	while(strcmp(str,"#")!=0)
	{
		fputs(str,fp);
		scanf("%s",str);
	}
	fclose(fp);
	
	return 0; 
} 
