/*
2015年4月29日9:08:58
字符 字符串 整型 文件输入输出 
*/
/*
# include <stdio.h>
# include <stdlib.h>

//-------字符输入输出--------
void aa(void)
{
	char ch;
	printf("请输入一个字符:\n");
	ch = fgetc(stdin);    //从键盘得到数据存入ch 
	fputc(ch,stdout);     //将ch的内容输出到屏幕上 
	printf("\n");
}

/*写一串字符*/
#include "stdio.h"
//#include "string.h"
# include <stdlib.h>

int main(void)
{
    FILE * fp;
    char c;
    if((fp=fopen("d:\\txt\\data.txt","w"))==NULL)   //以只写的方式打开某文件,如果打开失败,则输出打不开 
	{
        printf("\nFile can not open!");
        exit(0);
    }
    while((c=getchar())!='#')  //以#符号结束 
	{
        fputc(c,fp);   // 将字符c写到文件指针fp所指向的文件的当前写指针的位置
    }
    fclose(fp);   //打开了文件记得关闭 
}
