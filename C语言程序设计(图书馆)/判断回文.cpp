/*
判断回文
所谓回文,就是去掉空格之后的字符串是中心对称的 
*/
# include <stdio.h>
# include <string.h>

int judge (char * c)
{
	int i=0,j=strlen(c)-1;    //c[j]即是字符串最后一位 
	int t = 1;
	while(i < j)
	{                        //32是空格字符的代码 
		while(c[i] == 32)   //去掉空格之后的字符串是中心对称的,so不加空格 
		  i++;
		while(c[j] == 32)
		  j--;
		if(c[i] == c[j])
		 {
		 	i++;
		 	j--;
		 } 
		else
		{
		   t = 0;
		   break; 
	    }
	}
	return t;
}

int main(void)
{
	char c[100];
	printf("请输入您想判断的字符串:\n");
	scanf("%s",c);
	if(judge(c))
	   printf("YES!\n");
	else
	   printf("NO!\n");
	
	return 0;
} 
