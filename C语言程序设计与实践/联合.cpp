/*
2015年5月27日23:37:18 
联合 
*/
# include <stdio.h>

struct student
{
	int clas;
	char select;
	union course
	{
		char music;
		int computer;
	}bb;
}stud[2];

int main(void)
{
	printf("请依次输入学生信息(班级,选修课程,等级或分数):");
	int i;
	for(i=1; i<=2; i++)
	{
		scanf("%d,%c",&stud[i].clas,&stud[i].select);
		if(stud[i].select=='m')
		{
			printf("您选修的是音乐,请输入等级(a,b,c,d)\n");
			getchar();
			scanf("%c",&stud[i].bb.music); 
			//stud[i].bb.music = getchar();
		}
		else if(stud[i].select=='c')
		{
			printf("您选修的是电脑,请输入分数\n");
			scanf("%d",&stud[i].bb.computer); 
		}
	}  
	printf("上面两个学生成绩如下:\n");
	for(i=1; i<=2; i++)
	{
		if(stud[i].select=='m')
		{
			printf("%d %c",stud[i].clas,stud[i].bb.music); 
		}
		else
		{
			printf("%d %d",stud[i].clas,stud[i].bb.computer); 
		}
	}  
	
	return 0;
} 
