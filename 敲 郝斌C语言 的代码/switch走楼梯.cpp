/*
2015��1��27��13:11:27
��������ȥ��¥�㣬���ɽ��룡
������������¥�� 
*/
#include<stdio.h>
int main(void)
{
	int val;
	char ch;
	do
	{ 
		printf("��������������¥�㣺");
		scanf("%d",&val);
	
   		switch(val)//���������������һ������ִ���������һ�� ������1����ִ�������case 1��
		            //�������û�У���ִ��default 
   			  {
   				case 1:
   					printf("1�㿪��\n");
   					break;
   				case 2:
   					printf("2�㿪��\n");
   					break;
   				case 3:
   					printf("3�㿪��\n");
   					break;
   				default:
   					printf("��û�ǵ���һ�㣡\n");
   					break;
   		
   			  }
   		printf("�������ȥ���¥��ô(Y/N):");
   		scanf(" %c",&ch);//%cǰ�����ӿո�     ��������ַ�������%c 
	}while('y' == ch||'Y' == ch);//�м��ǻ��� 
   

   return 0;
}

