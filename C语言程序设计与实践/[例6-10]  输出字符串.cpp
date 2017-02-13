/*
2015年4月6日22:41:33
[例6-10]  输出字符串 
*/
# include <stdio.h>
# include <string.h> 

int main(void)
{
	char a[5] = {'c','h','i','n','a'};    //将字符逐个赋值 
	char b[6] = "china";    //注意,这里是字符串,结尾处需要一个位置拿来放"\0"
	char c[]  = "china";    //可以通过赋初值隐含确定数组长度 
	char d[3][3] = {
	{'1','2','3'},
	{'1','2','3'},
	{'1','2','3'}
	              };
    int i,j;
	for(i=0; i<5; i++)
	{
		printf("%c",a[i]);
	} 
	printf("\n");
	
	for(i=0; i<5; i++)
	{
		printf("%c",b[i]);
	} 
	printf("\n");
	
	for(i=0; i<strlen(c); i++)   //输出未知长度字符串 
	{
		printf("%c",c[i]);
	} 
	printf("\n");
	
	for(i=0; i<3; i++)   //输出二维数组 
	{
		for(j=0; j<3; j++)
		{
			printf("%c",d[i][j]);
		} 
		printf("\n");
	}
	
	return 0; 
} 
