/*
2015��6��7��21:20:07
�ͼ�-̰����    gotoxy����gameover   ���ж����� 
*/
# include <stdio.h>
# include <string.h>
# include <Windows.h> 
# include <conio.h>
# include <time.h>
# include <unistd.h>
# include <stdlib.h> 

void printma(char gm[20][20],int x[],int y[],int len,int fcount,int fx,int fy);       //��ͼ 
void play(char s,char gm[20][20],int x[],int y[],int *len,int *fcount,int *fx,int *fy,int *score);   //�ƶ� 
void fruit(int *fcount,int *fx,int *fy,int x[],int y[],int len);    //ˮ�� 
void move1(char s,char gm[20][20],int x[],int y[],int *len,int *fcount,int *fx,int *fy,int *score);
void gotoxy(int x, int y);
int main(void);

int game(int len,int x[],int y[],int score)   //�ж���Ϸ�Ƿ���� 
{
	int gameover=0;      //�Ƿ���� 
	for(int i=1; i<len; i++)   //�ӵڶ�����ʼ,��Ϊ��ͷ�����Լ���ײ 
   {
   	  if( (x[0]==x[i] && y[0]==y[i]) || x[0]==0 || x[0]==19 || y[0]==0 || y[0]==19)   //�����ͷ�������ظ�,��gameover 
	  {
	  	 gameover=1;
	  	 gotoxy(35,10);
	  	 printf("��ǰ����:%d\n",score);
	  	 gotoxy(35,11);
	  	 printf("GAVE OVER!\n"); 
	  	 break; 
	  } 
   } 
   return gameover;     //�����Ƿ������Ϸ 
}

void printma(char gm[20][20],int x[],int y[],int len,int fcount,int fx,int fy)       //����ͼ 
{
	int i,j,k,snake=0;
	for(i=0; i<20; i++)   //20*20�ľ��� 
	{
		for(j=0; j<20; j++)
		{
			snake=0;       
			for(k=0; k<len; k++)    //��������ߵ�ÿһ������бȽ�,�����ߵ�ÿһ��λ��,ֻ��鿴len�� 
			{
				if(i==x[k] && j==y[k])   //��ǰ�е����ߵ��б��   ����Ҫ��������ͨ�ĵ�����һ�� 
				{
					if(k==0)      //��ͷ 
					  snake=1;
					else 
					  snake=2;    //���� 
				    break;       //��Ȼ�ҵ����ߵ������һ����,�����Ѿ�ʶ���������ô���˳�ѭ�� 
				} 
			}
			if(snake==1)      //��ͷ 
				printf("��");
			else if(snake==2) //���� 
				printf("��");
			else if(fcount && i==fx && j==fy)   //����ˮ��,ˮ��������,������ 
			    printf("��");
			else if(i==0 || j==0 || i==19 || j==19)     //Χǽ 
			    printf("��"); 
			else
			  printf("  ");
		}
		printf("\n");
	}
} 

void play(char s,char gm[20][20],int x[],int y[],int *len,int *fcount,int *fx,int *fy,int *score)
{
	int move=0;     //�ж��Ƿ��ƶ� 
	int cx[400];   //���ݵĺ����� 
	int cy[400];     //���ݵ������� 
	memcpy(cx,x,sizeof(int)* (*len)); 
	//��Դx��ָ���ڴ��ַ����ʼλ�ÿ�ʼ����(*len)���ֽڵ�Ŀ��cx��ָ���ڴ��ַ����ʼλ����
	memcpy(cy,y,sizeof(int)* (*len)); 
mm:
	if(s=='w' || s=='a' || s=='s' || s=='d')   //��    ��ͷ�ƶ� 
	{
		move=1;
	} 
	while(move==1)
	{
		sleep(0.2);
		  move1(s,gm,x,y,len,fcount,fx,fy,score); 
		  if(kbhit)
		  {
		     s = getch();
		     goto mm;
	      }
    }
}

