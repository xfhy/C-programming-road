/*
2015年6月30日17:24:38
lol  电刀出装 
狂热（黄叉）（1175）+贪婪之刃（750）。合成价格：600
狂热1175 = 多兰450 + 龙爪425      合成价格:300 
贪婪750 =  龙爪425                 合成价格:325 
*/
# include <stdio.h>
# include <Windows.h>
# include <stdlib.h>

int a[6] = {2500,1175,750,450,425,425};    
          //电刀 狂热 贪婪 多兰 龙爪 
int money=4500;

void gotoxy(int a,int b);

void gotoxy(int a, int b)   //定向输出 
{
    int xx=0x0b;
    HANDLE hOutput;
    COORD loc;
    loc.X =a;
    loc.Y=b;
    hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOutput, loc);
    return;
}

void map(void)      //画地图 
{
	gotoxy(20,5); 
	printf("1.电刀 %d",a[0]);
	gotoxy(9,9);
	printf("2.狂热 %d  ",a[1]);
	gotoxy(29,9);
	printf("3.贪婪 %d",a[2]); 
	gotoxy(3,13);
	printf("4.多兰 %d  ",a[3]); 
	gotoxy(14,13);
	printf("5.龙爪 %d  ",a[4]);
	gotoxy(29,13);
	printf("6.龙爪 %d  ",a[5]); 
} 

int judge(int money,int x)     //判断自己的钱是否购买相应的装备 
{
	if(money>=x)
	  return 1;
	else
	  return 0;
} 

void pay(int money)     //买装备 
{
	int x;
	printf("\n\n\n\n请输入需要购买的装备序号:");
	scanf("%d",&x);
	if(x>=1 && x<=6)
	{
		switch(x)
		{
			case 1:      //1电刀 
			   if(judge(money,a[0]) && a[0]!=0)
			   {
			   	   printf("\n购买成功!\n");
			   	   printf("\n您已获得电刀!可以出去超神啦!\n"); 
			   	   a[0] = 0; 
			   	   exit(0); 
			   }
			   else if(a[0]==0) 
			   {
			      printf("\n已经买过了,逗比...\n");
			      Sleep(700);
			   }
			   else
			   {
			   	  printf("\nmoney不够哦!\n");
			   	  Sleep(700);
			   }
			   break;
			case 2:      //2狂热 
			   if(a[0]==0)
			   {
			   	  printf("\n买了电刀的,刚刚..无需再买狂热\n");
			   	  Sleep(700);
			   	  return;
			   } 
			   if(judge(money,a[1]) && a[1]!=0)
			   {
			   	   printf("购买成功!");
			   	   Sleep(700);
			   	   a[1] = 0; 
			   	   if(a[3]!=0 && a[4]!=0) //判断多兰和龙爪是否已被买过  两个都没买 
			   	   {
			   	      a[0]-=1175;
			   	   }
			   	   else if(a[3]==0 && a[4]!=0)  //买了多兰 没买龙爪 
			   	   {
			   	      a[0]-=450;
			   	   }
			   	   else if(a[3]!=0 && a[4]==0)  //没买多兰 买了龙爪 
			   	   {
			   	      a[0]-=425;
			   	   }
			   	   else if(a[3]==0 && a[4]==0)  //两个都买了 
			   	   {
			   	      a[0]-=300;
			   	   }
			   } 
			   else if(a[1]==0) 
			   {
			      printf("\n已经买过了,逗比...\n");
			      Sleep(700);
			   }
			   else
			   {
			   	  printf("\nmoney不够哦!\n");
			   	  Sleep(700);
			   }
			   break;
			case 3:      //3贪婪 
			   if(a[0]==0)
			   {
			   	  printf("\n买了电刀的,刚刚..无需再买贪婪\n");
			   	  Sleep(700);
			   	  return;
			   } 
			   if(judge(money,a[2]) && a[2]!=0)
			   {
			   	   printf("购买成功!");
			   	   Sleep(700);
			   	   a[2] = 0; 
			   	   if(a[5]==0)        //判断龙爪是否已被买过 
			   	      a[0]-=325;
			   	   else if(a[5]!=0)
			   	      a[0]-=750;
			   } 
			   else if(a[2]==0) 
			   {
			      printf("\n已经买过了,逗比...\n");
			      Sleep(700);
			   }
			   else
			   {
			   	  printf("\nmoney不够哦!\n");
			   	  Sleep(700);
			   }
			   break;
			case 4:       //4多兰 
			   if(a[1]==0)
			   {
			   	  printf("\n买了狂热的,刚刚..无需再买多兰\n");
			   	  Sleep(700);
			   	  return;
			   } 
			   if(judge(money,a[3]) && a[3]!=0)
			   {
			   	   printf("购买成功!");
			   	   Sleep(700);
			   	   a[3] = 0; 
			   	   a[0]-=450;
				   a[1]-=450; 
			   } 
			   else if(a[3]==0) 
			   {
			      printf("\n已经买过了,逗比...\n");
			      Sleep(700);
			   }
			   else
			   {
			   	  printf("\nmoney不够哦!\n");
			   	  Sleep(700);
			   }
			   break;
			case 5:       //5龙爪 
			    if(a[1]==0)
			   {
			   	  printf("\n买了狂热的,刚刚..无需再买龙爪\n");
			   	  Sleep(700);
			   	  return;
			   } 
				if(judge(money,a[4]) && a[4]!=0)
			   {
			   	   printf("购买成功!");
			   	   Sleep(700);
			   	   a[4] = 0; 
			   	   a[0]-=425;
				   a[1]-=425; 
			   } 
			   else if(a[4]==0) 
			   {
			      printf("\n已经买过了,逗比...\n");
			      Sleep(700);
			   }
			   else
			   {
			   	  printf("\nmoney不够哦!\n");
			   	  Sleep(700);
			   }
			   break;
			case 6:       //6龙爪 
			   if(a[2]==0)
			   {
			   	  printf("\n买了贪婪的,刚刚..无需再买龙爪\n");
			   	  Sleep(700);
			   	  return;
			   } 
			   if(judge(money,a[5]) && a[5]!=0)
			   {
			   	   printf("购买成功!");
			   	   Sleep(700);
			   	   a[5] = 0; 
			   	   a[0]-=425;
			   	   a[2]-=425;
			   } 
			   else if(a[5]==0) 
			   {
			      printf("\n已经买过了,逗比...\n");
			      Sleep(700);
			   }
			   else
			   {
			   	  printf("\nmoney不够哦!\n");
			   	  Sleep(700);
			   }
			   break;
			default:
			  printf("哈哈"); 
		}
	}
	printf("\n\n\n\n\n\n\n");
}

int main(void)
{
	char c;
    map();
	do
	{
	   pay(money);
	   system("cls");
	   map();
	   printf("\n\n\n\n\n\n继续出装(y/n)");
	   scanf(" %c",&c);
    }while(c=='Y' || c=='y');
    
	
	return 0; 
} 
