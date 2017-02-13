/*
2015年6月4日13:33:41
从键盘按格式输入数据存到磁盘文件中 
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
		printf("不能打开文件!\n");
		exit(0);
	}
	fscanf(stdin,"%d",&x);
	printf("输入的值:%d\n",x);
	//getchar();
	fprintf(fp,"%d\n",x);  
	fclose(fp);
	
	return 0;
}
