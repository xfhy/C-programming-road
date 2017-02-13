/*
时间:2015年7月10日23:32:38
单位:第一小组
成员:古创 别青青 王成蓉 唐思浩 郭亮
程序名称:电子地图管理系统
*/
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <conio.h>      //包含getch()的声明
# include <Windows.h>    //包含Sleep()的声明

void readfile(void);         //阅读文件

void save(void);             //存储文件

void backmenu(void);         //返回菜单
void findid(void);           //根据ID寻找
void findbruch(void);        //根据岔路数寻找
void findname(void);         //根据ID寻找
void find(void);             //查找菜单

void color(void);            //颜色选择菜单
void print(void);            //按页显示

void add(void);              //添加道路信息
void del(void);              //删除道路信息
void edit(void);             //编辑道路信息
void update(void);           //更新菜单

void sort(void);             //根据LinkId进行排序
void printexit(void);        //退出特效
void menu(void);             //主菜单

struct Road
{
	int acsize;        //道路信息总大小
	int linkid;        //linkid
	int namesize;      //名称大小
	int dispclass;     //class 番号
	int brunch;        //岔路数
	int roadnameflag;  //有无路线名称
	char roadname[100];//名称
}road[70000];

int len=1;          //数组长度
/*
无符号2byte			这个记录的Size	注意：数据文件中的数据存放方式是大端序例如0019,而intel处理器是小端序，需要把0x0019转为0x1900      这个数值(十进制25)										
无符号４byte			LinkID															
无符号2byte			道路名称的Size															
无符号４byte			始点Node的情报															
			31-8	Reserved														预定的
			7	路线名称有无Flag														
			6-4	岔路数														
			3-0	交叉Link列表示Class番号														
字符型	长度不定		道路名称字符串															
*/ 

void readfile(void)                    //读取文件
{
	FILE *fp1,*fp2;
	int m;
	char actotalsize[2];       //该道路数据总共占的字节数
	char aclinkid[4];          //道路ID
	char acroadnamesize[2];   //道路名称大小
	char acnodeinfo[4];       //最后的那4个信息

	unsigned short usroadnamesize;   //存名称大小
	unsigned long  ullinkId;         //存番号
	unsigned short ustotalsize;       //该道路数据总共占的字节数

	if((fp1=fopen("D://file//1.dat","rb"))==NULL)
	{
		printf("\n\t\tFile can't be opened\n");
		exit(0);
	}
	if((fp2=fopen("D://file//我的地图信息.txt","w+"))==NULL)
	{
		printf("\n\t\tFile can't be opened\n");
		exit(0);
	}
	while( fread(actotalsize , sizeof(actotalsize) , 1 , fp1) == 1 )
	{                                             //读取前2个字节,总共大小  

								//读取占用4 字节的dispclass ， brunch ， 和 roadnameflag字符串
		fread( aclinkid , sizeof(aclinkid) , 1 , fp1 ) ;				//读取占用4字节的linkId字符     
		fread( acroadnamesize , sizeof(acroadnamesize) , 1 , fp1 ) ;	//读取占用2字节的roadnamesize字符串	 
		fread( acnodeinfo , sizeof(acnodeinfo) , 1 , fp1 ) ; 

			char t;                          //定义临时存一个字节的变量  
			t = actotalsize[0];      //交换高位和低位 
			actotalsize[0]=actotalsize[1];
			actotalsize[1]=t;
			ustotalsize=(unsigned short)actotalsize[0];
            
            //求LinkId 
			t = aclinkid[0];      //交换高位和低位    1<-->4
			aclinkid[0]=aclinkid[3];
			aclinkid[3]=t;
			t = aclinkid[1];      //交换高位和低位    2<-->3
			aclinkid[1]=aclinkid[2];
			aclinkid[2]=t;
			int *p;
			p=(int *)aclinkid;      //强制转换为int型指针  指向 aclinkid
			ullinkId=*p;            //将大小存入番号
			int *p2; 
			p2=(int *) acroadnamesize;     //强制转换为int型指针  指向 acroadnamesize

			usroadnamesize =*p2 ;        //存名称大小
			
 
			                    //赋值 ：将数值信息传到结构体中  
			road[len].acsize = ustotalsize ;                              //总大小存到结构体
			road[len].linkid = ullinkId ;                                 //LinkId存到结构体
			if(usroadnamesize==0 || usroadnamesize==65535)                //判断道路名称大小是否为0
			{
				road[len].namesize=0;          //名称大小
			}
			else
			{
				road[len].namesize = usroadnamesize;
			}
			
							   //从最后那个字节中读取dispclass ， brunch 以及roadnameflag的值 
		 m=(int)acnodeinfo[3]&255;          //保留后8位,前8位清0        0000 0000 1111 1111(255)    这是最后一个字节:flag, brunch,番号 
		 //printf("%d ",m);                       //第一个m=182    二进制:1011 0110 
		 road[len].dispclass=m&15;              //   class番号第0~3位   0000 1111(15)与了之后就可以得到最后4位的值 
		 road[len].brunch=( (m&112)>>4 );           //第4~6位  112:0111 0000   得到4~6位    得到之后向右移4位,才得到最终数据 
		 road[len].roadnameflag=( (m&128)>>7 );    //第7位 1000 0000   将第一位保留下来,再向右移7个单位
		 
							  //从文件中读取道路名称 ；
		 fread(road[len].roadname,sizeof(char),ustotalsize-12,fp1);   // 存的地址,大小,个数,数据流

		fprintf(fp2,"%s %d ","LinkId=",road[len].linkid);            //LinkId
		fprintf(fp2,"%s %d ","Linkclass=",road[len].dispclass);      //class 番号
		fprintf(fp2,"%s %d ","brunch=",road[len].brunch);            //岔路数
		fprintf(fp2,"%s %d ","roadnameflag=",road[len].roadnameflag);//有无路线名称
		fprintf(fp2,"%s %s \n","roadname:",road[len].roadname);      //名称

		len++;        //存入一个结构体后,结构体长度加1 
		
	}
	fclose(fp1);
	fclose(fp2);
	printf("\n\t\t读取文件成功!\n\n");
	printf("\n\t\t文件已成功存入D://file//我的地图信息.txt\n");
	Sleep(1500);            //让程序暂停一下,2000微秒
}



