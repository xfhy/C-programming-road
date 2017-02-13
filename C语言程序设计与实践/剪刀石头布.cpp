/*
2015年4月14日23:13:47
剪刀石头布 
*/
# include <stdio.h>
# include <time.h>
# include <stdlib.h>
 
int main(void)
{
	int a,b,i,j;
	char c; 
	do
	{
	printf("\n\t=========欢迎来到人机对战划拳世界==========\n");  //界面制作 
	printf("\t      1.石头\n");
	printf("\t      2.剪刀\n"); 
	printf("\t      3.布\n"); 
	printf("请选择(1~3):");
	scanf("%d",&i);
	if(i>=1 && i<=3)    //判断用户输入的是否为1~3 
	{
		switch(i)
		{
			case 1:
			   printf("你选择石头\n");
			   break; 
			case 2:
			   printf("你选择剪刀\n"); 
			   break;
			case 3:
			   printf("你选择布\n");
			   break; 
		}
    }
	
	srand(time(0));
	j = 1+ rand()%2;   //产生1到3的随机数
	 
	switch(j)
	{
		case 1:
		   printf("电脑选择石头\n");
		   break; 
		case 2:
		   printf("电脑选择剪刀\n"); 
		   break;
		case 3:
		   printf("电脑选择布\n");
		   break; 
	}
	
	if(i==1 && j==1)   //你出石头的情况 
	  printf("平局!\n"); 
	else if(i==1 && j==2) 
	  printf("恭喜你!胜利啦!!!!\n");
	else if(i==1 && j==3)
	  printf("你输了...");
	  
	else if(i==2 && j==2)  //你出剪刀的情况
	  printf("平局!\n");
	else if(i==2 && j==3) 
	  printf("恭喜你!胜利啦!!!!\n");
	else if(i==2 && j==1)
	  printf("你输了...");
	
	else if(i==3 && j==3)  //你出剪刀的情况
	  printf("平局!\n");
	else if(i==3 && j==1) 
	  printf("恭喜你!胜利啦!!!!\n");
	else if(i==3 && j==2)
	  printf("你输了...");
	printf("想继续玩吗(y or n)?");
	scanf(" %c",&c);  //让用户输入是否继续 
    }while(c=='y' || c=='Y');   //如果等于y或者Y那么继续执行do while{}里的代码 
	
	return 0; 
} 
