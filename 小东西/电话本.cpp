/*
2015年5月19日13:26:36
   电话本 
添加联系人信息
删除联系人信息
编辑联系人信息
查询联系人信息
联系人信息排序
上,下翻页 

模块     
*/
# include <stdio.h>
# include <string.h>
# include <conio.h>
# include <Windows.h>

struct people
{
	char name[10];          //姓名 
	char telp[15];          //电话 
	char qq[15];            //QQ 
	char workp[15];          //工作地址 
}name[500];

typedef struct people tel;
int total=0,paget=1,pages=1,len=0,x=1;
void pwd(void);
void menu(void);
void help(void);
void add(void);
void del(void);
void edit(void);
void search(void);
void sort(void);
void print(void);

void pwd(void)         //密码函数 
{
	printf("\tWelcome to this telphone system!\n");
	char key[10] = "1",key1[10];    //正确的,待输入的
	int i=1,t;
	for(i=1; i<=3; i++)
	{
		printf("\n请输入密码:");
		scanf("%s",key1);
		if(strcmp(key,key1)!=0)
		{
			system("cls"); 
			printf("\t\tsorry ,your password is wrong!\n");
			printf("\t\tDon't worry. Please input again:");
		}
		else if(strcmp(key,key1)==0) 
		{
		   printf("你想查看帮助吗?");
		   printf("\n1.查看帮助\n2.直接进入\n");
		   printf("请选择(1/2):"); 
		   scanf("%d",&t);
		   if(t==1)
		   {
		      help();
		      break;
		   }
		   else if(t==2)
		   {
		      menu(); 
		      break;
		   }
		   else
		   {
		     exit(0);
		     printf("没有这个选项,886!");
		    }
	     }
	}
	if(i==4)
	{
		system("cls"); 
		printf("\t\t您已输错密码3次,拜拜!"); 
	}
} 

void help(void)     //帮助 
{
		printf("\t本系统使用说明:按相应的功能的首字母键即可实现相应的功能(eg:需要添加联系人add,则按键盘a), ");
		printf("排序是输入o\n");
		printf("去主菜单?(y/n)\n");
		char c; 
		scanf(" %c",&c);
		if(c=='y' || c=='Y')
		  menu();
		else
		  exit(0);
}


void menu(void)       //显示菜单 
{
ii: 
	system("cls");
	int i,j;
	char t,c; 
	printf("Add      Delete      Edit      Search      Sort      Help\n");
	print();
	while(!kbhit());
	t = getch();
		//kbhit用来检测键盘是否有按键,有则返回-1,没有则返回0. 如果想知道按下了什么键,
		//应该用getch()来获取(键值已经输入缓冲区,getch从缓冲区中取得而非再从键盘输入)
	switch(t)
	{
		case 'a':
			add();                //添加联系人 
			break;
		case 'd':
			del();                //删除联系人 
			break;
		case 'e':
		    edit();              //编辑 
		    break;
		case 's':
			search();            //搜索 
			break;
		case 'o':  
			sort();              //排序 
			break;
		case 'h':
			help();              //帮助 
			break;
		case 27:
		    printf("退出!\n");
			break;
		default: printf("亲,输入有误!继续输入吗?(y/n)\n");
				scanf(" %c",&c);
				if(c=='y' || c=='Y')
				  goto ii;
	} 
}

void add(void)
{
	printf("\t\t--------欢迎来到添加菜单O(∩_∩)O-------\n");
	int t;
so:
	len++;
	printf("请输入新的联系人姓名:");
	scanf("%s",name[len].name);
	printf("请输入该联系人号码:");
	scanf("%s",name[len].telp);
	printf("请输入该联系人QQ:");
	scanf("%s",name[len].qq);
	printf("请输入该联系人工作地址:");
	scanf("%s",name[len].workp);
	//len++; 
	printf("当前通讯录联系人总个数:%d\n",len);
	if(len>=100)
	   printf("哟,小伙子人缘不错嘛!\n"); 
	printf("您想继续添加联系人吗?\n");
	printf("1.继续\n2.返回主菜单\n");
	printf("请选择(1~2):");
	scanf("%d",&t); 
	switch(t)
	{
		case 1:
			goto so;
			break;
		case 2:
			menu();
			break;
		default: exit(0);
	}
}

