/*
2015��5��17��19:52:54 
�ļ����� 
*/
# include <stdio.h>
# include <stdlib.h> 

//FILE *fp1,*fp2;
float size=0,avsize=0;    //�ļ���С,ƽ���ļ���С 
char buffer[100];           //freadʱ���õ� 

void dividefile(void);    //�ָ�� 
void unitefile(void);     //�ϲ����� 
int size1(char name[40],FILE *fp);   //��ȡ�ļ���С���� 
int  main(void);

void dividefile(void)    //�ָ��ļ� 
{
	FILE * fp1,*fp2;    //��Ҫ�ָ���ļ�ָ��,�ָ�õ��ļ�ָ�� 
	int m,i,d=1,t=0;
	char name[40],place[20],c;
	char *h;
	printf("����������Ҫ�򿪵��ļ�·��:");
	scanf("%s",name);
lp:
	printf("���뽫���ļ��ָ�ɼ����ļ�:"); 
	scanf("%d",&m);
	if(m<1)
	{
		printf("��������Ŷ,��!��������ȷ������.");
		goto lp;
	}
	else if(m>=1) 
	{
		for(i=0; i<m ;i++)     //��name�Ǹ�·���ļ��ֳ�m�ݷŵ�place·����
		{
			if(t==0)
			{
				size = size1(name,fp1);      //����size1����,�鿴name(��Ҫ�ָ���ļ��Ĵ�С)
				avsize = size/(float)m;      //����ƽ����С 
				printf("����ָ���ļ���СΪ%.0fbite,�ָ��%d��֮��,ÿ�ݴ�СΪ%.0fbite\n",size,m,avsize); 
				if((fp1=fopen(name,"rb"))==NULL)
				{
					printf("Can't open file!");
					exit(0);
				} 
		    }
oo:
			printf("���������뽫�ָ��ĵ�%d���浽�ĸ�·��",i+1);
			scanf("%s",place);     //�ָ�õ��ļ��ŵ�·�� 
			if((fp2=fopen(place,"wb"))==NULL)
			{
				printf("Ȼ����û����������Ǹ�·��,��,�Ƿ���������?");
				{
					c = getchar();
					if(c=='Y' || c=='y')
					  goto  oo;
					else
					{
						fclose(fp1);
						main();     //�����������ͷ��������� 
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
					fputc(ll,fp2);    //fp1д��fp2 
					d++;
				}
			}/*
			else
			{
				while(fread(h,1,1,fp2))   //������,ÿ��Ԫ��1���ֽ�,ÿ������1��,��fp2�� 
                {
                   fwrite(h,1,1,fp1);
                }
			}*/
		}
		printf("\n�ļ��ָ��Ѿ����,��л����ʹ��!\n");
	} 
	fclose(fp1);
	fclose(fp2); 
}

void unitefile(void)     //�ϲ��ļ� 
{
	FILE * fp1,*fp;       //��Ҫ�ϲ����ļ�,�ϲ��õ��ļ�ָ�� 
	char c,t;               //��ʱ�ַ� 
	char name1[40],name[40];  //��Ҫ�ϲ����ļ���·��, �ϲ��õ��ļ���·��
hh: 
	printf("����������Ҫ�ϲ��ɵ��ļ�����·��:");
	scanf("%s",name);
	if((fp=fopen(name,"wb"))==NULL)    //�����Ƿ��ܴ��ļ� 
	{
		printf("Ȼ�������ļ�ʧ��!\n"); 
		printf("��Ҫ����������?(y/n)\n");
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
		printf("����������Ҫ�ϲ��ĵ�%d���ļ�·��:",i);
		scanf("%s",name1);
		printf("������ļ��Ĵ�СΪ:%d bite\n",size1(name1,fp1));
		if((fp1=fopen(name1,"r"))==NULL)    //�����Ƿ��ܴ��ļ� 
		{
			printf("Ȼ�������ܴ����������·������Ӧ�ļ�!\n"); 
			printf("��Ҫ����������?(y/n)\n");
			c=getchar();
			if(c=='y' || c=='Y')
			{
				goto pp;
			}
			else
			  exit(0);
		}
		/*
		while(!feof(fp1))     //�������Ҳ�ɽ��ļ��ϲ�,�����ļ�ĩβ��һ���ֽ�,�Ҳ�,��֪Ϊ�� 
		{
			c=getc(fp1);
			fputc(c,fp);
		}*/
		while(fread(buffer,1,1,fp1))//��һ���ļ����ж����ݣ�����ȡcount��Ԫ�أ�
		       //ÿ��Ԫ��size�ֽڣ�������óɹ�����ʵ�ʶ�ȡ����Ԫ�ظ�����������ɹ�������ļ�ĩβ���� 0
		       //����butter Ҫ���ַ��������,��֪Ϊ��   ÿ��Ԫ��1���ֽ�,ÿ������1��,��fp2��
            fwrite(buffer,1,1,fp);
		i++; 
		fclose(fp1);
		printf("��������ϲ���%d���ļ���?(y/n)\n",i);
		scanf(" %c",&t); 
		if(t=='Y' || t=='y')
		  goto pp;
		else 
		  break;
	}while(1);
	printf("�ϳ��ļ��ɹ�!ллʹ��!�ټ�!"); 
}

int size1(char name[40],FILE *fp)   //�ļ���С����,�����ļ���С,����ƽ���ָ��ļ��Ĵ�С 
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
	return size-1;     //�ո�size��+��һ�� 
}

int  main(void)
{
	int n;
	printf("��ѡ��:\n");
	printf("\t1.�ָ��ļ�\n");
	printf("\t2.�ϲ��ļ�\n");
	printf("\t3.�˳�\n");
la:                    //�������������Ҫ���������� 
	printf("Please choose you needful file(1~3):"); 
	scanf("%d",&n);
	if(n<=3 && n>=1)
	{
	   switch(n) 
	   {
	   	case 1:
	   		dividefile();     //�ָ��ļ� 
	   		break;
	   	case 2:
	   	    unitefile();     //�ϲ��ļ� 
			break;
		case 3:
		    exit(0);
			break;
		default: exit(0);	
	   }		
	}
	else
	{
		printf("�����д�Ŷ! ��,����������.\n");
		goto la;     //���������ѡ������ȥ 
	}
	
	return 0;
} 
