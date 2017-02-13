/*
2015年6月5日12:17:09
fread和fwrite 
fread(char buf[],unsigned size,unsigned n,FILE *fp):fread是一个函数。
从一个文件流中读数据，最多读取count个元素，
每个元素size字节，如果调用成功返回实际读取到的元素个数，
如果不成功或读到文件末尾返回 0
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
		printf("不能打开文件!\n");
		exit(0);
	}
	printf("请依次输入班级,姓名,数学,英语,电脑:\n");
	scanf("%s,%s,%f,%f,%f",stud.class1,stud.name,&stud.math,&stud.english,&stud.computer);
	fwrite((char *)(&stud),sizeof(struct student),1,fp);
	fclose(fp);
	if((fp=fopen("D:\\file\\gread.dat","rb"))=NULL)
	{
		printf("不能打开文件!\n");
		exit(0);
	}
	fread((char *)(&stud),sizeof(stud),1,fp); 
	printf("%s,%s,%f,%f,%f",stud.class1,stud.name,stud.math,stud.english,stud.computer);
	fclose(fp);
	
	return 0;
}
