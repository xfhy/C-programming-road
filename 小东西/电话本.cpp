/*
2015��5��19��13:26:36
   �绰�� 
�����ϵ����Ϣ
ɾ����ϵ����Ϣ
�༭��ϵ����Ϣ
��ѯ��ϵ����Ϣ
��ϵ����Ϣ����
��,�·�ҳ 

ģ��     
*/
# include <stdio.h>
# include <string.h>
# include <conio.h>
# include <Windows.h>

struct people
{
	char name[10];          //���� 
	char telp[15];          //�绰 
	char qq[15];            //QQ 
	char workp[15];          //������ַ 
}name[500];

typedef struct people tel;
int total=0,paget=1,pages=1,len=0,x=1;
void pwd(void);
void menu(void);
void help(void);
void add(void);
void del(void);
void edit(void);
void search(void);
void sort(void);
void print(void);

void pwd(void)         //���뺯�� 
{
	printf("\tWelcome to this telphone system!\n");
	char key[10] = "1",key1[10];    //��ȷ��,�������
	int i=1,t;
	for(i=1; i<=3; i++)
	{
		printf("\n����������:");
		scanf("%s",key1);
		if(strcmp(key,key1)!=0)
		{
			system("cls"); 
			printf("\t\tsorry ,your password is wrong!\n");
			printf("\t\tDon't worry. Please input again:");
		}
		else if(strcmp(key,key1)==0) 
		{
		   printf("����鿴������?");
		   printf("\n1.�鿴����\n2.ֱ�ӽ���\n");
		   printf("��ѡ��(1/2):"); 
		   scanf("%d",&t);
		   if(t==1)
		   {
		      help();
		      break;
		   }
		   else if(t==2)
		   {
		      menu(); 
		      break;
		   }
		   else
		   {
		     exit(0);
		     printf("û�����ѡ��,886!");
		    }
	     }
	}
	if(i==4)
	{
		system("cls"); 
		printf("\t\t�����������3��,�ݰ�!"); 
	}
} 

void help(void)     //���� 
{
		printf("\t��ϵͳʹ��˵��:����Ӧ�Ĺ��ܵ�����ĸ������ʵ����Ӧ�Ĺ���(eg:��Ҫ�����ϵ��add,�򰴼���a), ");
		printf("����������o\n");
		printf("ȥ���˵�?(y/n)\n");
		char c; 
		scanf(" %c",&c);
		if(c=='y' || c=='Y')
		  menu();
		else
		  exit(0);
}


void menu(void)       //��ʾ�˵� 
{
ii: 
	system("cls");
	int i,j;
	char t,c; 
	printf("Add      Delete      Edit      Search      Sort      Help\n");
	print();
	while(!kbhit());
	t = getch();
		//kbhit�����������Ƿ��а���,���򷵻�-1,û���򷵻�0. �����֪��������ʲô��,
		//Ӧ����getch()����ȡ(��ֵ�Ѿ����뻺����,getch�ӻ�������ȡ�ö����ٴӼ�������)
	switch(t)
	{
		case 'a':
			add();                //�����ϵ�� 
			break;
		case 'd':
			del();                //ɾ����ϵ�� 
			break;
		case 'e':
		    edit();              //�༭ 
		    break;
		case 's':
			search();            //���� 
			break;
		case 'o':  
			sort();              //���� 
			break;
		case 'h':
			help();              //���� 
			break;
		case 27:
		    printf("�˳�!\n");
			break;
		default: printf("��,��������!����������?(y/n)\n");
				scanf(" %c",&c);
				if(c=='y' || c=='Y')
				  goto ii;
	} 
}

void add(void)
{
	printf("\t\t--------��ӭ������Ӳ˵�O(��_��)O-------\n");
	int t;
so:
	len++;
	printf("�������µ���ϵ������:");
	scanf("%s",name[len].name);
	printf("���������ϵ�˺���:");
	scanf("%s",name[len].telp);
	printf("���������ϵ��QQ:");
	scanf("%s",name[len].qq);
	printf("���������ϵ�˹�����ַ:");
	scanf("%s",name[len].workp);
	//len++; 
	printf("��ǰͨѶ¼��ϵ���ܸ���:%d\n",len);
	if(len>=100)
	   printf("Ӵ,С������Ե������!\n"); 
	printf("������������ϵ����?\n");
	printf("1.����\n2.�������˵�\n");
	printf("��ѡ��(1~2):");
	scanf("%d",&t); 
	switch(t)
	{
		case 1:
			goto so;
			break;
		case 2:
			menu();
			break;
		default: exit(0);
	}
}

