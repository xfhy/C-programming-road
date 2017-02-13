/*
2015年3月31日14:25:58
图形输出 
*/
# include <stdio.h>
# include <windows.h>

void airplane(void)   //用*打成的飞机 
{
	int i,j;
	printf("\t         小飞机          \n"); 
	for(i=5; i>0; i--)   //五行 
	{
		for(j=i-5; j<0; j++)   //相当于空格和*在同一行打印出来,这里控制空格数量 
		  printf("  ");
		for(j=1; j<=8; j++)
		  printf("*"); 
		printf("\n");
	} 
	
	for(i=1; i<20; i++)  //华丽分割线 
	   printf("==");
	printf("\n");
	
	for(i=5; i>0; i--)   //五行 
	{
		for(j=i-1; j>0; j--)  //这里空格先多后少 
		  printf("  ");
		for(j=1; j<=8; j++)  //每行8个* 
		  printf("*"); 
		printf("\n");
	} 
} 

void handstand(void)    //倒立的三角
{
	int n,sp=0,i=0;    //符号数,空格数 
	char c;
	printf("请输入三角的最上边需要多少个符号及是哪个符号(中间用逗号隔开)\n");
	//scanf("%d",&n);
	scanf("%d,%c",&n,&c); 
	//system("cls");
	for(n=2*n-1; n>0; n-=2)   //控制个数 
	{
		for(i=0; i<sp; i++)  //空格数0,1,2,3,4,5,6.... 
		  printf(" ");
		for(i=0; i<n; i++)  //输出n以内的符号个数 
		  printf("%c",c);
		printf("\n"); 
		sp++;
	}
} 

void cone(void)           //正反三角形 
{
	int n,i=0,t;    
	printf("请输入行数:\n");    
	scanf("%d",&t);       //t行数
	//n = 2*n-1;
	for(n=0; n<=t; n++)   //行数 
	{
		for(i=0; i<=10-n; i++)  //空格从10逐渐减少 
		  printf(" "); 
		for(i=1; i<=2*n-1; i++)  //每行个数 2*n-1
		  printf("*"); 
		printf("\n");
		//sp--;
	}
	for(n=t-1; n>0; n--)
	{
		for(i=10-n; i>=0; i--)
		  printf(" ");
		for(i=2*n-1; i>0; i--)
		  printf("*");
		printf("\n");
	} 
} 

int main(void)
{
	system("title 图形制作");
	int k;
	printf("\t-------------------简易图形制作-------------------");
	airplane();
	handstand();
	cone();
	
	return 0; 
} 
     
