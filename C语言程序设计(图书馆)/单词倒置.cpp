/*
2015年6月2日16:47:22
句子单词倒置 
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char a[80]="this is a book";
	char t[80]="";
	int len=strlen(a),i;
	for(i=len-1; i>0; i--)
	{
		if(a[i]!=' ' && a[i-1]==' ')   //到达一个单词开始的位置 
		{
			strcat(t,a+i);
			a[i]='\0';
		}
	}
	strcat(t,a+i);
	strcpy(a,t);
	printf("%s",a);
	
	return 0;
} 
