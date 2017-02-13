/*
2015年3月10日21:08:53
从键盘输入一批学生记录,存储到文件D:st.rec 
*/
# include  <stdio.h>
# include <stdlib.h>   //包含atof和atol函数声明 

struct student
{
	long unsigned id;
	char name[20];
	double score;
};
typedef struct student st;  //定义结构体别名 

int  main(void)
{
	char ch,num[20];
	st s;
	FILE * fp;
	fp = fopen("D:\\txt\\st.rec","wb");
	if(fp==0)
	{
		printf("不能正常打开文件!\n");
		exit(1);
	} 
	printf("请输入:\n");
	do
	{
		/*
		printf("想继续输入其他的么?(y/n)?");   
		ch = getchar();         //输入字符Ｙ／Ｎ   
		getchar();              //提取滞留在缓冲区的回车符  
		if(ch=='n')           //如果输入为n,则循环结束
		   break;
		*/
		printf("学号:       ");
		gets(num);               //将输进来的东西赋值给num 
		s.id = atol(num);    //atol将数字串转化为长整形型 
		
		printf("姓名:       ");
		gets(s.name);      //只有姓名这里比较特殊 
		
		printf("分数:");
		gets(num);
		s.score = atof(num);     //atof将字符串转化为双浮点型 
		   fwrite(&s,sizeof(s),1,fp);   //将当前这条记录s写入文件 
		   
		printf("想继续输入其他的么?(y/n)?");   
		ch = getchar();         //输入字符Ｙ／Ｎ   
		getchar();              //提取滞留在缓冲区的回车符  
		if(ch=='n')           //如果输入为n,则循环结束
		   break;
	}while(1);
	fclose(fp);
	
	return 0;
}