void save(void)              //存储
{
	FILE *fp;
	char filename[100];
	printf("\n\t\t请输入将文件存储的地址:\n");
	printf("\n\t\teg:   D://file//解析文件.txt\n");
	printf("\t\t");
	scanf("%s",filename);              //让用户输入存储地址
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("File can't be opened\n");
		exit(0);
	}
	int i;
	for(i=1; i<len; i++)
	{
		fprintf(fp,"%s %d ","LinkId=",road[i].linkid);            //Id
		fprintf(fp,"%s %d ","Linkclass=",road[i].dispclass);      //class 番号
		fprintf(fp,"%s %d ","brunch=",road[i].brunch);            //岔路数
		fprintf(fp,"%s %d ","roadnameflag=",road[i].roadnameflag);//有无路线名称
		fprintf(fp,"%s %s \n","roadname:",road[i].roadname);      //名称
	}
	fclose(fp);
	printf("数据已成功存入%s!\n",filename);
	Sleep(900);
}

void backmenu(void)
{
	int temp;
	printf("\t\t需要返回查找菜单吗?\n");
		printf("\t\t1.YES\n");
		printf("\t\t2.NO,我想返回主菜单\n");
		printf("\t\t3.NO,我想退出\n");
		printf("\t\t请选择:  ");
		temp=getch();
		if(temp=='1')
			find();
		else if(temp=='2')
		{
			system("cls");
			menu();
		}
		else
		{
			printexit();
		}
}
void findid(void)     //根据linkid进行查询 
{
	int i,id,count=0;
	printf("\n\t\t请输入您想查询的LinkId:");
	scanf("%d",&id);
	for(i=1; i<len; i++)
	{
		if(road[i].linkid==id)
		{
			count=1;
			printf("\n\n\t\t您需要查询的道路信息已找到!\n\n");
			printf("道路总大小=%d     ",road[i].acsize);   //道路总大小
		    printf("linkid=%d     ",road[i].linkid);   //linkid
		    printf("名称大小=%d \n",road[i].namesize); //名称大小
		    printf("class番号=%d       ",road[i].dispclass);  //class番号
		    printf("岔路数=%d       ",road[i].brunch);   //岔路数
		    printf("有无路线名称=%d   ",road[i].roadnameflag);//有无路线名称
		    printf("名称%s \n\n",road[i].roadname);  //名称
		    break;
		}
	} 
	if(count==0)
	{
		printf("\t\t哈哈,没有找到哦!\n\n");
		backmenu();
	}
	else
	{
		backmenu();
	}
}
void findbruch(void)     //根据岔路数查询 
{
	int i,brunch,count=0,jixu;
	printf("\n\t\t请输入您想查询的道路岔路数:");
	scanf("%d",&brunch);
	for(i=1; i<len; i++)
	{
		if(road[i].brunch==brunch)
		{
			count=1;
			printf("\n\n\t您需要查询的道路信息已找到!\n\n");
			printf("道路总大小=%d     ",road[i].acsize);   //道路总大小
		    printf("linkid=%d     ",road[i].linkid);   //linkid
		    printf("名称大小=%d \n",road[i].namesize); //名称大小
		    printf("class番号=%d       ",road[i].dispclass);  //class番号
		    printf("岔路数=%d       ",road[i].brunch);   //岔路数
		    printf("有无路线名称=%d   ",road[i].roadnameflag);//有无路线名称
		    printf("名称%s \n\n",road[i].roadname);  //名称
		}
	} 
	if(count==0)
	{
		printf("\n\t\t哈哈,没有找到哦!\n\n");
		Sleep(500);
		system("cls");
		backmenu();
	}
	else
	{
		backmenu();
	}
}
void findname(void)
{
	int i,count=0,jixu;
	char name[100];
	printf("\n\t\t请输入您想查询的道路名称:");
	scanf("%s",name);
	for(i=1; i<len; i++)
	{
		if(strcmp(road[i].roadname,name)==0)
		{
			count=1;
			printf("\n\n\t您需要查询的道路信息已找到!\n\n");
			printf("道路总大小=%d     ",road[i].acsize);   //道路总大小
		    printf("linkid=%d     ",road[i].linkid);   //linkid
		    printf("名称大小=%d \n",road[i].namesize); //名称大小
		    printf("class番号=%d       ",road[i].dispclass);  //class番号
		    printf("岔路数=%d       ",road[i].brunch);   //岔路数
		    printf("有无路线名称=%d   ",road[i].roadnameflag);//有无路线名称
		    printf("名称%s \n\n",road[i].roadname);  //名称
		    //break;
		}
	} 
	if(count==0)
	{
		printf("\n\t\t哈哈,没有找到哦!\n\n");
		backmenu();
	}
	else
	{
		backmenu();
	}
}
void find(void)      //查询函数
{
	int temp,count;   //用户输入的临时值   判断用户是否输入错误
	system("cls");
	printf("\n\t\t\t★★★★欢迎来到查找菜单★★★★\n\n");
	printf("\t●1.输入番号查询\n");
	printf("\t●2.输入岔路数进行查询\n");
	printf("\t●3.输入名称进行查询\n"); 
	printf("\t●4.返回主菜单\n"); 
	printf("\t●5.退出\n");
	printf("Please select 1~5:"); 
	
	do
	{ 
		temp=getch();     //搜集用户的输入信息
		switch(temp)
		{
			case '1':
				count=0;
				findid();   //根据id进行查找 
				break;
			case '2':
				count=0;
				findbruch(); //根据岔路数进行查找
				break;
			case '3':
				count=0;    //根据道路名称进行查找
				findname();
				break;
			case '4':
				count=0;
				system("cls");
				menu();    //返回主菜单 
			    break;
			case '5':
				printexit();      //调用退出函数
				break;
			default :
				printf("\n\t\t哈哈,没有这个选项!\n \t\t请重新输入\n");
				printf(" \t\t ");
				count=1;
			    break; 
		}
	}while(count==1);
	
} 

