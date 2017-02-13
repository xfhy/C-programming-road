/*
2015年2月20日08:34:55
统计单词个数 
单词之间的分隔是空格符,以换行符结束 
*/
# include <stdio.h>

int main(void)
{
	char ch;
	int flag = 0,count = 0;
	printf("请输入一个句子:");
    ch=getchar();    //等价于scanf("%c",&ch);   读取第一个单词 
    while(ch!='\n')
    {
    	if(flag==0 && ch!=32)    //32是空格的代码   在遇到第一个单词时flag是等于0的,把flag变为1
		                         //直到遇到空格 
    	   flag = 1;
    	else if(flag==1 && ch==32)   //如果遇到空格,把flag变为0;count+1; 
    	{
    		count++;
    		flag=0;
		}
		ch=getchar();    //继续读下一个单词 
	}
	if(flag==1)       //当遇到\n ,也就是前面是最后一个单词,count+1 
	  count++;
	printf("一共有%d个单词\n",count);
	
	return 0;
} 
