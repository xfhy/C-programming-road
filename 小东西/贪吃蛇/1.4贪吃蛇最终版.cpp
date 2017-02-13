/*
2015年6月7日21:20:07
低级-贪吃蛇    gotoxy生成gameover   可判断死活 
*/
# include <stdio.h>
# include <string.h>
# include <Windows.h>    //gotoxy需要这个 
# include <conio.h>      //getch()函数声明 
# include <time.h>
//# include <unistd.h>
# include <stdlib.h>     //exit(0)的声明 

void printma(char gm[20][20],int x[],int y[],int len,int fcount,int fx,int fy);       //画图 
void play(char gm[20][20],int x[],int y[],int *len,int *fcount,int *fx,int *fy,int *score);   //移动 
void fruit(int *fcount,int *fx,int *fy,int x[],int y[],int len);    //水果 
void move1(char gm[20][20],int x[],int y[],int *len,int *fcount,int *fx,int *fy,int *score);
void gotoxy(int x, int y);
int main(void);

char s;
int delay=250;

int game(int len,int x[],int y[],int score)   //判断游戏是否结束 
{
	int gameover=0;      //是否结束 
	for(int i=1; i<len; i++)   //从第二个开始,因为蛇头不与自己相撞 
   {
   	  if( (x[0]==x[i] && y[0]==y[i]) || x[0]==0 || x[0]==19 || y[0]==0 || y[0]==19)   //如果蛇头与蛇身重复,则gameover 
	  {
	  	 gameover=1;
	  	 gotoxy(35,10);
	  	 printf("当前分数:%d\n",score);
	  	 gotoxy(35,11);
	  	 printf("GAVE OVER!\n"); 
	  	 break; 
	  } 
   } 
   return gameover;     //返回是否结束游戏 
}

void printma(char gm[20][20],int x[],int y[],int len,int fcount,int fx,int fy)       //画地图 
{
	int i,j,k,snake=0;
	for(i=0; i<20; i++)   //20*20的矩阵 
	{
		for(j=0; j<20; j++)
		{
			snake=0;       
			for(k=0; k<len; k++)    //这个点与蛇的每一个点进行比较,遍历蛇的每一个位置,只需查看len次 
			{
				if(i==x[k] && j==y[k])   //当前行等于蛇的行标号   蛇需要和其他普通的点区分一下 
				{
					if(k==0)      //蛇头 
					  snake=1;
					else 
					  snake=2;    //蛇身 
				    break;       //既然找到了蛇的身体的一个点,并且已经识别出蛇身那么就退出循环 
				} 
			}
			if(snake==1)      //蛇头 
				printf("●");
			else if(snake==2) //蛇身 
				printf("○");
			else if(fcount && i==fx && j==fy)   //有无水果,水果横坐标,纵坐标 
			    printf("⊙");
			else if(i==0 || j==0 || i==19 || j==19)     //围墙 
			    printf("■"); 
			else
			  printf("  ");
		}
		printf("\n");
	}
} 

void play(char gm[20][20],int x[],int y[],int *len,int *fcount,int *fx,int *fy,int *score)
{
	int move=0;     //判断是否移动 
	int cx[400];   //备份的横坐标 
	int cy[400];     //备份的竖坐标 
	memcpy(cx,x,sizeof(int)* (*len)); 
	//从源x所指的内存地址的起始位置开始拷贝(*len)个字节到目标cx所指的内存地址的起始位置中
	memcpy(cy,y,sizeof(int)* (*len)); 
	s = getch(); 
	if(s=='w' || s=='a' || s=='s' || s=='d')   //上    蛇头移动 
	{
		move=1;
	} 
	while(move==1)
	{
		  Sleep(delay);    //最初速度250微秒 
		  move1(gm,x,y,len,fcount,fx,fy,score);  
    }
}