void print(void)    //将地图信息按页输出
{
	int i=1,hit,min=1,max=10,page=1,count=1;     //临时用户点击值,最小下标,最大,页数,翻到哪一页
	system("cls");
	do
	{
		page=max/10;
		printf("第%d页 ",page);
	    printf("\n\t\t按 w,s 键可上下翻页\n");
		printf("\t\t按 0 键 可以退出\n\n");
		for(i=min; i<=max; i++)
		{
		  printf("linkid=%d  ",road[i].linkid);                //linkid
		  printf("class番号=%d  ",road[i].dispclass);          //class番号
		  printf("岔路数=%d  ",road[i].brunch);                //岔路数
		  printf("有无路线名称:%d  ",road[i].roadnameflag);    //有无路线名称
		  printf("名称:%s \n",road[i].roadname);              //名称
		}
		hit=getch();      //获取用户输入的按键
		if(hit=='w')
		{
			system("cls");
			if(min>=10)
			{
				count--;
				min-=10;
				max-=10;
			}
			else if(min==1 && max==10)
			{
				printf("\n\t\t已经是第一页了!\n");
			}
		}
		else if(hit=='s')
		{
			system("cls");
			if(count<(len/10))
			{
				count++;
				min+=10;
				max+=10;
			}
			else if(count==(len/10))
			{
				printf("\n\t\t已经是最后一页了!\n");
			}
		}
		else
		{
			system("cls");
			printf("\a");
		}
	}while(hit!='0');

}  

