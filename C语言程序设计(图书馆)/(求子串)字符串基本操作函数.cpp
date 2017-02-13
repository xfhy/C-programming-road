/*
2015年3月2日16:25:49
 (求子串)字符串基本操作函数 
*/
# include <stdio.h>
# include <string.h>

char * substr0(char * c,int id,int num,char * c1)  //将c中的某个子串复制给c1,id表示下标(比如c[2],2就是下标),
                                                   //num 是复制字符个数 
{
	int i;
	char * p = c+id;    //指向源串中要提取子串的起始位置 
	char * p1 = c1;     //指向目标串c1的起始位置 ,这里是指针 
	for(i=1; i<=num; i++)   //把源串中提取的字符串赋给目标串c1 
		*p1++ = *p++; 
	*p1 = '\0';   //记得加串结束符 
	return c1;
}

int main(void)
{
	char c[100] = "china china",c1[100];   //c1要足够大装下要提取的字符串 
	
	printf("%s\n",substr0(c,2,5,c1));
	return 0; 
} 
