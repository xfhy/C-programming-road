/*
2015年5月16日13:32:04
ktv点歌系统 
*/
# include <stdio.h>
# include <string.h> 

struct music
{
	char name[20];
}mu[100]; 

typedef struct music music;
int x=0,m=0;
 
void order(void)     //点歌 
{
	int i,l=0,t;
	char name_t[20];   //定义临时歌曲名 
	t = x;
	printf("请输入需要点播的歌曲数目:");
	if(m==0)
	{
	  scanf("%d",&x);
	  getchar();
    }
	else
	{
	  scanf("%d",&l);
	  getchar();
    }
	x+=l;
	printf("请依次输入歌曲名:\n");
	if(m==0)
	{
		for(i=1; i<=x; i++)
		{
			gets(name_t);
			strcpy(mu[i].name,name_t); 
		}
	}
	else
	{
		for(i=t+1; i<=x; i++)
		{
			gets(name_t);
			strcpy(mu[i].name,name_t); 
		}
	}
	printf("已点歌曲:\n");
	for(i=1; i<=x; i++)
	{
		printf("%s \n",mu[i].name);
	} 
	m++;
}

void add(void)     //添加收藏 
{
	char name_t[20];
	int i; 
	printf("请输入歌曲名:\n");
	getchar();
	gets(name_t);
	strcpy(mu[x+1].name,name_t); 
	x++;
	printf("已点歌曲:\n");
	for(i=1; i<=x; i++)
	{
		printf("%s \n",mu[i].name);
	} 
}

void top(void)          //歌曲置顶 
{
	music t;        //定义一个结构体类型的临时变量 
	int i=0,j=1;
	char name_t[20];
	printf("请输入您想把哪首歌置顶:");
	getchar();
	gets(name_t);
	x++; 
	for(i=1; i<=x; i++)
	{
		if(strcmp(mu[i].name,name_t)==0)    //如果相等则返回0 
		{
			t = mu[i]; 
			for(j=i-1; j>=0; j--)
			{
				mu[j+1] = mu[j]; 
			}
			mu[0] = t;
			break;
		}
	}  
	printf("%s置顶后,歌曲顺序为:\n",name_t);
	for(i=0; i<=x; i++)
	{
		printf("%s \n",mu[i].name);
	} 
} 

void print(void)
{
	int i;
	for(i=0; i<=x; i++)
	{
		printf("%s \n",mu[i].name);
	} 
}

int main(void)
{
	int t;
	char ch;
	do
	{ 
		printf("\t1.点播歌曲");
		printf("\t2.继续收藏歌曲\n");
		printf("\t3.置顶歌曲");
		printf("\t4.显示已点歌曲\n");
	lo:
		printf("请选择1~4:"); 
		scanf("%d",&t);
		if(t>=1 && t<=4)
		{
			switch(t)
			{
				case 1:
					order();
					break;
				case 2:
					add();
					break;
				case 3:
					top();
					break;
				case 4:
					print();
					break;
				default : goto mm;
			}
		}
		else
		{
mm:
			printf("输入错误!\n");
			goto  lo;   //重新选择 
		}
		printf("继续?(y/n):");
		scanf(" %c",&ch);
    }while('y'==ch || 'Y'==ch);
    
	return 0; 
} 
