/*
2015��5��16��13:32:04
ktv���ϵͳ 
*/
# include <stdio.h>
# include <string.h> 

struct music
{
	char name[20];
}mu[100]; 

typedef struct music music;
int x=0,m=0;
 
void order(void)     //��� 
{
	int i,l=0,t;
	char name_t[20];   //������ʱ������ 
	t = x;
	printf("��������Ҫ�㲥�ĸ�����Ŀ:");
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
	printf("���������������:\n");
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
	printf("�ѵ����:\n");
	for(i=1; i<=x; i++)
	{
		printf("%s \n",mu[i].name);
	} 
	m++;
}

void add(void)     //����ղ� 
{
	char name_t[20];
	int i; 
	printf("�����������:\n");
	getchar();
	gets(name_t);
	strcpy(mu[x+1].name,name_t); 
	x++;
	printf("�ѵ����:\n");
	for(i=1; i<=x; i++)
	{
		printf("%s \n",mu[i].name);
	} 
}

void top(void)          //�����ö� 
{
	music t;        //����һ���ṹ�����͵���ʱ���� 
	int i=0,j=1;
	char name_t[20];
	printf("��������������׸��ö�:");
	getchar();
	gets(name_t);
	x++; 
	for(i=1; i<=x; i++)
	{
		if(strcmp(mu[i].name,name_t)==0)    //�������򷵻�0 
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
	printf("%s�ö���,����˳��Ϊ:\n",name_t);
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
		printf("\t1.�㲥����");
		printf("\t2.�����ղظ���\n");
		printf("\t3.�ö�����");
		printf("\t4.��ʾ�ѵ����\n");
	lo:
		printf("��ѡ��1~4:"); 
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
			printf("�������!\n");
			goto  lo;   //����ѡ�� 
		}
		printf("����?(y/n):");
		scanf(" %c",&ch);
    }while('y'==ch || 'Y'==ch);
    
	return 0; 
} 
