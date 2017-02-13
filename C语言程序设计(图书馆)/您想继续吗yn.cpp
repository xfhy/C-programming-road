/*
2015年2月19日20:47:55
您想继续吗?y/n 
*/
# include <stdio.h>

int main(void)
{
	char ch;
	do
	{
		printf("您想继续吗?(y/n):\n");
		ch=getchar();   //等价于scanf("%c",ch);    读取字符 
		if(ch=='y')
		   printf("OK\n");
		getchar();       //读取在滞留在缓冲区的换行符,但忽略返回值 
	}while(ch=='y');
	
	/*do
	{
		printf("您想继续吗?(y/n):\n");
		 
		scanf(" %c",&ch);   //%c前面必须加空格符号 
		if(ch=='y')
		   printf("OK\n");
	}while(ch=='y'); 
	*/
	return 0; 
	
}
