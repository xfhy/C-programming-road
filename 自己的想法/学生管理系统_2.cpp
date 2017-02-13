/*
2015年2月10日15:10:57
学生管理系统_2 
*/
# include <stdio.h>
# include <malloc.h>

struct student
{
	int age;
	char name[100];
	float score;
};

void input(struct student * p,int len)   //输入学生信息 
{
	int i;
	for(i=0; i<len; i++)
	{
		printf("\n\t请输入第%d个学生的年龄  ",i+1);
		scanf("%d",&p[i].age);
		printf("\n\t请输入第%d个学生的姓名  ",i+1);
		scanf("%s",p[i].name);
		printf("\n\t请输入第%d个学生的分数  ",i+1);
		scanf("%f",&p[i].score);
	}
}

void foam(struct student * p,int len)   //排序 
{
	int i,j;
	struct student t;    //下面要交换的是结构体,所以临时变量也应该是结构体 
	for(i=0; i<len-1; i++)   //最多交换个数(len) - 1次 
	{
		for(j=0; j<len-1; j++)
		{
			if(p[j].score<p[j+1].score)    //if默认只能控制一个语句   ,这里是比较分数,分数高的排前面 
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t; 
			}
		}
	}
} 

void output(struct student * p,int len)   //输出学生信息 
{
	int i;
	for(i=0; i<len; i++)
	{
		printf("\n第%d个学生信息如下:\n",i+1);
		printf("\n\t年龄:%d,姓名:%s,分数:%f",p[i].age,p[i].name,p[i].score);
	} 
}

int main(void)
{
	int len;
	struct student st;
	printf("请输入学生个数:");
	printf("len = "); 
	scanf("%d",&len);
	struct student * p;
	p = (struct student *)malloc(len * sizeof(struct student));
	
	input(p,len);
	output(p,len);
	return 0;
} 
