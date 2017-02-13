/*
2015年3月2日19:09:45
求子串,升级版 
*/
# include <stdio.h>
# include <string.h>

char * substr0(char *c,int id,int num,char *c1)
{
	int i;
	char *p = c+id;
	char *p1 = c1;
	for(i=1; i<=num; i++)
	   *p1++=*p++;
	*p1 = '\0';  //到这里来的时候已经跳出循环,*p1已经是最后一个地址所指向的内容,所以加串结束符 
	return c1;
} 

int main(void)
{
	char c[100],c1[100];
	printf("%s\n",substr0(c,2,4,c1));
	
	return 0;
} 
