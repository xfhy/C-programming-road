# include <stdio.h>
# include <malloc.h>
struct student
{
	int age;
	char name[100];
	float score;
};
int main(void)
{
	int i,j;
	int len;
	struct student * p;
	printf("请输入学生个数:\n");   //构建数组 
	printf("len = ");
	scanf("%d",&len);
	p = (struct student *)malloc(len*sizeof(struct student));   //构建数组长度
	
	  
	for(i = 0;i < len;i++)
    {
		printf("请输入第%d个学生的信息:\n",i+1); 
		
		printf("请输入姓名:");
		scanf("%s",p[i].name); 
		 
		printf("请输入年龄:");
		scanf("%d",&p[i].age); 
		 
		printf("请输入分数:");
		scanf("%f",&p[i].score); 
	 
    }
	
	struct student t;
	for(i = 0;i < len;i++)
	{
		for(j = 0;j <len-1-i;j++)
		{
			if(p[j].score < p[j+1].score)  //分数降序排列 
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = p[j]; 
			}
		}
	}
	
	for(i = 0;i < len;i++)
    {
		printf("第%d个学生的信息如下:\n",i+1); 
		printf("姓名:%s\n",p[i].name);
		printf("年龄:%d\n",p[i].age);	 
		printf("分数:%f\n",p[i].score); 
    }	
	return 0;
}