void move1(char gm[20][20],int x[],int y[],int *len,int *fcount,int *fx,int *fy,int *score)
{
	int cx[400];   //备份的横坐标 
	int cy[400];     //备份的竖坐标 
	memcpy(cx,x,sizeof(int)* (*len)); 
	//从源x所指的内存地址的起始位置开始拷贝(*len)个字节到目标cx所指的内存地址的起始位置中
	memcpy(cy,y,sizeof(int)* (*len)); 
	if(s=='w')   //上    蛇头移动 
	{
		x[0] = x[0]-1; 
	} 
	else if(s=='a')   //左 
	{
		y[0] = y[0]-1; 
	} 
	else if(s=='s')   //下 
	{
		x[0] = x[0]+1; 
	} 
	else if(s=='d')  //右 
	{
		y[0] = y[0]+1;
	} 
	if((*fcount) && x[0]==*fx && y[0]==*fy)    //当有果子,并且果子横坐标等于蛇头的下一个横坐标 
	{
		memcpy(x+1,cx,sizeof(int)* (*len));   //将蛇的全身都拷贝到x的下一个,相当于增加了一个 
		memcpy(y+1,cy,sizeof(int)* (*len));
		(*fcount)--;
		(*fx)=0;   //好习惯,清空一下,没用了,现在它的值 
		(*fy)=0;
		(*len)++;   //长度加一 
		(*score)++;    //分数加1 
		fruit(fcount,fx,fy,x,y,(*len));  //产生水果 
		delay-=10;       //速度变快
	}
	else    //如果没吃到水果,但是蛇还在移动的, 
	{
			for(int i=1; i<=(*len); i++)   //蛇身向蛇头的位置移动 
		    {
			   x[i] = cx[i-1];
			   y[i] = cy[i-1];
		    } 
    }
	system("cls");
	int gameover,t;
	if( (gameover = game((*len),x,y,(*score))) ==1) 
	{
	    printf("想继续游戏吗?\n");
	    printf("\t 1.重新开始\n");
	    printf("\t 2.退出\n");
	    scanf("%d",&t);
	    if(t==1)
	    {
	       system("cls");	
	       main();
	    }
	    else
	      exit(0);
	}
	printma(gm,x,y,(*len),*fcount,*fx,*fy);    //输出矩阵
	if(kbhit())    //判断是否有按键输入 
	{
	   s = getch();
    } 
}

void fruit(int *fcount,int *fx,int *fy,int x[],int y[],int len)     //产生水果 
{
	srand(time(0));
	int have=0,tfx,tfy,i;
	while(1)
	{
		tfx = 1+rand()%18;    //产生的水果要在围墙内 
		tfy = 1+rand()%18;
		for(i=0; i<len; i++)    
		{
			if(tfx==x[i] && tfy==y[i])    
			     //判断生成的随机果子坐标 是否与蛇身重复 
			{
				have=1;
				break;
			}
		}
		if(have==1)    //如果与蛇身重复,则重新生成 
		{
			continue;
		}
		else         //生成了果子 
		{
			(*fcount)++;     //果子数加1 
			*fx = tfx;       //产生的水果坐标可行则赋值给真正的水果坐标 
			*fy = tfy;
			break;
		}
    }
}

void gotoxy(int x, int y) //定位到第x行的第y列,需要头文件Windows.h 
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
	char ch;
	do
	{
		char gm[20][20];     //20*20的矩阵 
		int  x[400]={0},y[400]={0};        //蛇的横轴坐标 
		int len=0,fx,fy,fcount=0,score=0;
		x[len]=9;           //初始位置 
		y[len]=9;
		len++;
		x[len]=9;
		y[len]=8;
		len++;
		
		fruit(&fcount,&fx,&fy,x,y,len);    //产生水果 
		printma(gm,x,y,len,fcount,fx,fy);   //输出矩阵 
		while(1)
		{
		   printf("当前分数%d  wasd,上左下右\n",score);
		   play(gm,x,y,&len,&fcount,&fx,&fy,&score);
		   int gameover=game(len,x,y,score);  //判断游戏结束
		   if(gameover==1)
		      break;
	    }
	    printf("想继续游戏吗?(y/n):");
	    scanf(" %c",&ch);
	    system("cls");
	}while(ch=='y' || ch=='Y');
	
	return 0; 
} 

/*
2015年6月17日13:10:50
这个程序写了很久了,终于成功了,心里很高兴.
a. kbhit()这是一个函数,后面记得加括号 
b. 将一个大问题尽量分成很小的小任务进行 
c. memcpy(cx,x,sizeof(int)* (*len)); 
	//从源x所指的内存地址的起始位置开始拷贝(*len)个字节到目标cx所指的内存地址的起始位置中
d. 尽量少用goto,不方便阅读 
*/
