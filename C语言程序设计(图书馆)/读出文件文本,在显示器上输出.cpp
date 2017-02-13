/*
2015年3月10日18:19:16
从文件D:\txt\poem.txt读出文件文本,在显示器上输出 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	char ch;
	FILE * fp;       //定义文件指针 
	fp = fopen("D:\\txt\\3月11号流程.txt","r");     //这是打开文件的函数,包含在stdio.h里,前面是文件路径,后面是
	                                            //以什么方式打开 
	if(!fp)       //如果fp==0,就未能正常打开文件 
	{
		printf("不能正常打开文件!\n");    
		exit(1);
	}
	ch = fgetc(fp);   //我猜是fp getchar(fp);方便记忆,把从fp读到的赋值给ch; 
	while(!feof(fp))
	{
		putchar(ch);    //输出该字符 
		ch = fgetc(fp);   //继续读取下一个字符 
	}
	
	fclose(fp);   //使用完记得关闭文件
	
	return 0; 
} 
