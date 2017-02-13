/*
2015年3月9日22:35:30
从键盘输入一段文本,存储到D:\poem.txt 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
   char ch;
	FILE * fp;
	fp = fopen("D:\\txt\\poem.txt","w");	  //以写的方式打开文件 
	if(!fp)    //相当于if(fp==0),判断文件是否被打开 
	{
		printf("文件没被打开!\n");
		exit(0);
	}
	printf("请输入一段字符串:(以'#'结束)");
	ch = getchar();    //读入第一个字符 
	while(ch!='#')    //如果输入的不是# 
   {
   	fputc(ch,fp);   //将读入的字符写入文件 
   	ch = getchar();    //继续读下一个字符 
	}
	
	fclose(fp);     //关闭文件 
	 
	
	return 0;
}
