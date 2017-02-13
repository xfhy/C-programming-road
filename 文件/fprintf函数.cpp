/*
2015年6月4日12:46:04
fprintf函数 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE *fp;
	char class1[20],name[20],c;
	int math,computer,english;
	if((fp=fopen("D:\\file\\student.txt","w"))==NULL)
	{
		printf("不能打开文件!\n");
		exit(0);
	}
	while(1)
	{
		printf("请依次输入班级,姓名,数学,电脑,英语成绩:\n");
		scanf("%s,%s,%d,%d,%d",class1,name,&math,&computer,&english); 
		fprintf(fp,"%s,%s,%d,%d,%d\n",class1,name,math,computer,english);  //按格式写入文件 
		printf("内容放入文件成功!\n");
		printf("想继续放入文件内容吗(y/n)?");
		fflush(stdin);   //清空输入缓冲区为了确保不影响后面的数据读取,例如在读完一个字符串后紧接着
		//又要读取下一个字符 
		c = getchar();
		if(c!='y' && c!='Y')
		   break;
    }
    fclose(fp);
	
	return 0;
} 
