/*
2015��2��10��15:10:57
ѧ������ϵͳ_2 
*/
# include <stdio.h>
# include <malloc.h>

struct student
{
	int age;
	char name[100];
	float score;
};

void input(struct student * p,int len)   //����ѧ����Ϣ 
{
	int i;
	for(i=0; i<len; i++)
	{
		printf("\n\t�������%d��ѧ��������  ",i+1);
		scanf("%d",&p[i].age);
		printf("\n\t�������%d��ѧ��������  ",i+1);
		scanf("%s",p[i].name);
		printf("\n\t�������%d��ѧ���ķ���  ",i+1);
		scanf("%f",&p[i].score);
	}
}

void foam(struct student * p,int len)   //���� 
{
	int i,j;
	struct student t;    //����Ҫ�������ǽṹ��,������ʱ����ҲӦ���ǽṹ�� 
	for(i=0; i<len-1; i++)   //��ཻ������(len) - 1�� 
	{
		for(j=0; j<len-1; j++)
		{
			if(p[j].score<p[j+1].score)    //ifĬ��ֻ�ܿ���һ�����   ,�����ǱȽϷ���,�����ߵ���ǰ�� 
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
	for(i=0; i<len; i++)
	{
		printf("\n��%d��ѧ����Ϣ����:\n",i+1);
		printf("\n\t����:%d,����:%s,����:%f",p[i].age,p[i].name,p[i].score);
	} 
}

int main(void)
{
	int len;
	struct student st;
	printf("������ѧ������:");
	printf("len = "); 
	scanf("%d",&len);
	struct student * p;
	p = (struct student *)malloc(len * sizeof(struct student));
	
	input(p,len);
	output(p,len);
	return 0;
} 
