/*
2015��4��14��23:13:47
����ʯͷ�� 
*/
# include <stdio.h>
# include <time.h>
# include <stdlib.h>
 
int main(void)
{
	int a,b,i,j;
	char c; 
	do
	{
	printf("\n\t=========��ӭ�����˻���ս��ȭ����==========\n");  //�������� 
	printf("\t      1.ʯͷ\n");
	printf("\t      2.����\n"); 
	printf("\t      3.��\n"); 
	printf("��ѡ��(1~3):");
	scanf("%d",&i);
	if(i>=1 && i<=3)    //�ж��û�������Ƿ�Ϊ1~3 
	{
		switch(i)
		{
			case 1:
			   printf("��ѡ��ʯͷ\n");
			   break; 
			case 2:
			   printf("��ѡ�����\n"); 
			   break;
			case 3:
			   printf("��ѡ��\n");
			   break; 
		}
    }
	
	srand(time(0));
	j = 1+ rand()%2;   //����1��3�������
	 
	switch(j)
	{
		case 1:
		   printf("����ѡ��ʯͷ\n");
		   break; 
		case 2:
		   printf("����ѡ�����\n"); 
		   break;
		case 3:
		   printf("����ѡ��\n");
		   break; 
	}
	
	if(i==1 && j==1)   //���ʯͷ����� 
	  printf("ƽ��!\n"); 
	else if(i==1 && j==2) 
	  printf("��ϲ��!ʤ����!!!!\n");
	else if(i==1 && j==3)
	  printf("������...");
	  
	else if(i==2 && j==2)  //������������
	  printf("ƽ��!\n");
	else if(i==2 && j==3) 
	  printf("��ϲ��!ʤ����!!!!\n");
	else if(i==2 && j==1)
	  printf("������...");
	
	else if(i==3 && j==3)  //������������
	  printf("ƽ��!\n");
	else if(i==3 && j==1) 
	  printf("��ϲ��!ʤ����!!!!\n");
	else if(i==3 && j==2)
	  printf("������...");
	printf("���������(y or n)?");
	scanf(" %c",&c);  //���û������Ƿ���� 
    }while(c=='y' || c=='Y');   //�������y����Y��ô����ִ��do while{}��Ĵ��� 
	
	return 0; 
} 
