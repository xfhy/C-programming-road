/*
2015��2��5��09:21:46
ѧ������ϵͳ__1
*/

# include <stdio.h>
# include <malloc.h>  //���䶯̬�ڴ���Ǹ�malloc���������� 
# include <Windows.h>

struct student
{
	int age;
	char name[100];   //������������Ϊ�����Ҫ�����ַ��� 
	float score;
};   //�ǵ÷ֺ� 

void input(struct student * p,int len)   //ѧ����Ϣ(����)������
{
	int i;
    
	for(i = 0;i < len;i++)
    {
		printf("�������%d��ѧ������Ϣ:\n",i+1); 
		
		printf("����������:");
		scanf("%s",p[i].name);       //name���ַ���,������%s 
		 
		printf("����������:");
		scanf("%d",&p[i].age); 
		 
		printf("���������:");
		scanf("%f",&p[i].score); 
	 
    }
}

void sort(struct student * p,int len)  //ѧ����������  �㷨:ð�� 
{
	int i,j;
	struct student t;     //���ỻ���ǽṹ��,�����������ʱ����Ҳ�����ǽṹ�� 
	for(i=0; i<len-1; i++)  //����i��ʾ���ж��ٴ�ð��,���len-1��,ÿ��ð�ݺ��ϴ�ð�ݵ�
	                      //����Ǹ���������,����С�� 
	{
		for(j=0; j<len-1-i; j++)   //������ÿ��ð�ݵĹ���,����֮ǰ�Ѿ�ð���ݵľͲ�����ð��,so  it is len-1-i
		{
			if(p[j].score < p[j+1].score)  //������������ 
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t; 
			}
		}
	}
}

void output(struct student * p,int len)   //���ѧ����Ϣ 
{
    int i;
    for(i = 0;i < len;i++)
    {
		printf("\n\n��%d��ѧ������Ϣ����:\n",i+1); 
		printf("����:%s\n",p[i].name);
		printf("����:%d\n",p[i].age);	 
		printf("����:%f\n",p[i].score); 
    }	
}

int main(void)
{
	system("title ��纮������ѧ������ϵͳ");
	int i,j,m;
	int len;
	struct student * p;
	char ch;
	
	printf("\t\n\t***************��ӭ������纮������ѧ������ϵͳ************\n\n");
	printf("\n\t1.����ѧ����Ϣ\n");
	printf("\n\t2.���ݷ�������\n");
	printf("\n\t3.���ѧ����Ϣ\n");
	printf("\t\n\t***************�������Ĵ�ʦ����ѧ������ҵ��*************\n\n"); 
	
	printf("������ѧ������:\n");   //�������� 
	printf("len = ");
	scanf("%d",&len);
	p = (struct student *)malloc( len * sizeof(struct student));   //�������鳤�� 
	
	do
	{ 
		printf("\n��ѡ��(1~3)");
		scanf("%d",&m);
		if(m >= 1 && m <= 3) 
		{
		
			switch(m)
			{ 
				case 1: input(p,len);  //����ѧ����Ϣ 
					break;
				case 2: sort(p,len);  //���� 
				    break;
				case 3: output(p,len);  //��� 
				    break;
				case 0: exit(0);
		    } 
		}
	printf("���������?(y/n)");
	scanf(" %c",&ch); 
	}while('y'==ch);
	 
	return 0;
} 
