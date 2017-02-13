/*
2015年3月1日14:40:34
自己编写字符串基本操作函数 
*/
# include <stdio.h>
# include <string.h>

int strlen1(char * c)   //自己定做strlen函数 
{
	int i=0;
    while(*c++!='\0')
    {
      i++;	
    }
    return i;
} 

char * strcpy1(char * c2,char * c1)   //自己做的字符串复制函数,这里因为需要返回的是c2,c2是char * 类型
                                    // so定义的是char * 类型的函数 
{
	int i=0;
	while(c1[i]!='\0')
	{
		c2[i] = c1[i];
		i++;
	}
	c2[i] = '\0';   //如果不要这行代码,那么c2[]就不是字符串,字符串结尾必须要'\0' 
	return c2;
} 

/*-----------字符串函数复制------用指针实现--------*/
char * strcpy2(char * c,char * c1)  //形参,随便写成什么都无所谓 
{
	char * p = c;   //现在*p就代表c了     这里保留串指针作为返回值 
	while(*c1!='\0')  //c1的地址没增加一次,*c1向前移一个单位,于是*c1就是依次代表字符串的各个字符 
	{
		*p = *c1;
		p++;   //增加一个存储单元 
		c1++; 
	}
	*p = '\0';   //最后那里c1+了一个存储单元后不满足了,p也增加了一个存储单元,这个p新增加的存储单元还没有赋值
	             //要把最后那个赋值成'\0'才是字符串 
	return c;
}



char * strcat0(char * c,char * c1)
{}

int main(void)
{
	char c[10] = "work";
	char c1[10] = "work";
	char c2[10];
	char c3[10] = "work";
	char c4[10];
	printf("%d\n",strlen1(c));
	printf("%s\n",strcpy1(c2,c1));
	printf("%s\n",strcpy2(c4,c3));
	return 0; 
} 
