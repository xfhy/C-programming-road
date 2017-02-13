/*
2015年4月13日7:57:44
[例6-13]将两个字符串连接起来,不要用strcat函数 
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char a[20];
	char b[10];
	int i=0,j=0;
	printf("Enter your word to a AND b \n");
	gets(a);
	gets(b);
	while(a[i]!='\0')   //这里是把a的最后一个位置找出来 
	  i++;      
	while(b[i]!='\0')   //从a的最后一个位置开始,把b的每一个元素都赋值给a的后面的位置 
	  a[i++] = b[j++];
	a[i] = '\0';     //一定记得在最后加'\0',否则不是字符串 
	printf("%s ",a[20]);	
	return 0; 
} 