void del(void)
{
	printf("\t\t--------欢迎来到删除菜单O(∩_∩)O-------\n");
	char namet[15],c; 
	int i,k,t=0;
so: 
	printf("请输入需要删除的联系人姓名:");
	scanf("%s",namet);
	for(i=1; i<=len; i++)
	{
		if(strcmp(namet,name[i].name)==0)    //查找此联系人 
		{
			t=i;
			break; 
		}
	}
	if(t!=0)
	{
		printf("哈哈,找到此人啦!\n为什么要把她(他)删了呢?心情不好,还是这个号码他(她)已经不用了?\n");
		printf("再给你个机会,是否要删他(她)?(y/n)\n");
		scanf(" %c",&c);
		if(c=='y' || c=='Y')
		{
			for(int t=i; t<len; t++)
			{
				name[t] = name[t+1];      //直接覆盖 
			}
			len--;              //人数减少
		}
		printf("此联系人已经删除!\n");
	}
	else
	{
		printf("呵呵,然而并没有找到您想要查找的人!\n");
	}
	printf("您想继续删除联系人吗?\n");
	printf("1.继续\n2.返回主菜单\n");
	printf("请选择(1~2):");
	scanf("%d",&k); 
	switch(k)
	{
		case 1:
			goto so;
			break;
		case 2:
			menu();
			break;
		default: exit(0);
	}
} 

void edit(void)
{
	printf("\t\t--------欢迎来到编辑菜单O(∩_∩)O-------\n");
	char namet[15]; 
	int i,k,t=0;
ss: 
	printf("请输入需要编辑的联系人姓名:");
	scanf("%s",namet);
	for(i=1; i<=len; i++)
	{
		if(strcmp(namet,name[i].name)==0)    //查找此联系人 
		{
		     t=i;
		     printf("找到这个人啦!\n");
		     break;
		}
	}
	if(t!=0)
	{
		printf("下面请编辑此联系人:\n");
		printf("请输入该联系人姓名:");
		scanf("%s",name[t].name);
		printf("请输入该联系人号码:");
		scanf("%s",name[t].telp);
		printf("请输入该联系人QQ:");
		scanf("%s",name[t].qq);
		printf("请输入该联系人工作地址:");
		scanf("%s",name[t].workp);
		printf("嘿嘿,此联系人编辑完毕!\n"); 
	}
	else
	{
		printf("呵呵,然而并没有找到您想要查找的人!\n");
	}
	printf("您想继续编辑其他联系人吗?\n");
	printf("1.继续\n2.返回主菜单\n");
	printf("请选择(1~2):");
	scanf("%d",&k); 
	switch(k)
	{
		case 1:
			goto ss;
			break;
		case 2:
			menu();
			break;
		default: exit(0);
	}
} 

void search(void)
{
	char namet[15];
	printf("\t\t--------欢迎来到搜索菜单O(∩_∩)O-------\n");
ss:
	printf("请输入需要查找的联系人姓名:");
	scanf("%s",namet);
	int i,t,k;
	for(i=1; i<=len; i++)
	{
		if(strcmp(namet,name[i].name)==0)    //查找此联系人 
		{
		     t=i;
		     printf("找到这个人啦!\n");
		     break;
		}
	}
	if(t!=0)
	{
		printf("该联系人的信息如下:\n");
		printf("Name         Telphone               QQ                Workplace\n\n");
		printf("%s           %s           %s           %s\n",name[t].name,name[t].telp,name[t].qq,name[t].workp); 
	}
	else
	{
		printf("呵呵,并没有找到您输入的联系人\n");
	}
	printf("您想继续搜索其他联系人吗?\n");
	printf("1.继续\n2.返回主菜单\n");
	printf("请选择(1~2):");
	scanf("%d",&k); 
	switch(k)
	{
		case 1:
			goto ss;
			break;
		case 2:
			menu();
			break;
		default: exit(0);
	}
} 

void sort(void)
{
	int l,i,j,k;
	tel t;
	printf("\t\t--------欢迎来到排序菜单O(∩_∩)O-------\n");
	for(i=1; i<=len; i++)    //冒泡排序 
	{
		for(j=1; j<=len; j++)
		{
			if(strcmp(name[i].name,name[j].name)<0)   //从a~z排序       交换结构体 
			{
				t = name[i];
				name[i] = name[j];
				name[j] = t;
			}
		}
	}
	printf("这里是排序联系人\n");
	printf("额...我不会告诉你这是自动排序....啊哈哈哈\n");
	printf("请输入1,返回主菜单,谢谢!\n");
	while(!kbhit());
	l=getch();
	if(l=='1') 
	  menu();
	else
	{
	  printf("怎么,不想退出,那么,再来排序依次\n");
	  sort();
    }
} 

void print(void)      //输出函数 
{
	if(len>0)
	{
		if(len%2==0)
		  pages = len/2;
		else
		  pages  = len/2+1;
	}
	printf("total:%d           page:%d/%d\n\n\n",len,paget,pages);       //联系人个数,当前页,总页数 
	printf("Name         Telphone               QQ                Workplace\n\n");
	for(int i=1; i<=len; i++)
	{
		printf("%s           %s           %s           %s\n",name[i].name,name[i].telp,name[i].qq,name[i].workp); 
	}
}

int main(void)
{
	pwd();
	
	return 0;
} 