void move1(char s,char gm[20][20],int x[],int y[],int *len,int *fcount,int *fx,int *fy,int *score)
{
	int cx[400];   //���ݵĺ����� 
	int cy[400];     //���ݵ������� 
	memcpy(cx,x,sizeof(int)* (*len)); 
	//��Դx��ָ���ڴ��ַ����ʼλ�ÿ�ʼ����(*len)���ֽڵ�Ŀ��cx��ָ���ڴ��ַ����ʼλ����
	memcpy(cy,y,sizeof(int)* (*len)); 
	if(s=='w')   //��    ��ͷ�ƶ� 
	{
		x[0] = x[0]-1; 
	} 
	else if(s=='a')   //�� 
	{
		y[0] = y[0]-1; 
	} 
	else if(s=='s')   //�� 
	{
		x[0] = x[0]+1; 
	} 
	else if(s=='d')  //�� 
	{
		y[0] = y[0]+1;
	} 
	if((*fcount) && x[0]==*fx && y[0]==*fy)    //���й���,���ҹ��Ӻ����������ͷ����һ�������� 
		{
			memcpy(x+1,cx,sizeof(int)* (*len));   //���ߵ�ȫ��������x����һ��,�൱��������һ�� 
			memcpy(y+1,cy,sizeof(int)* (*len));
			(*fcount)--;
			(*fx)=0;   //��ϰ��,���һ��,û����,��������ֵ 
			(*fy)=0;
			(*len)++;   //���ȼ�һ 
			(*score)++;    //������1 
			fruit(fcount,fx,fy,x,y,(*len));  //����ˮ�� 
		}
		else    //���û�Ե�ˮ��,�����߻����ƶ���, 
		{
				for(int i=1; i<=(*len); i++)   //��������ͷ��λ���ƶ� 
			    {
				   x[i] = cx[i-1];
				   y[i] = cy[i-1];
			    } 
	    }
		system("cls");
		int gameover,t;
		if( (gameover = game((*len),x,y,(*score))) ==1) 
		{
		    printf("�������Ϸ��?\n");
		    printf("\t 1.���¿�ʼ\n");
		    printf("\t 2.�˳�\n");
		    scanf("%d",&t);
		    if(t==1)
		    {
		       system("cls");	
		       main();
		    }
		    else
		      exit(0);
		}
		printma(gm,x,y,(*len),*fcount,*fx,*fy);    //������� 
}

void fruit(int *fcount,int *fx,int *fy,int x[],int y[],int len)     //����ˮ�� 
{
	srand(time(0));
	int have=0,tfx,tfy,i;
	while(1)
	{
		tfx = 1+rand()%18;
		tfy = 1+rand()%18;
		for(i=0; i<len; i++)    
		{
			if(tfx==x[i] && tfy==y[i] && tfx!=0 && tfy!=0 && tfx!=19 && tfy!=19)    //�ж����ɵ������������ �Ƿ��������ظ� 
			{
				have=1;
				break;
			}
		}
		if(have==1)    //����������ظ�,���������� 
		{
			continue;
		}
		else         //�����˹��� 
		{
			(*fcount)++;     //��������1 
			*fx = tfx; 
			*fy = tfy;
			break;
		}
    }
}

void gotoxy(int x, int y) //��λ����y�еĵ�x��,��Ҫͷ�ļ�Windows.h 
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
		char gm[20][20];     //20*20�ľ��� 
		int  x[400]={0},y[400]={0};        //�ߵĺ������� 
		int len=0,fx,fy,fcount=0,score=0;
		char c;
		x[len]=9;           //��ʼλ�� 
		y[len]=9;
		len++;
		x[len]=9;
		y[len]=8;
		len++;
		x[len]=9;
		y[len]=7;
		len++;
		
		fruit(&fcount,&fx,&fy,x,y,len);
		printma(gm,x,y,len,fcount,fx,fy); 
		while(1)
		{
		   printf("��ǰ����%d  wasd,��������\n",score);
		   c = getch();
		   play(c,gm,x,y,&len,&fcount,&fx,&fy,&score);
		   
		   int gameover=game(len,x,y,score);
		   //�ж���Ϸ����
		   if(gameover==1)
		      break;
	    }
	    printf("�������Ϸ��?(y/n):");
	    scanf(" %c",&ch);
	    system("cls");
	}while(ch=='y' || ch=='Y');
	
	return 0; 
} 
