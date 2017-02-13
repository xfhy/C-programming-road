/*
2015年3月7日22:37:02
输入学生记录,并输出 
*/
# include <stdio.h>

struct student
{
	char name[100];
	long unsigned id;          //学号 
	double score; 
}; 

int main(void)
{
	int i,j;
	struct student ca[1];   //student ca[3] {{1001,80},{1002,89},{1003,90}}; 
	for(i=0; i<1; i++)
	{
		printf("姓名        学号       分数\n");
		scanf("%s",ca[i].name);      //先编译之后才会有那个输入.之后出现提示框 ,name这里不用&,不知为何 
		scanf("%lu",&ca[i].id);
		scanf("%lf",&ca[i].score); 
	} 
	
	for(i=0; i<1; i++)
	{
		printf("%s     %lu    %lf",ca[i].name,ca[i].id,ca[i].score);
	}
	return 0; 
} 
