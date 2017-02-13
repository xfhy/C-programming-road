/*
2015年3月1日20:52:04 
删除字符串中的空格字符 
把连续的字符当做是一个字符段,移动连接字符段 
*/

/*------这里一大堆是错误的----------*/
/*# include <stdio.h>    
# include <string.h>

char * del(char * c)
{
	char * p;
	while(*c!='\0' && *c!=32)   //既不是结束,也不是空格,这里寻找第一个空格符
	   c++;
	if(*c!='\0')       //找到空格就开始连接字符段 
	{
	   p = c+1;   //跳过空格,连接起来
	   while(*p!='\0')
	   {
	   	 if(*p==32)
	   	    p++;    //寻找新字符段首字符 
	   	 else
			*c++=*p++;   //等价于*c=*p;  c++;  p++; 
	   }
	   *c = '\0';    //加串结束符
    }
	    
    return c; 
}

int main(void)
{
	char c[100];
	printf("请输入需要删除空格的字符串!\n");
	//gets(c);
	scanf("%s",c);
	//puts(del(c));
	printf("%s",del(c));
	
	return 0; 
} */
#include <stdio.h> 
#include <string.h> 
int main(void) 
{ 
	char str[20]; 
	int i,j=0; 
	printf("输入字符串：\n"); 
	gets(str); 
	
	for(i=0; i<strlen(str); i++) 
	  if(str[i]!=' ') 
	    str[j++]=str[i]; 
	    
	str[j]='\0'; 
	puts(str); 
}
