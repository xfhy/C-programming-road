# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <conio.h>      //包含getch()的声明
# include <Windows.h>    //包含Sleep()的声明

// 两个字节是那条路的总字节数，然后其他的一一对应。

/*宏定义,字符串转换为数值*/
#define MCGETCHAR(data)  (*((char *)(data))) 

#define MCGETSHORT(data)  ((unsigned short)(( ((unsigned short)(*((char *)(data))))<<8 )|( ((unsigned short)(*((char *)(data)+1)))&0x00ff ))) 


//先转换为long型,再向左移16位, 
#define MCGETLONG(data)  ( ( ((unsigned long)MCGETSHORT((data)))<<16 )|( ((unsigned long)MCGETSHORT((char *)(data)+2))&0x0000ffff ) ) 

#define MCGET3BN(data)  ( ( ((unsigned long)MCGETCHAR((data)))<<16 )|( ((unsigned long)MCGETSHORT((char *)(data)+1))&0x0000ffff ) ) 

struct Road
{
	int acsize;        //道路信息总大小
	int linkid;        //linkid
	int namesize;      //名称大小
	int dispclass;     //class 番号
	int brunch;        //岔路数
	int roadnameflag;  //有无路线名称
	char roadname[100];//名称
}road[1000];

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
/*
void readfile(void)                    //读取文件
{
	FILE *fp;
	if((fp=fopen("D://file//1.dat","r"))==NULL)
	{
		printf("\n\t\tFile can't be opened\n");
		exit(0);
	}
	char actotalsize[2];       //该道路数据总共占的字节数
	char aclinkid[4];          //道路ID
	char acroadnamesize[2];   //道路名称大小
	char acnodeinfo[4];       //最后的那4个信息
	while(fread( actotalsize , sizeof(actotalsize) , 1 , fp ) )
	{                                             //读取前2个字节,总共大小
		fread( aclinkid , sizeof(aclinkid) , 1 , fp ) ;         //读取占用4字节的linkId字符串；
		fread( acroadnamesize , sizeof(acroadnamesize) , 1 , fp ) ;
								 //读取占用2字节的roadnamesize字符串；
		fread( acnodeinfo , sizeof(acnodeinfo) , 1 , fp ) ;     
								//读取占用4 字节的dispclass ， brunch ， 和 roadnameflag字符串 ；

			unsigned short ustotalsize;       
			//求actotalsize,总大小      已成功 
			char t; 
			t = actotalsize[0];      //交换高位和低位 
			actotalsize[0]=actotalsize[1];
			actotalsize[1]=t;
			ustotalsize=(unsigned short)actotalsize[0];
            //printf("%d ",ustotalsize);
            
			unsigned long  ullinkId;         //存番号
			
            //求LinkId 
            //char  t1,t2;
			t = aclinkid[0];      //交换高位和低位 
			aclinkid[0]=aclinkid[3];
			aclinkid[3]=t;
			t = aclinkid[1];      //交换高位和低位 
			aclinkid[1]=aclinkid[2];
			aclinkid[2]=t;
			ullinkId=(unsigned long)aclinkid[0]+(unsigned long)aclinkid[1]+(unsigned long)aclinkid[2]+(unsigned long)aclinkid[3];
			printf("%ld \n",ullinkId);

			unsigned short usroadnamesize = MCGETSHORT( acroadnamesize ) ;  //存名称大小
 
			                    //赋值 ：将数值信息传到结构体中  ；
			road[len].acsize = ustotalsize ;       //总大小
			road[len].linkid = ullinkId ;         //Id
			if(usroadnamesize==0 || usroadnamesize==65535)                //判断道路名称大小是否为0
			{
				road[len].namesize=0;          //名称大小
			}
			else
			{
				road[len].namesize = usroadnamesize;
			}
 
							   //从一个字节中读取dispclass ， brunch 以及roadnameflag的值 
		 int m=(int)acnodeinfo[3]&255;     //保留后8位,前8位清0        0000 0000 1111 1111(255)
		 road[len].dispclass=m&15;        //2^4   class番号第0~3位   0000 1111(15)
		 road[len].brunch=(m&112)/16;           //第4~6位
		 road[len].roadnameflag=(m&128)/128;    //第7位
							  //从文件中读取道路名称 ；
		 fread(road[len].roadname,sizeof(char),ustotalsize-12,fp);   // 地址,大小,分数,数据流
		 len++;
		
	}
	fclose(fp);
	//printf("\n\t\t读取文件成功!\n\n");
	//Sleep(900);
}
*/
int  total=0;
char temp[40];
int Judge(int a,int b);
void Read() //读取文件
{   
	FILE *fp;
	if((fp=fopen("D://file//1.dat","r"))==NULL)
	{
		printf("无法找到文件");
		exit(1);
	}
	
	char ch ;
	ch=fgetc(fp);    //第一个字节是空的
	//while((ch=fgetc(fp))!=EOF)//读取到一个数组中，再把值从数组中给结构体 
	//{		
		fgets(temp,2,fp);   //再读1个字节到temp里   第二个字节才是有值的      第一个(前2字节)是道路信息总大小
		int x=temp[0];      //道路信息总大小
		printf("%d \n",x);
		fgets(&temp[2],10,fp);  //再读10个字节到temp里  3~12    中间10个字节
		int c=fgetc(fp);        //再读一个字节
		printf("%d \n",c);
		fgets(&temp[12],x-11,fp);   //最后读名称    大小=总大小-11    把名称存到从12开始的数组里
		road[len].linkid=Judge(5,1);
		printf("%d \n",road[len].linkid);
		road[len].roadnameflag=(c&128)>>7;     //有无道路名称 第7位 ,向右移7位
		printf("%d \n",road[len].roadnameflag);
		road[len].brunch=(c&112)>>4;
		printf("%d \n",road[len].brunch);
		road[len].dispclass=c&15;
		printf("%d \n",road[len].dispclass);
		strcpy(road[len].roadname,&temp[12]);
		printf("%s \n",road[len].roadname);
/*		printf("LinkId:%d\tRoadnameflag:%d\tBrunch:%d\tDispclass:%d\t",roads[total].Linkid,roads[total].Roadnameflag,roads[total].Brunch,roads[total].Dispclass,roads[total].Roadname);
		if(roads[total].Roadnameflag==1) printf("Roadname:%s\n",roads[total].Roadname);
		else printf("\n");
*/		len++;

	//}
	printf("\n%d\n",len); 
	return;
}    
int Judge(int a,int b) //进制转换
{
	int sum=0,n=1;
	for(int i=a;i>b;i--)
	{
		sum=sum+temp[i]/16*16*n+temp[i]%16*n;
		n=n*256;
	}
	return sum;
}

void save(void)              //存储
{
	FILE *fp;
	char filename[100]="D://file//6666.txt";
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("File can't be opened\n");
		exit(0);
	}
	int i;
	for(i=1; i<=len; i++)
	{
		fprintf(fp,"%s %d ","LinkId=",road[i].linkid);    //Id
		fprintf(fp,"%s %d ","Linkclass=",road[i].dispclass); //class 番号
		fprintf(fp,"%s %d ","brunch=",road[i].brunch);        //岔路数
		fprintf(fp,"%s %d ","roadnameflag=",road[i].roadnameflag);//有无路线名称
		fprintf(fp,"%s %s \n","roadname:",road[i].roadname);//名称
	}
	fclose(fp);
	printf("数据已成功存入%s!\n",filename);
	//Sleep(900);
}

int main(void)
{
	Read();
	save();
	int sum=Judge(5,1);
	printf("%d ",sum);
	system("pause");
	
	return 0;
}