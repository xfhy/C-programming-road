/*
2015年6月3日22:19:17
把若干个文件内容顺序显示在屏幕上 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE *fp;
	int i,n;
	char ch;
	char argv[10][20];
	printf("请输入需要查看的文件个数:"); 
	scanf("%d",&n);
	printf("请一次输入相应文件的路径:\n");
	for(i=0; i<n;i++)
	{
		printf("请输入第%d个文件的路径:",i+1);
		scanf("%s",argv[i]); 
	} 
	for(i=0; i<n; i++)
	{
	  if((fp=fopen(argv[i],"r"))==NULL)
	  {
	  	printf("不能打开文件!\n");
	  	exit(0);
	  }
	  while((ch=fgetc(fp))!=EOF) 
	    putchar(ch);
	 fclose(fp);
    }
	
	return 0;
} 
