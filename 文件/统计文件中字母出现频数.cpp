/*
2015年6月5日13:06:48
统计文件中字母出现频数 
*/
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

int main(void)
{
	FILE *fp;
	char c;
	int small[26]={0},num[10]={0},big[26]={0},i,others=0;
	if((fp=fopen("D:\\file\\txt.txt","r"))==NULL)
	{
		printf("不能打开文件!\n");
		exit(0);
	} 
	i=0;
	while((c=fgetc(fp))!=EOF)
	{
		if(isdigit(c))  //如果c是数字 
		{
			num[c-'0']++;
		}
		if(isalpha(c))   //判断是否是字母 
		{
			if(islower(c))   //判断是否为小写字母 
			{
				small[c-'a']++;
			}
			else     //其他则为大写字母 
			{
				big[c-'A']++;
			}
		}
		else      //其他符号 
		{
			others++;
		}
		i++;
	}
	for(i=0; i<26; i++)
	{
		printf("%c:%d    ",'a'+i,small[i]);
		printf("%c:%d\n",'A'+i,big[i]);
	}
	for(i=0; i<10; i++)
	{
		printf("%d:%d\n",i,num[i]);
	}
	
	return 0; 
} 
