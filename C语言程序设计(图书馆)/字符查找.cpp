/*
2015年3月3日21:44:31
字符查找 
*/
# include <stdio.h>
# include <string.h>

void found(char * c,char p)    //单个字符查找 
{
	int id = 0;
	while(*c!='\0')
	{
		if(*c==p)
		   break;
		else
	   {
	   	c++;
	   	id++;
		}
	}
	if(id==15)
	   printf("对不起,没有您想查找的那个字符\n");
	else
	    printf("您想查找的字符在原来的字符里的第%d个\n",id + 1);
}

int findpat0(const char *c,const char *p,int start) 

int main(void)
{
	char ch;
	char c[100] = "chinachinachina";
	char p;
	printf("原字符%s \n",c);
		printf("请输入您想查找的字符");
		scanf("%c",&p);    //我擦,单个字符赋值记得加&符号,而且是%c输入 
	                     //字符串输入时%s 
		found(c,p);
	
	return 0;
} 
