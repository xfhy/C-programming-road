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
	printf("������ѧ������:\n");   //�������� 
	printf("len = ");
	scanf("%d",&len);
	p = (struct student *)malloc(len*sizeof(struct student));   //�������鳤��
	
	  
	for(i = 0;i < len;i++)
    {
		printf("�������%d��ѧ������Ϣ:\n",i+1); 
		
		printf("����������:");
		scanf("%s",p[i].name); 
		 
		printf("����������:");
		scanf("%d",&p[i].age); 
		 
		printf("���������:");
		scanf("%f",&p[i].score); 
	 
    }
	
	struct student t;
	for(i = 0;i < len;i++)
	{
		for(j = 0;j <len-1-i;j++)
		{
			if(p[j].score < p[j+1].score)  //������������ 
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = p[j]; 
			}
		}
	}
	
	for(i = 0;i < len;i++)
    {
		printf("��%d��ѧ������Ϣ����:\n",i+1); 
		printf("����:%s\n",p[i].name);
		printf("����:%d\n",p[i].age);	 
		printf("����:%f\n",p[i].score); 
    }	
	return 0;
}
