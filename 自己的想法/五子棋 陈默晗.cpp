
#include "Windows.h"
#include "stdio.h"
#define up 'w'
#define left 'a'
#define down 's'
#define right 'd'
#define lz 'p'
#define cls 'q'
 
struct stu  //����λ�ü�¼�ṹ��
{
    int x;
    int y;
}weizhi;
int player=1;
int Q[20][20]={0}; //���������Լ�¼�������
 
void gotoxy(int x, int y) //�������꺯�� 
{   
    COORD c;   
    c.X=2*x;   
    c.Y=y; 
    SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c); //�޸ĵ�ǰ����λ��
}
 
void drawqipan() //�������̼����ݳ�ʼ��
{
    int i,j;
    system("cls"); //�����Ļ
    for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
            Q[i][j]=0;
            printf("ʮ");
        }
        printf("\n");
    }
    weizhi.x=0;weizhi.y=0; //�������ݳ�ʼ��
    gotoxy(0,0);
}
 
void jilu() //��¼�������
{
    Q[weizhi.x][weizhi.y]=player+1;
    if(player)
    {
        player=0;  //��ұ任
        return;
    }
    player=1;
}
 
int cluozi(int x,int y) //�ɵ�������ʱ����
{
    weizhi.x=x;weizhi.y=y;
    gotoxy(weizhi.x,weizhi.y);
    if(Q[weizhi.x][weizhi.y]==0) //�жϵ�ǰλ���Ƿ��Ѿ�����
    {
        jilu();
        printf("��");
        gotoxy(weizhi.x,weizhi.y);
    }
}
 
void luozi() //�������
{
    if(Q[weizhi.x][weizhi.y]==0) //�жϵ�ǰλ���Ƿ��Ѿ�����
    {
        if(player)
        {
            jilu();
            printf("��"); 
        }
        else
        {
            jilu();
            printf("��");
        }
        gotoxy(weizhi.x,weizhi.y);
    }
}
 
int checkWin() //�����Ϸ�Ƿ�����Ӯ
{
int p;
    int r,c,rr,cc,count=0;
    p=player==0?2:1;
    for(c=0;c<20;c++)
    {
        for(r=0;r<20;r++)
        {
            if(Q[r][c]!=p)
                continue;
                        //�����
            rr=r;cc=c;  
            while(--cc>=0 &&Q[rr][cc]==p)count++;  cc=c;
            while(++cc<20 &&Q[rr][cc]==p)count++;  cc=c;
            if(count+1>=5)
                return p;
                        //�����
            count=0;
            while(--rr>=0 &&Q[rr][cc]==p)count++;  rr=r;
            while(++rr<20 &&Q[rr][cc]==p)count++;  rr=r;
            if(count+1>=5)
                return p;
                        //��鷴б��
            count=0;
            cc--;rr--;
            while((cc>=0||rr>=0) &&Q[rr][cc]==p){count++;cc--;rr--;}  rr=r;cc=c;
            cc++;rr++;
            while((cc<20||rr<20) &&Q[rr][cc]==p){count++;cc++;rr++;}  rr=r;cc=c;
            if(count+1>=5)
                return p;
            count=0;
                        //�����б��
            count=0;
            cc++;rr--;
            while((cc<20||rr>=0) &&Q[rr][cc]==p){count++;cc++;rr--;}  rr=r;cc=c;
            cc--;rr++;
            while((cc>=0||rr<20) &&Q[rr][cc]==p){count++;cc--;rr++;}  rr=r;cc=c;
            if(count+1>=5)
                return p;
            count=0;
        }
    }
    return 0;
}
 
void Keypress(char n) //���λ���ƶ�
{
    switch(n)
    {
    case up:if(weizhi.y<=0)weizhi.y=19;else weizhi.y--;gotoxy(weizhi.x,weizhi.y);break;
        //�����ƶ����
    case left:if(weizhi.x<=0)weizhi.x=19;else weizhi.x--;gotoxy(weizhi.x,weizhi.y);break;
        //�����ƶ����
    case right:if(weizhi.x>=19)weizhi.x=0;else weizhi.x++;gotoxy(weizhi.x,weizhi.y);break;
        //�����ƶ����
    case down:if(weizhi.y>=19)weizhi.y=0;else weizhi.y++;gotoxy(weizhi.x,weizhi.y);break;
        //�����ƶ����
    case lz:luozi();break;
        //��ʼ���Ӳ���
    case cls:drawqipan();break;
        //���¿�ʼ
    }
}
 
int main(void)
{
    char press;
    int winer=0;
    system("color 2f");
l:  drawqipan();
    press=getchar();
    while(1)
    {
        Keypress(press);
        if(press=='p')
        winer=checkWin();
        if(winer!=0)
            gotoxy(0,20);
        if(winer==2)
            printf("the side of �� wins\n");
        else if(winer==1)
            printf("the side of �� wins\n");
        else
        {
        //  if(player==0)
        //  {
        //      //cluozi(1,2);          //�˴������ɵ��Կ���
        //  }
            press=getchar();
            continue;
        }
        printf("do you want to play again?(y/n):");
p:      press=getchar();
        if(press=='n')
            break;
        else if(press=='y')
        {
            winer=0;
            goto l;
        }
        else
            goto p;
    }
    return 0; 
}
