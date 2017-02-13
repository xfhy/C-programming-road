/*
2015年2月5日09:21:46
学生管理系统__1
*/

# include <stdio.h>
# include <malloc.h>  //分配动态内存的那个malloc函数的声明 
# include <Windows.h>

struct student
{
	int age;
	char name[100];   //这样定义是因为待会儿要输入字符串 
	float score;
};   //记得分号 

void input(struct student * p,int len)   //学生信息(数组)的输入
{
	int i;
    
	for(i = 0;i < len;i++)
    {
		printf("请输入第%d个学生的信息:\n",i+1); 
		
		printf("请输入姓名:");
		scanf("%s",p[i].name);       //name是字符串,所以是%s 
		 
		printf("请输入年龄:");
		scanf("%d",&p[i].age); 
		 
		printf("请输入分数:");
		scanf("%f",&p[i].score); 
	 
    }
}

void sort(struct student * p,int len)  //学生分数排序  算法:冒泡 
{
	int i,j;
	struct student t;     //待会换的是结构体,所以这里的临时变量也必须是结构体 
	for(i=0; i<len-1; i++)  //这里i表示是有多少次冒泡,最多len-1次,每次冒泡后上次冒泡的
	                      //最后那个总是最大的,或最小的 
	{
		for(j=0; j<len-1-i; j++)   //这里是每次冒泡的过程,在这之前已经冒过泡的就不用再冒泡,so  it is len-1-i
		{
			if(p[j].score < p[j+1].score)  //分数降序排列 
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
    for(i = 0;i < len;i++)
    {
		printf("\n\n第%d个学生的信息如下:\n",i+1); 
		printf("姓名:%s\n",p[i].name);
		printf("年龄:%d\n",p[i].age);	 
		printf("分数:%f\n",p[i].score); 
    }	
}

int main(void)
{
	system("title 潇风寒月自制学生管理系统");
	int i,j,m;
	int len;
	struct student * p;
	char ch;
	
	printf("\t\n\t***************欢迎来到潇风寒月自制学生管理系统************\n\n");
	printf("\n\t1.输入学生信息\n");
	printf("\n\t2.根据分数排序\n");
	printf("\n\t3.输出学生信息\n");
	printf("\t\n\t***************这里是四川师范大学招生就业处*************\n\n"); 
	
	printf("请输入学生个数:\n");   //构建数组 
	printf("len = ");
	scanf("%d",&len);
	p = (struct student *)malloc( len * sizeof(struct student));   //构建数组长度 
	
	do
	{ 
		printf("\n请选择(1~3)");
		scanf("%d",&m);
		if(m >= 1 && m <= 3) 
		{
		
			switch(m)
			{ 
				case 1: input(p,len);  //输入学生信息 
					break;
				case 2: sort(p,len);  //排序 
				    break;
				case 3: output(p,len);  //输出 
				    break;
				case 0: exit(0);
		    } 
		}
	printf("你想继续吗?(y/n)");
	scanf(" %c",&ch); 
	}while('y'==ch);
	 
	return 0;
} 
