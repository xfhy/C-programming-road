/*
2015年4月15日7:56:43
统计单词数量 
*/
# include <stdio.h>

int main(void)
{
	char str[30];
	int i=0,word=0,j;
	char c;
	gets(str);
	for(i=0;str[i]!='\0' ; i++)
	{
		c = str[i];  //把字符串挨个赋值给c 
	    if(c == ' ')   //当遇到空格则单词数量加一 
	    {
	      word++;
	    }
	}
	printf("%d",word+1);   //字符串的单词数量等于空格加一 
	
	return 0; 
} 
