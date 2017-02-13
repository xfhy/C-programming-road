/*
2015年6月14日15:24:04
猜数字小游戏
通常由两个人玩，一方出数字，一方猜。出数字的人要想好一个没有重复数字的4位数，不能让猜的人知道。
猜的人就可以开始猜。每猜一个数字，出数者就要根据这个数字给出几A几B，其中A前面的数字表示位置正确
的数的个数，而B前的数字表示数字正确而位置不对的数的个数。
如正确答案为 5234，而猜的人猜 5346，则是 1A2B，其中有一个5的位置对了，
记为1A，而3和4这两个数字对了，而位置没对，因此记为 2B，合起来就是 1A2B。
接着猜的人再根据出题者的几A几B继续猜，直到猜中（即 4A0B）为止 
*/
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <Windows.h>
# include <conio.h>

int main(void);
int judge(int b[]);
void creat(int d[4]);
void play(int a[4]);
void gotoxy(int x, int y);

int judge(int b[])     //判断是否自己的数字重复
{
	int i,j,t=0;
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			if(i!=j && b[i]==b[j])   //判断是否自己的数字重复 
			{
				t=1;
			}
		}
	}
	return t;   //有重复,t=1 
} 

void creat(int d[4])   //产生4位不一样的数字,并且首位不为1
{
	int a[4],x;
	while(1)     //产生4位不一样的数字,并且首位不为1 
	{
		srand(time(0));
		a[0] = rand()%9+1;
		a[1] = rand()%9;
		a[2] = rand()%9;
		a[3] = rand()%9;
		x = judge(a);
		if(x==1)   //如有重复,继续随机生成数字 
		{
			x=0;
			continue;
		}
		else     //没有重复,则跳出循环 
		  break;
    }
    for(int i=0; i<4; i++)
    {
    	d[i] = a[i];
	}
}

void play(int a[4])      //游戏环节 
{
	int b[4],true1=0,tfalse=0,i,j,x,t=0;    //位置及数字均正确,数字正确位置错误
	while(1)
	{ 
	   while(1)    //判断输入的数字是否有重复 
	   {
		   printf("请输入你猜的数字:\n"); 
		   scanf("%d",&x);
		   for(i=3; i>=0; i--)
		   {
		   	  b[i] = x%10;
		   	  x/=10;
		   } 
		   t = judge(b);
	       if(t==1)
	       {
	       	  printf("您输入的数字有重复哦,请重新输入!\n");
	       	  t=0;
	       	  continue; 
		   }
		   else
		   {
		   	  break;
		   }
	   }
	   for(i=0; i<4; i++)    //判断相同位置有多少相同的数字 
	   {
   	  	   if(a[i]==b[i])   
   	  	     true1++; 
	   }
	   for(i=0; i<4; i++)
	   {
	   	  for(j=0; j<4; j++)
	   	  {
	   	  	 if(i!=j && a[i]==b[j])   //判断不同位置有多少相同的数字 
	   	  	    tfalse++;
		  }
	   }
	   
	   printf("\n%dA%dB \n",true1,tfalse); 
	   if(true1==4)
	   {
	   	   printf("恭喜,您赢了!\n\n\n");
	   	   printf("您想继续吗?\n\n");
	   	   printf("\t 1.继续下一轮猜数字\n");
	   	   printf("\t 2.直接退出\n");
	   	   int t1; 
	   	   scanf("%d",&t1);
	   	   if(t1==1)
	   	   {
	   	   	  true1=0;
		      tfalse=0;
		      int d[4];
		      creat(d);
		      play(d);
		   }
		   else
	          exit(0);
	   	   
       }
	   printf("您想继续吗?\n\n");
	   printf("\t 1.继续猜数字\n");
	   printf("\t 2.返回主菜单\n");
	   printf("\t 3.直接退出\n"); 
	   int temp;
	   scanf("%d",&temp);
	   if(temp==1)
	   {
	   	  true1=0;
		  tfalse=0;
	      continue;
	   }
	   else if(temp==2)
	   {
	   	  system("cls"); 
	      main();
	    }
	   else
	      exit(0);
    }
	
}

void gotoxy(int x, int y) //定位到第y行的第x列
{
    int xx=0x0b;
    HANDLE hOutput;
    COORD loc;
    loc.X = x;
    loc.Y=y;
    hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOutput, loc);
    return;
}

int main(void)
{
	int d[4],i,x;
	creat(d);
	gotoxy(20,10); 
	printf("1.开始游戏\n");
	gotoxy(20,11);
	printf("2.退出\n\n\n\n\n\n\n\n\n\n\n\n"); 
	while(1)
	{ 
		x = getch();
		if(x=='1')    //不知为何要加单引号,亲测不加就失败 
		{
			system("cls");
			play(d);
		}
		else if(x=='2')
		{
			exit(0);
		}
		else
		{
			printf("输入有误!");
		}
    }
	return 0; 
} 
