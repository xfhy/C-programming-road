/*
2015��3��7��22:37:02
����ѧ����¼,����� 
*/
# include <stdio.h>

struct student
{
	char name[100];
	long unsigned id;          //ѧ�� 
	double score; 
}; 

int main(void)
{
	int i,j;
	struct student ca[1];   //student ca[3] {{1001,80},{1002,89},{1003,90}}; 
	for(i=0; i<1; i++)
	{
		printf("����        ѧ��       ����\n");
		scanf("%s",ca[i].name);      //�ȱ���֮��Ż����Ǹ�����.֮�������ʾ�� ,name���ﲻ��&,��֪Ϊ�� 
		scanf("%lu",&ca[i].id);
		scanf("%lf",&ca[i].score); 
	} 
	
	for(i=0; i<1; i++)
	{
		printf("%s     %lu    %lf",ca[i].name,ca[i].id,ca[i].score);
	}
	return 0; 
} 
