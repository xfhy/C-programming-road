/*
2015��6��30��17:24:38
lol  �絶��װ 
���ȣ��Ʋ棩��1175��+̰��֮�У�750�����ϳɼ۸�600
����1175 = ����450 + ��צ425      �ϳɼ۸�:300 
̰��750 =  ��צ425                 �ϳɼ۸�:325 
*/
# include <stdio.h>
# include <Windows.h>
# include <stdlib.h>

int a[6] = {2500,1175,750,450,425,425};    
          //�絶 ���� ̰�� ���� ��צ 
int money=4500;

void gotoxy(int a,int b);

void gotoxy(int a, int b)   //������� 
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

void map(void)      //����ͼ 
{
	gotoxy(20,5); 
	printf("1.�絶 %d",a[0]);
	gotoxy(9,9);
	printf("2.���� %d  ",a[1]);
	gotoxy(29,9);
	printf("3.̰�� %d",a[2]); 
	gotoxy(3,13);
	printf("4.���� %d  ",a[3]); 
	gotoxy(14,13);
	printf("5.��צ %d  ",a[4]);
	gotoxy(29,13);
	printf("6.��צ %d  ",a[5]); 
} 

int judge(int money,int x)     //�ж��Լ���Ǯ�Ƿ�����Ӧ��װ�� 
{
	if(money>=x)
	  return 1;
	else
	  return 0;
} 

void pay(int money)     //��װ�� 
{
	int x;
	printf("\n\n\n\n��������Ҫ�����װ�����:");
	scanf("%d",&x);
	if(x>=1 && x<=6)
	{
		switch(x)
		{
			case 1:      //1�絶 
			   if(judge(money,a[0]) && a[0]!=0)
			   {
			   	   printf("\n����ɹ�!\n");
			   	   printf("\n���ѻ�õ絶!���Գ�ȥ������!\n"); 
			   	   a[0] = 0; 
			   	   exit(0); 
			   }
			   else if(a[0]==0) 
			   {
			      printf("\n�Ѿ������,����...\n");
			      Sleep(700);
			   }
			   else
			   {
			   	  printf("\nmoney����Ŷ!\n");
			   	  Sleep(700);
			   }
			   break;
			case 2:      //2���� 
			   if(a[0]==0)
			   {
			   	  printf("\n���˵絶��,�ո�..�����������\n");
			   	  Sleep(700);
			   	  return;
			   } 
			   if(judge(money,a[1]) && a[1]!=0)
			   {
			   	   printf("����ɹ�!");
			   	   Sleep(700);
			   	   a[1] = 0; 
			   	   if(a[3]!=0 && a[4]!=0) //�ж϶�������צ�Ƿ��ѱ����  ������û�� 
			   	   {
			   	      a[0]-=1175;
			   	   }
			   	   else if(a[3]==0 && a[4]!=0)  //���˶��� û����צ 
			   	   {
			   	      a[0]-=450;
			   	   }
			   	   else if(a[3]!=0 && a[4]==0)  //û����� ������צ 
			   	   {
			   	      a[0]-=425;
			   	   }
			   	   else if(a[3]==0 && a[4]==0)  //���������� 
			   	   {
			   	      a[0]-=300;
			   	   }
			   } 
			   else if(a[1]==0) 
			   {
			      printf("\n�Ѿ������,����...\n");
			      Sleep(700);
			   }
			   else
			   {
			   	  printf("\nmoney����Ŷ!\n");
			   	  Sleep(700);
			   }
			   break;
			case 3:      //3̰�� 
			   if(a[0]==0)
			   {
			   	  printf("\n���˵絶��,�ո�..��������̰��\n");
			   	  Sleep(700);
			   	  return;
			   } 
			   if(judge(money,a[2]) && a[2]!=0)
			   {
			   	   printf("����ɹ�!");
			   	   Sleep(700);
			   	   a[2] = 0; 
			   	   if(a[5]==0)        //�ж���צ�Ƿ��ѱ���� 
			   	      a[0]-=325;
			   	   else if(a[5]!=0)
			   	      a[0]-=750;
			   } 
			   else if(a[2]==0) 
			   {
			      printf("\n�Ѿ������,����...\n");
			      Sleep(700);
			   }
			   else
			   {
			   	  printf("\nmoney����Ŷ!\n");
			   	  Sleep(700);
			   }
			   break;
			case 4:       //4���� 
			   if(a[1]==0)
			   {
			   	  printf("\n���˿��ȵ�,�ո�..�����������\n");
			   	  Sleep(700);
			   	  return;
			   } 
			   if(judge(money,a[3]) && a[3]!=0)
			   {
			   	   printf("����ɹ�!");
			   	   Sleep(700);
			   	   a[3] = 0; 
			   	   a[0]-=450;
				   a[1]-=450; 
			   } 
			   else if(a[3]==0) 
			   {
			      printf("\n�Ѿ������,����...\n");
			      Sleep(700);
			   }
			   else
			   {
			   	  printf("\nmoney����Ŷ!\n");
			   	  Sleep(700);
			   }
			   break;
			case 5:       //5��צ 
			    if(a[1]==0)
			   {
			   	  printf("\n���˿��ȵ�,�ո�..����������צ\n");
			   	  Sleep(700);
			   	  return;
			   } 
				if(judge(money,a[4]) && a[4]!=0)
			   {
			   	   printf("����ɹ�!");
			   	   Sleep(700);
			   	   a[4] = 0; 
			   	   a[0]-=425;
				   a[1]-=425; 
			   } 
			   else if(a[4]==0) 
			   {
			      printf("\n�Ѿ������,����...\n");
			      Sleep(700);
			   }
			   else
			   {
			   	  printf("\nmoney����Ŷ!\n");
			   	  Sleep(700);
			   }
			   break;
			case 6:       //6��צ 
			   if(a[2]==0)
			   {
			   	  printf("\n����̰����,�ո�..����������צ\n");
			   	  Sleep(700);
			   	  return;
			   } 
			   if(judge(money,a[5]) && a[5]!=0)
			   {
			   	   printf("����ɹ�!");
			   	   Sleep(700);
			   	   a[5] = 0; 
			   	   a[0]-=425;
			   	   a[2]-=425;
			   } 
			   else if(a[5]==0) 
			   {
			      printf("\n�Ѿ������,����...\n");
			      Sleep(700);
			   }
			   else
			   {
			   	  printf("\nmoney����Ŷ!\n");
			   	  Sleep(700);
			   }
			   break;
			default:
			  printf("����"); 
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
	   printf("\n\n\n\n\n\n������װ(y/n)");
	   scanf(" %c",&c);
    }while(c=='Y' || c=='y');
    
	
	return 0; 
} 