void del(void)
{
	printf("\t\t--------��ӭ����ɾ���˵�O(��_��)O-------\n");
	char namet[15],c; 
	int i,k,t=0;
so: 
	printf("��������Ҫɾ������ϵ������:");
	scanf("%s",namet);
	for(i=1; i<=len; i++)
	{
		if(strcmp(namet,name[i].name)==0)    //���Ҵ���ϵ�� 
		{
			t=i;
			break; 
		}
	}
	if(t!=0)
	{
		printf("����,�ҵ�������!\nΪʲôҪ����(��)ɾ����?���鲻��,�������������(��)�Ѿ�������?\n");
		printf("�ٸ��������,�Ƿ�Ҫɾ��(��)?(y/n)\n");
		scanf(" %c",&c);
		if(c=='y' || c=='Y')
		{
			for(int t=i; t<len; t++)
			{
				name[t] = name[t+1];      //ֱ�Ӹ��� 
			}
			len--;              //��������
		}
		printf("����ϵ���Ѿ�ɾ��!\n");
	}
	else
	{
		printf("�Ǻ�,Ȼ����û���ҵ�����Ҫ���ҵ���!\n");
	}
	printf("�������ɾ����ϵ����?\n");
	printf("1.����\n2.�������˵�\n");
	printf("��ѡ��(1~2):");
	scanf("%d",&k); 
	switch(k)
	{
		case 1:
			goto so;
			break;
		case 2:
			menu();
			break;
		default: exit(0);
	}
} 

void edit(void)
{
	printf("\t\t--------��ӭ�����༭�˵�O(��_��)O-------\n");
	char namet[15]; 
	int i,k,t=0;
ss: 
	printf("��������Ҫ�༭����ϵ������:");
	scanf("%s",namet);
	for(i=1; i<=len; i++)
	{
		if(strcmp(namet,name[i].name)==0)    //���Ҵ���ϵ�� 
		{
		     t=i;
		     printf("�ҵ��������!\n");
		     break;
		}
	}
	if(t!=0)
	{
		printf("������༭����ϵ��:\n");
		printf("���������ϵ������:");
		scanf("%s",name[t].name);
		printf("���������ϵ�˺���:");
		scanf("%s",name[t].telp);
		printf("���������ϵ��QQ:");
		scanf("%s",name[t].qq);
		printf("���������ϵ�˹�����ַ:");
		scanf("%s",name[t].workp);
		printf("�ٺ�,����ϵ�˱༭���!\n"); 
	}
	else
	{
		printf("�Ǻ�,Ȼ����û���ҵ�����Ҫ���ҵ���!\n");
	}
	printf("��������༭������ϵ����?\n");
	printf("1.����\n2.�������˵�\n");
	printf("��ѡ��(1~2):");
	scanf("%d",&k); 
	switch(k)
	{
		case 1:
			goto ss;
			break;
		case 2:
			menu();
			break;
		default: exit(0);
	}
} 

void search(void)
{
	char namet[15];
	printf("\t\t--------��ӭ���������˵�O(��_��)O-------\n");
ss:
	printf("��������Ҫ���ҵ���ϵ������:");
	scanf("%s",namet);
	int i,t,k;
	for(i=1; i<=len; i++)
	{
		if(strcmp(namet,name[i].name)==0)    //���Ҵ���ϵ�� 
		{
		     t=i;
		     printf("�ҵ��������!\n");
		     break;
		}
	}
	if(t!=0)
	{
		printf("����ϵ�˵���Ϣ����:\n");
		printf("Name         Telphone               QQ                Workplace\n\n");
		printf("%s           %s           %s           %s\n",name[t].name,name[t].telp,name[t].qq,name[t].workp); 
	}
	else
	{
		printf("�Ǻ�,��û���ҵ����������ϵ��\n");
	}
	printf("�����������������ϵ����?\n");
	printf("1.����\n2.�������˵�\n");
	printf("��ѡ��(1~2):");
	scanf("%d",&k); 
	switch(k)
	{
		case 1:
			goto ss;
			break;
		case 2:
			menu();
			break;
		default: exit(0);
	}
} 

void sort(void)
{
	int l,i,j,k;
	tel t;
	printf("\t\t--------��ӭ��������˵�O(��_��)O-------\n");
	for(i=1; i<=len; i++)    //ð������ 
	{
		for(j=1; j<=len; j++)
		{
			if(strcmp(name[i].name,name[j].name)<0)   //��a~z����       �����ṹ�� 
			{
				t = name[i];
				name[i] = name[j];
				name[j] = t;
			}
		}
	}
	printf("������������ϵ��\n");
	printf("��...�Ҳ�������������Զ�����....��������\n");
	printf("������1,�������˵�,лл!\n");
	while(!kbhit());
	l=getch();
	if(l=='1') 
	  menu();
	else
	{
	  printf("��ô,�����˳�,��ô,������������\n");
	  sort();
    }
} 

void print(void)      //������� 
{
	if(len>0)
	{
		if(len%2==0)
		  pages = len/2;
		else
		  pages  = len/2+1;
	}
	printf("total:%d           page:%d/%d\n\n\n",len,paget,pages);       //��ϵ�˸���,��ǰҳ,��ҳ�� 
	printf("Name         Telphone               QQ                Workplace\n\n");
	for(int i=1; i<=len; i++)
	{
		printf("%s           %s           %s           %s\n",name[i].name,name[i].telp,name[i].qq,name[i].workp); 
	}
}

int main(void)
{
	pwd();
	
	return 0;
} 
