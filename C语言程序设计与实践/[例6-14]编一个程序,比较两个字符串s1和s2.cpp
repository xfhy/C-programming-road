/*
2015年4月13日8:49:04
[例6-14]编一个程序,比较两个字符串s1和s2,如果s1>s2输出一个正数 
等于输出0,小于输出负数,不用strcmp函数,用gets()输入 
*/
# include <stdio.h>

int main(void)
{
	/*                        //自己想的程序 
	char a[10],b[10];     
	int i=0,j=0;
	printf("Enter your words\n");
	gets(a); 
	gets(b);
	while(a[i]!='\0' && b[i]!='\0')
	{
		if(a[i]>b[i])
		{
			printf("2");
			break;
		}
		i++;
	}
	i=0;
	while(a[i]!='\0' && b[i]!='\0')
	{
		if(a[i]==b[i])
		{
			printf("0");
			break;
		}
		i++;
	}
	i=0;
	while(a[i]!='\0' && b[i]!='\0')
	{
		if(a[i]<b[i])
		{
			printf("-2");
			break;
		}
		i++;
	}
	
	return 0;*/
	int i=0,resu;
	char a[100],b[100];
	printf("输入字符串 1:\n");
	gets(a);
	printf("输入字符串 2:\n"); 
	gets(b);
	while(a[i]==b[i] && a[i]!='\0')   //如遇不相等就跳出去 
	  i++;
	if(a[i]=='\0' && b[i]=='\0')      //如果一直都是相等的,则输出0 
	  resu=0;
	else
	  resu = a[i] - b[i];            //否则输出这个 
	printf("%d",resu);
	
	return 0;
}  
