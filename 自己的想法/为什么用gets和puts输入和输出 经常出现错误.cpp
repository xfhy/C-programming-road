/*
2015��3��7��23:11:41
C���Խṹ��Ϊʲô��gets��puts�������� �������ִ���
   ��Ϊ��û����getchar()Ҳ���ǳ���س���
   
��������������ڣ�gets�����Իس���Ϊ�ָ���������������ʱ����һ���س���
ϵͳ�ͽ�����ظ���gets()����gets()���Իس���Ϊ�ָ�������������س���û�ж����gets()�У�
�������ջ�ֱ�������
*/
#include <stdio.h> 
#include <string.h> 
struct kind 
{ 
  int year; 
  int month; 
  int day; 
  char menber[20]; 
}all; 
int main(void) 
{ 
	printf("���������\n"); 
	scanf("%d",&all.year ); 
	
	printf("�������·�\n"); 
	scanf("%d",&all.month); 
	
	printf("��������\n"); 
	scanf("%d",&all.day); 
	
	getchar();        ///////
	
	printf("�������Ա\n"); 
	gets(all.menber); 
	printf("%d��%d��%d�� ��Ա%s\n",all.year ,all.month ,all.day ,all.menber );
	
	 
}

   
