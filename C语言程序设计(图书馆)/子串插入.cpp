/*
2015年3月2日19:39:04
子串插入 
*/
/*
# include <stdio.h>
# include <string.h>

char * strinsert0(char * c,int id,const char * c1)
{
	int len,len1,left,i;
	char * p, * q; 
	const char *p1;
	len = strlen(c);   //计算源串的长度
	len1 = strlen(c1);  //计算插入字符串的长度 
	left = len - id;   //计算后段长度 
	p = c + len;    //指向源串结束符 
	q = p + len1;   //指向源串结束符移动的终点 
	for(i=1; i<=left; i++)
	{
		*q--=*p--;
	} 
	p = c + id;   //指向插入的起始位置
	p1 = c1;
	while(*p1!='\0')
	   *p++=*p1++; 
	 
	return c;
}

int main(void)
{
	char c[100] = "cha",*c1 = "in";
	printf("%s\n",strinsert0(c,2,c1));
	
	return 0;
}*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	void insert(char a[],char b[],int t);
	char a[100],b[100];
	int t,i,j;
	printf("input a string:\n");
	//gets(a);   //输入函数,和scanf好像差不多 
	scanf("%s",a); 
	printf("inut b string:\n");
	//gets(b);
	scanf("%s",b);
	printf("input the position to insert:\n");
	scanf("%d",&t);
	if(t<=0 || t>strlen(a)+1)
	   {
	    printf("wrong!.input again");
	    scanf("%d",&t);
	   }
	insert(a,b,t);
}

void insert(char a[],char b[],int t)
{
	int len1,len2;
	int i,j,k,l;
	char c[100];
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<t-1;i++)
	    c[i]=a[i];
	for(j=0;j<len2;j++)
	    c[i+j]=b[j];
	l=0;
	for(k=t-1;k<len1;k++)
	   {
	     c[i+j+l]=a[k];
	     l++;
	   }
	c[i+j+l]='\0';
	puts(c);
}