void add(void)     //添加道路信息
{
	char troadname[100];       //临时的道路名称
	int sum=0,temp;                 //道路信息总大小,判断用户是否继续输入
	printf("\n\t\t----请输入需要添加的道路信息----\n\n");
	printf("\t\t道路LinkId:  ");
	scanf("%d",&road[len].linkid);
	printf("\t\t道路番号:  ");
	scanf("%d",&road[len].dispclass);
	printf("\t\t岔路数:  ");
	scanf("%d",&road[len].brunch);
	printf("\t\t道路名称  ");
	scanf("%s",troadname);            //输入道路名称
	sum+=sizeof(troadname);
	strcpy(road[len].roadname,troadname);   //将输入的名称赋值到road[len+1].roadname中去
	road[len].roadnameflag=1;      //有道路名称哈 
	sum= sum+ 6*(sizeof(int));         //记录道路信息大小  结构体中有6个int型               //考虑到兼容性问题,不要以为int大小就是4
	road[len].acsize=sum;       
	printf("\n\t\t确定要添加这条道路信息:\n");
	printf("\t\t1.是的\n");
	printf("\t\t2.NO!返回主菜单\n");
	printf("\t\t3.退出程序\n");
	printf("\n\t\t请选择      ");
	temp=getch();
	if(temp=='1')
	{
		len++;
		printf("\t\t道路信息添加成功!\n\t\t请保存!\n");
		save();
	}
	else if(temp=='2')
	{
		system("cls");
		menu();
	}
	else
	{
		printexit();      //调用退出函数
	}
}
void del(void)   //删除
{
	int i,tlinkid,count=0,temp;     //临时LinkId,判断是否找到相等的LinkId,判断用户是否继续
	printf("\n\t\t请输入需要删除的道路的LinkId:   ");
	scanf("%d",&tlinkid);
	for(i=1; i<len; i++)
	{
		if(road[i].linkid==tlinkid)      //如果找到相等的Linkid,则继续下面的操作
		{
			printf("\t\t嘿嘿,找到您需要删除的道路信息啦!\n");
			count=1;
			break;
		}
	}
	if(count==1)    //如果找到了需要删除的那个结构体
	{
		for(; i<=len; i++)   //上面已找到对应的需要删除的结构体位置road[i]   ,这里i最多到len-1就行,因为下面有i+1
		{
			//road[i].acsize=road[i+1].acsize;    //从需要删除的那个结构体开始,后面的结构体将前面一个的数据覆盖掉
			//road[i].brunch=road[i+1].brunch;
			//road[i].dispclass=road[i+1].dispclass;
			//road[i].linkid=road[i+1].linkid;
			//road[i].namesize=road[i+1].namesize;
			//strcpy(road[i].roadname,road[i+1].roadname);     //字符串赋值时,不能用=,用复制
			//road[i].roadnameflag=road[i+1].roadnameflag;
			road[i]=road[i+1];     //用这种方法明显比前面的一个一个地进行复制来得快得多
		}     //最后那个需要删除的结构体就被覆盖了
		len--;    //数据都已前移,最后那个,直接删掉就行
		printf("\n\t\t删除成功!\n请保存文件!\n");
		save();
	}
	else   //如果没有找到需要删除的那个结构体
	{
		printf("\n\t额...没有找到您需要删除的那个linkId\n\t\t需要继续输入LinkId进行删除吗?\n");
		printf("\t1.YES!\n");
		printf("\t2.NO!返回主菜单\n");
		printf("\t3.退出程序\n");
		printf("\t请选择:  ");
		temp=getch();
		if(temp=='1')
		{
			system("cls");
			del();     //继续调用删除函数
		}
		else if(temp=='2')
		{
			system("cls");
			menu();   //调用主菜单
		}
		else
		{
			printexit();      //调用退出函数
		}
	}
}
void edit(void)  //编辑道路信息
{
	int i,tlinkid,count=0,temp;   //临时linkid,    判断是否找到了用户输入的道路信息     判断用户是否继续
	char troadname[100];   //临时道路名称
	printf("\n\t\t请输入您想编辑的道路的LinkId:  ");
	scanf("%d",&tlinkid);
	for(i=1; i<len; i++)
	{
		if(road[i].linkid==tlinkid)      //如果找到相等的Linkid,则继续下面的操作
		{
			printf("嘿嘿,找到您需要编辑的道路信息啦!\n");
			printf("道路总大小=%d     ",road[i].acsize);   //道路总大小
		    printf("linkid=%d     ",road[i].linkid);   //linkid
		    printf("名称大小=%d \n",road[i].namesize); //名称大小
		    printf("class番号=%d       ",road[i].dispclass);  //class番号
		    printf("岔路数=%d       ",road[i].brunch);   //岔路数
		    printf("有无路线名称=%d   ",road[i].roadnameflag);//有无路线名称
		    printf("名称%s \n\n",road[i].roadname);  //名称
			count=1;
			break;
		}
	}   
	if(count==1)
	{
		printf("\n\t\t----请输入需要将该道路怎么修改----\n\n");
		printf("\t\t道路LinkId:  ");
		scanf("%d",&road[i].linkid);
		printf("\t\t道路番号:  ");
		scanf("%d",&road[i].dispclass);
		printf("\t\t岔路数:  ");
		scanf("%d",&road[i].brunch);
		printf("\t\t道路名称  ");
		scanf("%s",troadname);            //输入道路名称
		strcpy(road[i].roadname,troadname);   //将输入的名称赋值到road[i].roadname中去
		road[i].roadnameflag=1;      //有道路名称哈 

		Sleep(500);
		printf("\n\t\t修改成功!\n");
		save();

		printf("\n\t\t是否继续输入LinkId进行其他道路信息的编辑? \n");
		printf("\t\t1.是的\n");
		printf("\t\t2.不,返回主菜单\n");
		printf("\t\t3.退出\n");
		printf("\n\t\t请选择:    ");
		temp=getch();
		if(temp=='1')    
		{
			system("cls");
			edit();
		}
		else if(temp=='2')
		{
			system("cls");
			menu();
		}
		else
		{
			printexit();
		}
	}
	else
	{
		printf("\t\t没有找到您需要找LinkId道路信息\n\n");
		printf("\t\t是否重新输入LinkId? \n");
		printf("\t\t1.是的\n");
		printf("\t\t2.不,返回主菜单\n");
		printf("\t\t3.退出\n");
		printf("\t\t请选择:    ");
		temp=getch();
		if(temp=='1')
		{
			system("cls");
			edit();
		}
		else if(temp=='2')
		{
			system("cls");
			menu();
		}
		else
		{
			printexit();
		}
	}
}
void update(void)    //更新数据
{
	//添加   删除    更改
	system("cls");
	int x,count=0;            //用户输入的选项,判断是否输入正确
	printf("\n\t\t\t----欢迎来到更新数据----\n\n");
	printf("\t\t1.添加道路\n");
	printf("\t\t2.删除道路\n");
	printf("\t\t3.更改道路\n");
	printf("\t\t4.返回主菜单\n");
	printf("请选择:(1~4)");
	do
	{
		x=getch();            //这个函数是一个不回显函数，当用户按下某个字符时，函数自动读取，无需按回车
		if(x>='1' && x<='4')    //1的ascII码是49   if(x>=49 && x<=52)也行
		{
			switch(x)
			{
				case '1':
					add();      //添加
					break;
				case '2':
					del();     //删除
					break;
				case '3':
					edit();    //编辑
					break;
				case '4': 
					system("cls");
					menu();    //主函数
					break;
				default:
					count=1;
					printf("\n输入错误!\n请重新输入:    ");
					break;
			}
		}
		else
		{
			count=1;
			printf("\n输入错误!\n请重新输入:    ");
		}
	}while(count==1);    //如果输入不正确,就让用户重新输入
}

