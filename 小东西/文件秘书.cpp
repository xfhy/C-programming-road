/*
2015年5月17日19:52:54 
文件秘书 
*/
# include <stdio.h>
# include <stdlib.h> 

//FILE *fp1,*fp2;
float size=0,avsize=0;    //文件大小,平均文件大小 
char buffer[100];           //fread时会用到 

void dividefile(void);    //分割函数 
void unitefile(void);     //合并函数 
int size1(char name[40],FILE *fp);   //读取文件大小函数 
int  main(void);

void dividefile(void)    //分割文件 
{
	FILE * fp1,*fp2;    //需要分割的文件指针,分割好的文件指针 
	int m,i,d=1,t=0;
	char name[40],place[20],c;
	char *h;
	printf("请输入您需要打开的文件路径:");
	scanf("%s",name);
lp:
	printf("您想将该文件分割成几个文件:"); 
	scanf("%d",&m);
	if(m<1)
	{
		printf("输入有误哦,亲!请输入正确的数字.");
		goto lp;
	}
	else if(m>=1) 
	{
		for(i=0; i<m ;i++)     //将name那个路径文件分成m份放到place路径中
		{
			if(t==0)
			{
				size = size1(name,fp1);      //调用size1函数,查看name(需要分割的文件的大小)
				avsize = size/(float)m;      //计算平均大小 
				printf("您想分割的文件大小为%.0fbite,分割成%d份之后,每份大小为%.0fbite\n",size,m,avsize); 
				if((fp1=fopen(name,"rb"))==NULL)
				{
					printf("Can't open file!");
					exit(0);
				} 
		    }
oo:
			printf("请输入您想将分割后的第%d个存到哪个路径",i+1);
			scanf("%s",place);     //分割好的文件放的路径 
			if((fp2=fopen(place,"wb"))==NULL)
			{
				printf("然而并没有您输入的那个路径,亲,是否重新输入?");
				{
					c = getchar();
					if(c=='Y' || c=='y')
					  goto  oo;
					else
					{
						fclose(fp1);
						main();     //如果不想继续就返回主函数 
					}
				} 
			} 
		    t++;
			d=1;
			char ll; 
			if(i!=m)
			{
				while(d<=avsize)
				{
					ll = fgetc(fp1);
					fputc(ll,fp2);    //fp1写到fp2 
					d++;
				}
			}/*
			else
			{
				while(fread(h,1,1,fp2))   //读数据,每个元素1个字节,每次最多读1个,从fp2中 
                {
                   fwrite(h,1,1,fp1);
                }
			}*/
		}
		printf("\n文件分割已经完成,感谢您的使用!\n");
	} 
	fclose(fp1);
	fclose(fp2); 
}

void unitefile(void)     //合并文件 
{
	FILE * fp1,*fp;       //需要合并的文件,合并好的文件指针 
	char c,t;               //临时字符 
	char name1[40],name[40];  //需要合并的文件的路径, 合并好的文件的路径
hh: 
	printf("请输入您需要合并成的文件放入路径:");
	scanf("%s",name);
	if((fp=fopen(name,"wb"))==NULL)    //测试是否能打开文件 
	{
		printf("然而生成文件失败!\n"); 
		printf("您要重新输入吗?(y/n)\n");
		c=getchar();
		if(c=='y' || c=='Y')
		{
			goto hh;
		}
		else
		  exit(0);
	}  
	int i=1; 
	do
	{
pp:
		printf("请输入您需要合并的第%d个文件路径:",i);
		scanf("%s",name1);
		printf("您这个文件的大小为:%d bite\n",size1(name1,fp1));
		if((fp1=fopen(name1,"r"))==NULL)    //测试是否能打开文件 
		{
			printf("然而并不能打开你所输入的路径的相应文件!\n"); 
			printf("您要重新输入吗?(y/n)\n");
			c=getchar();
			if(c=='y' || c=='Y')
			{
				goto pp;
			}
			else
			  exit(0);
		}
		/*
		while(!feof(fp1))     //这个代码也可将文件合并,但是文件末尾多一个字节,我擦,不知为何 
		{
			c=getc(fp1);
			fputc(c,fp);
		}*/
		while(fread(buffer,1,1,fp1))//从一个文件流中读数据，最多读取count个元素，
		       //每个元素size字节，如果调用成功返回实际读取到的元素个数，如果不成功或读到文件末尾返回 0
		       //这里butter 要是字符数组才行,不知为何   每个元素1个字节,每次最多读1个,从fp2中
            fwrite(buffer,1,1,fp);
		i++; 
		fclose(fp1);
		printf("您想继续合并第%d个文件吗?(y/n)\n",i);
		scanf(" %c",&t); 
		if(t=='Y' || t=='y')
		  goto pp;
		else 
		  break;
	}while(1);
	printf("合成文件成功!谢谢使用!再见!"); 
}

int size1(char name[40],FILE *fp)   //文件大小函数,计算文件大小,计算平均分割文件的大小 
{
	char c; 
	if((fp=fopen(name,"rb"))==NULL)
	{
		printf("Can't open file!");
		exit(0);
	} 
	while(!feof(fp))
	{
		c=getc(fp);
		size++;
	}
	rewind(fp);
	fclose(fp);
	return size-1;     //刚刚size多+了一下 
}

int  main(void)
{
	int n;
	printf("请选择:\n");
	printf("\t1.分割文件\n");
	printf("\t2.合并文件\n");
	printf("\t3.退出\n");
la:                    //下面的输入错误后要跳到这里来 
	printf("Please choose you needful file(1~3):"); 
	scanf("%d",&n);
	if(n<=3 && n>=1)
	{
	   switch(n) 
	   {
	   	case 1:
	   		dividefile();     //分割文件 
	   		break;
	   	case 2:
	   	    unitefile();     //合并文件 
			break;
		case 3:
		    exit(0);
			break;
		default: exit(0);	
	   }		
	}
	else
	{
		printf("输入有错哦! 亲,请重新输入.\n");
		goto la;     //跳到上面的选择那里去 
	}
	
	return 0;
} 
