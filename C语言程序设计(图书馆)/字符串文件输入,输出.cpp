/*
2015年3月9日13:35:28
字符串文件输入,输出 
*/
# include <stdio.h>

int main(void)
{
	/*    字符输入 
	char ch;
	ch = fgetc(stdin);
	fputc(ch,stdout);
	*/
	
	/*    字符串输入 
	char s[10];
	fgets(s,5,stdin);       //输入abcdefg,读取abcd\0 (已读取5个位置了,后面的不读取了)
	fputs(s,stdout);        //输出abcd      因为上边写的5 
	*/
	
	int n;         //数值型数据 
	fscanf(stdin,"%d",&n);     //文件输入 
	fprintf(stdout,"\n%d\n",n);    //文件输出 
	
	return 0;
} 
