/*
2015��5��27��23:37:18 
���� 
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
	printf("����������ѧ����Ϣ(�༶,ѡ�޿γ�,�ȼ������):");
	int i;
	for(i=1; i<=2; i++)
	{
		scanf("%d,%c",&stud[i].clas,&stud[i].select);
		if(stud[i].select=='m')
		{
			printf("��ѡ�޵�������,������ȼ�(a,b,c,d)\n");
			getchar();
			scanf("%c",&stud[i].bb.music); 
			//stud[i].bb.music = getchar();
		}
		else if(stud[i].select=='c')
		{
			printf("��ѡ�޵��ǵ���,���������\n");
			scanf("%d",&stud[i].bb.computer); 
		}
	}  
	printf("��������ѧ���ɼ�����:\n");
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
