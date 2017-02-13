/*
2015年4月30日19:18:13
学生信息管理系统 
*/
# include <stdio.h>
# include <Windows.h>        
# include <stdlib.h>         
# include <string.h>        
# include <malloc.h>

struct student          
{
	int num;           //高考学号 
	char name[10];     //姓名 
	float english;     //英语 
	float math;        //数学
	float chinese;     //语文 
	float cssa;        //理综 
}st[100];              //最多可以装100个学生信息  记得结构体打逗号 

int n=0;
void add();           //声明各种函数    添加 
void revise();        //修改 
void output();        //输出 
void del();           //删除 
void inqu();          //查询 
void input();         //输入 
void count();         //统计 
void save(int m);          //存储 
int load();                //导入函数     导入文件内原来的学生(结构体)个数 

void menu(void)            //界面制作 
{
	system("color 75");
	/*颜色属性由两个十六进制数字指定
	-- 第一个为背景，第二个则为前景。

	每个数字可以为以下任何值之一:    
	0 = 黑色   8 = 灰色  
	1 = 蓝色   9 = 淡蓝色    
	2 = 绿色   A = 淡绿色    
	3 = 浅绿色 B = 淡浅绿色    
	4 = 红色   C = 淡红色   
	5 = 紫色   D = 淡紫色  
	6 = 黄色   E = 淡黄色  
	7 = 白色   F = 亮白色	*/  
	printf("\n  (=^_^=)     ************全新高考考生信息管理系统************\t(=^_^=)\n");
	printf("\n\t制作人:潇风寒月\n"); 
	printf("\n\t\t1.输入学生信息");
	printf("\t\t2.浏览学生信息\n");
	printf("\t\t3.修改学生信息");
	printf("\t\t4.删除学生信息\n");
	printf("\t\t5.查询学生信息");
	printf("\t\t6.添加学生信息\n"); 
	printf("\t\t7.统计学生信息");
	printf("\t\t8.退出系统\n\n"); 
	printf("\t\t**************谢谢使用(>^-^<)****************\n");
} 

int main(void)
{
	int x,t,p;
	char c;
	system("title 潇风寒月制作"); 
	system("cls"); 
	menu();          //显示主菜单 
	printf("Please select(1~~8):"); 
	while(1)
	{
		scanf("%d",&x);
		if(x>=1 && x<=8)
		{ 
			switch(x)
			{
				case 1:
					printf("            ******输入学生信息******\n");
					input();        //输入 
					break;
				case 2:
					printf("            ******输出学生信息******\n");
					system("cls");
					output();       //输出 
				    break; 
				case 3:
					printf("            ******修改学生信息******\n");
					revise();       //修改 
					break;
				case 4:
					printf("            ******删除学生信息******\n");
					del();          //删除 
				    break;
				case 5:
					printf("            ******查询学生信息******\n");
					inqu();         //查询
				    break; 
				case 6:
					printf("            ******添加学生信息******\n");
					add();          //添加 
					break;
				case 7:
					printf("            ******统计学生信息******\n");
					count();       //统计 
				    break; 
				case 0:              //如果以上结果都没有,就选这个 
					exit(0);         //退出 
				default :break;
	        }
	    }
	    else
	    {
	    	printf("\t输入有误哦!\n");
	    	printf("\t1.退出本系统\n");
	    	printf("\t2.重新输入!\n");
	    	printf("\n请选择:\n");
	    	scanf("%d",&t);
	    	if(t==1)
	    	  exit(0);         //退出 
	    	else if(t==2)
	    	  main();          //重启主函数 
		}
		getchar();        //提取滞留在缓冲区的'\n'    下面都是这个功能 
	    printf("\n\nDo you want to continue?(y ~ n)\n");
	    scanf("%c",&c);
	    getchar();
		if(c=='y')     //如果用户输入y那么还在while函数里,未退出循环 
		{
			system("cls");       //清屏 
			menu();              //调用显示主界面函数
			printf("Please select again(1~~7):"); 
		} 
		else            //输入非y,退出循环 
		  exit(0);
    }
    
	return 0; 
} 

void input(void)             //输入函数 
{
	int i;
	printf("\n你想输入几个学生信息:\n");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("请输入第%d个学生的考号:",i);
		scanf("%d",&st[i].num);
		printf("请输入第%d个学生的姓名:",i);
		scanf("%s",&st[i].name);
		printf("请输入第%d个学生的数学成绩:",i);
		scanf("%f",&st[i].math);
		printf("请输入第%d个学生的英语成绩:",i);
		scanf("%f",&st[i].english);
		printf("请输入第%d个学生的语文成绩:",i);
		scanf("%f",&st[i].chinese);
		printf("请输入第%d个学生的理综成绩:",i);
		scanf("%f",&st[i].cssa);
	}
	save(n);         //保存为文件 
}

