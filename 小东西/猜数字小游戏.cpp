/*
2015��6��14��15:24:04
������С��Ϸ
ͨ�����������棬һ�������֣�һ���¡������ֵ���Ҫ���һ��û���ظ����ֵ�4λ���������òµ���֪����
�µ��˾Ϳ��Կ�ʼ�¡�ÿ��һ�����֣������߾�Ҫ����������ָ�����A��B������Aǰ������ֱ�ʾλ����ȷ
�����ĸ�������Bǰ�����ֱ�ʾ������ȷ��λ�ò��Ե����ĸ�����
����ȷ��Ϊ 5234�����µ��˲� 5346������ 1A2B��������һ��5��λ�ö��ˣ�
��Ϊ1A����3��4���������ֶ��ˣ���λ��û�ԣ���˼�Ϊ 2B������������ 1A2B��
���Ųµ����ٸ��ݳ����ߵļ�A��B�����£�ֱ�����У��� 4A0B��Ϊֹ 
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

int judge(int b[])     //�ж��Ƿ��Լ��������ظ�
{
	int i,j,t=0;
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			if(i!=j && b[i]==b[j])   //�ж��Ƿ��Լ��������ظ� 
			{
				t=1;
			}
		}
	}
	return t;   //���ظ�,t=1 
} 

void creat(int d[4])   //����4λ��һ��������,������λ��Ϊ1
{
	int a[4],x;
	while(1)     //����4λ��һ��������,������λ��Ϊ1 
	{
		srand(time(0));
		a[0] = rand()%9+1;
		a[1] = rand()%9;
		a[2] = rand()%9;
		a[3] = rand()%9;
		x = judge(a);
		if(x==1)   //�����ظ�,��������������� 
		{
			x=0;
			continue;
		}
		else     //û���ظ�,������ѭ�� 
		  break;
    }
    for(int i=0; i<4; i++)
    {
    	d[i] = a[i];
	}
}

void play(int a[4])      //��Ϸ���� 
{
	int b[4],true1=0,tfalse=0,i,j,x,t=0;    //λ�ü����־���ȷ,������ȷλ�ô���
	while(1)
	{ 
	   while(1)    //�ж�����������Ƿ����ظ� 
	   {
		   printf("��������µ�����:\n"); 
		   scanf("%d",&x);
		   for(i=3; i>=0; i--)
		   {
		   	  b[i] = x%10;
		   	  x/=10;
		   } 
		   t = judge(b);
	       if(t==1)
	       {
	       	  printf("��������������ظ�Ŷ,����������!\n");
	       	  t=0;
	       	  continue; 
		   }
		   else
		   {
		   	  break;
		   }
	   }
	   for(i=0; i<4; i++)    //�ж���ͬλ���ж�����ͬ������ 
	   {
   	  	   if(a[i]==b[i])   
   	  	     true1++; 
	   }
	   for(i=0; i<4; i++)
	   {
	   	  for(j=0; j<4; j++)
	   	  {
	   	  	 if(i!=j && a[i]==b[j])   //�жϲ�ͬλ���ж�����ͬ������ 
	   	  	    tfalse++;
		  }
	   }
	   
	   printf("\n%dA%dB \n",true1,tfalse); 
	   if(true1==4)
	   {
	   	   printf("��ϲ,��Ӯ��!\n\n\n");
	   	   printf("���������?\n\n");
	   	   printf("\t 1.������һ�ֲ�����\n");
	   	   printf("\t 2.ֱ���˳�\n");
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
	   printf("���������?\n\n");
	   printf("\t 1.����������\n");
	   printf("\t 2.�������˵�\n");
	   printf("\t 3.ֱ���˳�\n"); 
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

void gotoxy(int x, int y) //��λ����y�еĵ�x��
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
	printf("1.��ʼ��Ϸ\n");
	gotoxy(20,11);
	printf("2.�˳�\n\n\n\n\n\n\n\n\n\n\n\n"); 
	while(1)
	{ 
		x = getch();
		if(x=='1')    //��֪Ϊ��Ҫ�ӵ�����,�ײⲻ�Ӿ�ʧ�� 
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
			printf("��������!");
		}
    }
	return 0; 
} 
