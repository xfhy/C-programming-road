#include<stdio.h>
#define N 8
#define M 8
void init(char flag[N][M])
{
int i,j;
for( i=0;i<N;i++)
for(j=0;j<M;j++)
{ flag[i][j]='0';
printf("%c",flag[i][j]);
if(j==N-1)
printf("\n");
}
}
void draw(char flag[N][M])
{ 
int i,j;
for(i=0;i<N;i++)
for( j=0;j<M;j++)
{ printf("%c",flag[i][j]);
if(j==N-1)
printf("\n");
} 
}
void ciin(char flag[N][M],char t,char v)
{
int i,j;
printf("请 %c 走\n",t);
printf(" 请输入两个数字（x,y），中间以逗号隔开 #iao *u %d de shu zi:",N);
scanf("%d,%d",&i,&j);
while(i>=N||i<1||j>=M||j<1||flag[i][j]=='*'||flag[i][j]=='#')
{
if(i>=N||i<1||j>=M||j<1)
{
printf("输入错误，请重新输入\n");
printf("qin shu ru liang ge #iao *u %d de shu zi:",N);
scanf("%d,%d",&i,&j);
}
else
{
printf("ci chu *ou qi zi,qin chong #in shu ru.");
printf("qin shu ru liang ge #iao *u %d de shu zi:",N);
scanf("%d,%d",&i,&j);
}
}
flag[i][j]=v;
draw(flag);
}
void test(char flag[][M],char t)
{
int i,j;
for(i=1;i<N;i++)
{ for(j=1;j<M;j++)
if((flag[i][j]=='*'&&flag[i][j+1]=='*'&&flag[i][j+2]=='*'&&flag[i][j+3]=='*'&&flag[i][j+4]=='*')||(flag[i][j]=='#'&&flag[i][j+1]=='#'&&flag[i][j+2]=='#'&&flag[i][j+3]=='#'&&flag[i][j+4]=='#')||(flag[i][j]=='*'&&flag[i+1][j]=='*'&&flag[i+2][j ]=='*'&&flag[i+3][j]=='*'&&flag[i+4][j]=='*')||(flag[i][j]=='#'&&flag[i+1][j]=='#'&&flag[i+2][j]=='#'&&flag[i+3][j]=='#'&&flag[i+4][j]=='#')||(flag[i][j]=='*'&&flag[i+1][j+1]=='*'&&flag[i+2][j+2]=='*'&&flag[i+3][j+3]=='*'&&flag[i+4][j+4]=='*')||(flag[i][j]=='#'&&flag[i+1][j+1]=='#'&&flag[i+2][j+2]=='#'&&flag[i+3][j+3]=='#'&&flag[i+4][j+4]=='#')||(flag[i][j]=='*'&&flag[i+1][j-1]=='*'&&flag[i+2][j-2]=='*'&&flag[i+3][j-3]=='*'&&flag[i+4][j-4]=='*')||(flag[i][j]=='#'&&flag[i+1][j-1]=='#'&&flag[i+2][j-2]=='#'&&flag[i+3][j-3]=='#'&&flag[i+4][j-4]=='#'))
printf("%c Win",t);
}
}
int main()
{
int i;
char flag[N][M];
init(flag);
for(i=0;i<(N-1)*(M-1);i++)
{
ciin(flag,'A','*');
test(flag,'A');
ciin(flag,'B','#');
test(flag,'B');
}
}