void output(void)              //输出函数 
{
	int i;
	system("cls");
	int m = load();       //输出前要先知道文件里有几个结构体 
	printf("\n学生信息如下:\n");
	printf("姓名\t考号\t数学\t英语\t语文\t理综\n");
	for(i=1; i<=m; i++)
	{
	  printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n",     //分为两行写 
	  st[i].name,st[i].num,st[i].math,st[i].english,st[i].chinese,st[i].cssa);
	} 
}

void del(void)             //删除函数 
{
	system("cls");
	int i,j,k,t=0,b;
	n = load();               //删除之前要先知道有几个结构体 
	output();                 //删除前让用户看看原来的学生信息 
	printf("\n请输入需要删除的那个学生的考号:");
	scanf("%d",&j);
	for(i=1; i<=n; i++)
	{
		if(j==st[i].num)        //找到需要删除的结构体,用后面的结构体直接覆盖它 
		{
			printf("\n已找到此人，原始记录为：\n"); 
			printf("姓名\t考号\t数学\t英语\t语文\t理综\n");
			printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n",     //分为三行写 
	          st[i].name,st[i].num,st[i].math,st[i].english,
			   st[i].chinese,st[i].cssa);
			printf("\n确认删除请输入1\n取消删除请按0\n");
			scanf("%d",&b);
			if(b==1)
			{
				t = 1;   //用户确认删除后就减少结构体了 
				for(k=i; k<n; k++)
				{
					st[k] = st[k+1];     //找到后直接覆盖(结构体之间的覆盖) 
				}
			}
			else
				main(); 
			break;   //删除后i不需继续循环 
		}
	}
	if(t==1)
	  n--;             //删除后结构体减少
	save(n);         //当场保存 
	output(); 
}

void revise(void)              //修改
{
	int i,k;
	n = load(); 
	output(); 
	printf("\n请输入需要修改的那个学生的考号:");
	scanf("%d",&k);
	for(i=1; i<=n; i++)
	{
		if(k==st[i].num)
		  break; 
	} 
	if(k==n+1)
		printf("原数据中没有找到您想查找的学生....");
	else
	{
		printf("请输入这个学生的新考号:");
		scanf("%d",&st[i].num);
		printf("请输入这个学生新姓名:");
		scanf("%s",&st[i].name);
		printf("请输入这个学生的新数学成绩:");
		scanf("%f",&st[i].math);
		printf("请输入这个学生的新英语成绩:",i);
		scanf("%f",&st[i].english);
		printf("请输入这个学生的新语文成绩:",i);
		scanf("%f",&st[i].chinese);
		printf("请输入这个学生的新理综成绩:",i);
		scanf("%f",&st[i].cssa);
	} 
	save(n);           //修改后记得保存 
} 

void inqunum(void)             //按照学号查询 
{
	int i,k;
	printf("请输入需要查找的考号:");
	scanf("%d",&k);
	n = load(); 
	for(i=1; i<=n; i++)
	{
		if(k==st[i].num)
		  break;
	}
	if(i==n+1)
		printf("\n原数据中没有找到您想查找的学生....\n");
	else
	{
		printf("\n找到啦! 该学生信息为:\n");
		printf("姓名\t考号\t数学\t英语\t语文\t理综\n");
		printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n",
			st[i].name,st[i].num,st[i].math,st[i].english,
			st[i].chinese,st[i].cssa);
	} 
} 

void inqunam(void)     //按照姓名查找 
{
	int i;
	char nam[10];
	printf("\n请输入需要查找的姓名:");
	scanf("%s",nam);
	for(i=1; i<=n; i++)
	{
		if(strcmp(st[i].name,nam)==0)   //输入的字符串与结构体中name相等 
		{
		    printf("\n找到啦! 该学生信息为:\n");
		    printf("姓名\t考号\t数学\t英语\t语文\t理综\n");
			printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n",
			  st[i].name,st[i].num,st[i].math,st[i].english,
			  st[i].chinese,st[i].cssa);
		    break;
	    }
	}
	if(i==n+1)
	  printf("\n查无此人....\n");
} 

void inqu(void)      //查询 
{
	int i,x,t;
	char nam[10],c;
	system("cls");
	printf("\t\t$$$$欢迎来到查询小天地$$$$\n"); 
	printf("\t1.按考号查找\n");
	printf("\t2.按姓名查找\n");
	{
		printf("    Please select(1~~3):");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				inqunum();    //调用按考号查找函数 
				break; 
			case 2:
				inqunam();    //调用按姓名查找函数
			    break; 
			case 0:
				exit(0);
		}
		printf("\n查找已完成\n");
		printf("\t1.回到主菜单\n");
		printf("\t2.继续查找\n");
		printf("\n请选择:");
		scanf("%d",&t);
		if(t==1)
		  main();             //调用主函数 
		else if(t==2)
		  inqu();             //调用自己 
    }
}

