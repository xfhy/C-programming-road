/*
2015��6��5��12:17:09
fread��fwrite 
fread(char buf[],unsigned size,unsigned n,FILE *fp):fread��һ��������
��һ���ļ����ж����ݣ�����ȡcount��Ԫ�أ�
ÿ��Ԫ��size�ֽڣ�������óɹ�����ʵ�ʶ�ȡ����Ԫ�ظ�����
������ɹ�������ļ�ĩβ���� 0
fread(char buf[],unsigned size,unsigned n,FILE *fp)
*/
# include <stdio.h>
# include <stdlib.h>

struct student
{
	char class1[10],name[10];
	float math,english,computer;
};

int main(void)
{
	FILE * fp;
	char ch;
	struct student stud;
	if((fp=fopen("D:\\file\\grade.dat","wb"))=NULL)
	{
		printf("���ܴ��ļ�!\n");
		exit(0);
	}
	printf("����������༶,����,��ѧ,Ӣ��,����:\n");
	scanf("%s,%s,%f,%f,%f",stud.class1,stud.name,&stud.math,&stud.english,&stud.computer);
	fwrite((char *)(&stud),sizeof(struct student),1,fp);
	fclose(fp);
	if((fp=fopen("D:\\file\\gread.dat","rb"))=NULL)
	{
		printf("���ܴ��ļ�!\n");
		exit(0);
	}
	fread((char *)(&stud),sizeof(stud),1,fp); 
	printf("%s,%s,%f,%f,%f",stud.class1,stud.name,stud.math,stud.english,stud.computer);
	fclose(fp);
	
	return 0;
}