void sort(void)      //根据LinkId大小,进行排序,由小到大
{
	int i,j;
	printf("\n\t\t正在排序,请稍后....\n");
	struct Road temp;      //定义临时结构体
	for(i=1; i<len; i++)      //冒泡排序
	{
		for(j=i+1; j<len; j++)
		{
			//printf("%d %d \n",i,j);
			if( (road[i].linkid) > (road[j].linkid) )    //大的数字到后面去
			{
				temp=road[i];
				road[i]=road[j];
				road[j]=temp;
			}
		}
	}
	printf("\n\t\t排序成功!\n");
	printf("\n\t请保存!\n");
	save();
}

void printexit(void)
{
	system("cls");
	printf("\n\t\t☆☆☆☆谢谢使用☆☆☆☆\n\n");
	printf("\n\n\t程序正在退出....\n\n");
	Sleep(900);
	exit(0);
}
void menu(void)                                           //主界面
{
	int temp,i;        //存储用户临时输入的按键
	
	do
	{
		printf("\t*********************************************************\n");
		printf("\t*\t\t\t");
		char name1[100]="电子地图管理系统";
		char name2[100]="第一小组";
		for(i=0; i<strlen(name1); i++)
		{
			Sleep(20);
			printf("%c",name1[i]);
		}
		printf("\t\t*\n");
		printf("\t*\t\t\t");
		for(i=0; i<strlen(name2); i++)
		{
			Sleep(30);
			printf("%c",name2[i]);
		}
		printf("\t\t\t*\n");
		printf("\t*********************************************************\n");
		printf("\n\t\t\t★服务项目列表★\n");
		printf("\t1.读取文件\n");
		printf("\t2.按页显示\n");
		printf("\t3.查找道路\n");
		printf("\t4.排序道路\n");
		printf("\t5.修改更新\n");
		printf("\t6.退出\n"); 
		printf("\t请选择你需要的服务："); 
		temp=getch();
		if(temp>='1' && temp<='6')
		{
			switch(temp)
			{
			case '1':
				readfile();
				break;
			case '2':
				print();
				break;
			case '3':
				find();
				break;
			case '4':
				sort();
				break;
			case '5':
				update();
				break;
			case '6':
				printexit();
				break;
			default:
				printf("\t\t输入错误,请重新输入!\n");
				break;
			}
		}
		else
		{
			printf("\t\t输入错误,请重新输入!\n");
			Sleep(900);
		}
		system("cls");
	}while(1);
	
}