void add(void)            //添加结构体 
{
	output(); 
	int i,num,x,j;
	n = load();          //在添加之前首先要知道原来的学生个数 
	char name[10];
	float k;
	printf("\n\n请输入需要添加几个学生信息:");
	scanf("%d",&x);
	for(i=n+1; i<=n+x; i++)     //只需添加x个学生,在先前的n后面 
	{
		printf("\n请输入考号:");
		scanf("%d",&num);
		for(j=1; j<=n; j++)     //如果先前的n个结构体里有这个考号则提示用户 
		{
			if(st[j].num==num)
			{
				printf("\n已有此人! 请重新输入考号!\n");
				break;
			}
		}
		if(j<=n)
		{
			scanf("%d",&num);
			st[i].num = num;
		}
		else
			st[i].num = num;
		printf("\n请输入姓名:");
		scanf("%s",name);
		getchar();
		strcpy(st[i].name,name); 
		printf("\n请输入数学成绩:");
		scanf("%f",&k);
		st[i].math = k;
		printf("\n请输入英语成绩:");
		scanf("%f",&k);
		st[i].english = k;
		printf("\n请输入语文成绩:");
		scanf("%f",&k);
		st[i].chinese = k;
		printf("\n请输入理综成绩:");
		scanf("%f",&k);
		st[i].cssa = k;
	}
	n=n+x;                        //结构体个数增加 
	system("cls");               //清屏 
	printf("\n浏览添加后的学生信息\n");
	save(n);
	output();                   //调用输出函数
}

void count(void)           //统计 
{
	int i,j,x;
	float l;
	//FILE * fp;
	//if((fp = fopen("d:\\txt\\student.txt","wb"))==NULL)
	//{
	//	printf("Can't open this file!");
	//	exit(0);
	//}
	struct student t;     //定义临时变量 
	n = load(); 
	printf("现有学生人数:%d\n",n);
	float *a = (float *)malloc(sizeof(struct student) * (n+1));   //下标最后为n 
	printf("\t\t1.按照总成绩排名\n");
	printf("\t\t2.返回主菜单\n");
	printf("\t请选择:");
	scanf("%d",&x); 
	for(i=1; i<=n; i++)
	{
		a[i] = st[i].math + st[i].chinese + st[i].english + st[i].cssa;   //统计每个学生总分 
	}
	for(i=1; i<=n; i++)        //冒泡排序   
	{
		for(j=1; j<=n; j++)      
		{
			if(a[j]<a[j+1])   //由大到小排序 
			{
				l = a[j];        //分数也要交换 
				a[j] = a[j+1];
				a[j+1] = l;
				
				t = st[j];        //学生信息交换(结构体) 
				st[j] = st[j+1];
				st[j+1] = t;
			}  
		}
	} 
	 
	switch(x)
	{
		case 1:
			printf("\n学生信息如下:\n");        //未存入文件,直接输出 
			printf("姓名\t考号\t数学\t英语\t语文\t理综\t总成绩\t名次\n");
			for(i=1; i<=n; i++)
			{
			  printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%d\n",     //分为两行写 
			  st[i].name,st[i].num,st[i].math,st[i].english,st[i].chinese,st[i].cssa,a[i],i);
			}  
			break;
		case 2:
			main();      //调用主函数 
		    break; 
		case 0:
			exit(0);
			break;
		default:break; 
	}
}

void save(int m)     //存入文件 
{
	FILE * fp;
	char c;
	int i;
	if((fp=fopen("d:\\txt\\student.txt","wb"))==NULL)
	{
		printf("Can't open this file!");
		exit(0);
	}
	for(i=1; i<=m; i++)
	{
	   //fprintf(fp,"%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n", 
        //st[i].name,st[i].num,st[i].math,st[i].english,
		 //st[i].chinese,st[i].cssa);
		 if(fwrite(&st[i],sizeof(struct student),1,fp)!=1)  //写正确时,返回1 
		   //fwrite(获取数据地址,数据大小,个数,目标文件指针) 将st[i]挨个写入fp 
		   printf("file write error\n"); //不正确时,提示用户 
	}
	fclose(fp);  
}

int load(void)     //导入文件中结构体到st[i],并返回数量 
{
	FILE * fp;
	int i=1;
	if((fp=fopen("d:\\txt\\student.txt","rb"))==NULL)
	{
		printf("Can't open this file!");
		exit(0);
	} 
	else
	{
		do
		{
			fread(&st[i],sizeof(struct student),1,fp);  //将fp中sizeof(struct student)大小的
			                        //一个一个写入st[i]中 
			i++;                    //增加结构体数目 
		}while(feof(fp)==0);
	}
	fclose(fp);  
	return i-2;
} 
