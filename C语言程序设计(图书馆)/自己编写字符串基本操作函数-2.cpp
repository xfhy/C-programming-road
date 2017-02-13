/*
2015年3月1日15:43:33
自己编写字符串基本操作函数-2 
*/
# include <stdio.h>
# include <string.h> 

char * strcat1(char * c1,char * c2)   //字符串连接函数,通过移动下标实现 
{
	int i,j=0;
	i = strlen(c1);   //这里i=4; 
	while(c2[j]!='\0')  
	{
		c1[i] = c2[j];   //这里最初c1[4] == '\0'
		i++;            //这3行代码可以缩小成c[i++] = c1[j++]; 
		j++;
	}
	c1[i] = '\0';    //最后那里记得加'\0',才能算是字符串 
	
	return c1;
}

char * strcat2(char * c,char * c1)
{
	char * p = c+strlen(c);   //p的地址是c的地址的末尾的下一位 
	while(*c1!='\0')  
	{
	     *p = *c1;   //这3行可以省略成*p++=*c1++; 
	     p++;
	     c1++;
	}
	*p = '\0';
	
	return c; 
} 

int main(void)
{
	char c1[10] = "work";
	char c2[10] = "hard";
	char c3[10] = "work";
	char c4[10] = "hard";
	printf("%s\n",strcat1(c1,c2));
	printf("%s\n",strcat2(c3,c4));
	return 0;
} 