void color(void)       //让用户选择颜色
{
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
	int tcolor;
	printf("\n\t\t★★★★初次见面★★★★\n\n\n");
	printf("\t\t请为程序选择一种您喜欢的颜色吧\n");
	printf("\t\t第一个为背景，第二个则为前景\n\n\n");
	printf("\n\t0.蓝白\n");
	printf("\t1.绿紫\n");
	printf("\t2.绿红\n");
	printf("\t3.红白\n");
	printf("\t4.紫绿\n");
	printf("\t5.紫白\n");
	printf("\t6.蓝灰\n");
	printf("\t7.黑白\n");
	printf("\t8.蓝绿\n\n");
	printf("\t请选择0~8:    ");
	tcolor=getch();
	switch(tcolor)
	{
		case '0':system("color 1F");break;
        case '1':system("color 2D");break;
		case '2':system("color 3C");break;
		case '3':system("color 4F");break;
		case '4':system("color 5B");break;
		case '5':system("color 8F");break;
		case '6':system("color 18");break;
		case '7':system("color 0F");break;
		case '8':system("color 12");break;
	
	default:
		system("cls");
		printf("\n\t\t^=^没有这个选项,请重新输入!^=^\n\t\t");
		Sleep(500);
		system("cls");
		color();
		break;
	}
	system("cls");
}

int main(void)
{

	color();
	menu();     //菜单
	system("pause");
	return 0;
} 
