# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <conio.h>      //����getch()������
# include <Windows.h>    //����Sleep()������

// �����ֽ�������·�����ֽ�����Ȼ��������һһ��Ӧ��

/*�궨��,�ַ���ת��Ϊ��ֵ*/
#define MCGETCHAR(data)  (*((char *)(data))) 

#define MCGETSHORT(data)  ((unsigned short)(( ((unsigned short)(*((char *)(data))))<<8 )|( ((unsigned short)(*((char *)(data)+1)))&0x00ff ))) 


//��ת��Ϊlong��,��������16λ, 
#define MCGETLONG(data)  ( ( ((unsigned long)MCGETSHORT((data)))<<16 )|( ((unsigned long)MCGETSHORT((char *)(data)+2))&0x0000ffff ) ) 

#define MCGET3BN(data)  ( ( ((unsigned long)MCGETCHAR((data)))<<16 )|( ((unsigned long)MCGETSHORT((char *)(data)+1))&0x0000ffff ) ) 

struct Road
{
	int acsize;        //��·��Ϣ�ܴ�С
	int linkid;        //linkid
	int namesize;      //���ƴ�С
	int dispclass;     //class ����
	int brunch;        //��·��
	int roadnameflag;  //����·������
	char roadname[100];//����
}road[1000];

int len=1;          //���鳤��
/*
�޷���2byte			�����¼��Size	ע�⣺�����ļ��е����ݴ�ŷ�ʽ�Ǵ��������0019,��intel��������С������Ҫ��0x0019תΪ0x1900      �����ֵ(ʮ����25)										
�޷��ţ�byte			LinkID															
�޷���2byte			��·���Ƶ�Size															
�޷��ţ�byte			ʼ��Node���鱨															
			31-8	Reserved														Ԥ����
			7	·����������Flag														
			6-4	��·��														
			3-0	����Link�б�ʾClass����														
�ַ���	���Ȳ���		��·�����ַ���															
*/ 
/*
void readfile(void)                    //��ȡ�ļ�
{
	FILE *fp;
	if((fp=fopen("D://file//1.dat","r"))==NULL)
	{
		printf("\n\t\tFile can't be opened\n");
		exit(0);
	}
	char actotalsize[2];       //�õ�·�����ܹ�ռ���ֽ���
	char aclinkid[4];          //��·ID
	char acroadnamesize[2];   //��·���ƴ�С
	char acnodeinfo[4];       //������4����Ϣ
	while(fread( actotalsize , sizeof(actotalsize) , 1 , fp ) )
	{                                             //��ȡǰ2���ֽ�,�ܹ���С
		fread( aclinkid , sizeof(aclinkid) , 1 , fp ) ;         //��ȡռ��4�ֽڵ�linkId�ַ�����
		fread( acroadnamesize , sizeof(acroadnamesize) , 1 , fp ) ;
								 //��ȡռ��2�ֽڵ�roadnamesize�ַ�����
		fread( acnodeinfo , sizeof(acnodeinfo) , 1 , fp ) ;     
								//��ȡռ��4 �ֽڵ�dispclass �� brunch �� �� roadnameflag�ַ��� ��

			unsigned short ustotalsize;       
			//��actotalsize,�ܴ�С      �ѳɹ� 
			char t; 
			t = actotalsize[0];      //������λ�͵�λ 
			actotalsize[0]=actotalsize[1];
			actotalsize[1]=t;
			ustotalsize=(unsigned short)actotalsize[0];
            //printf("%d ",ustotalsize);
            
			unsigned long  ullinkId;         //�淬��
			
            //��LinkId 
            //char  t1,t2;
			t = aclinkid[0];      //������λ�͵�λ 
			aclinkid[0]=aclinkid[3];
			aclinkid[3]=t;
			t = aclinkid[1];      //������λ�͵�λ 
			aclinkid[1]=aclinkid[2];
			aclinkid[2]=t;
			ullinkId=(unsigned long)aclinkid[0]+(unsigned long)aclinkid[1]+(unsigned long)aclinkid[2]+(unsigned long)aclinkid[3];
			printf("%ld \n",ullinkId);

			unsigned short usroadnamesize = MCGETSHORT( acroadnamesize ) ;  //�����ƴ�С
 
			                    //��ֵ ������ֵ��Ϣ�����ṹ����  ��
			road[len].acsize = ustotalsize ;       //�ܴ�С
			road[len].linkid = ullinkId ;         //Id
			if(usroadnamesize==0 || usroadnamesize==65535)                //�жϵ�·���ƴ�С�Ƿ�Ϊ0
			{
				road[len].namesize=0;          //���ƴ�С
			}
			else
			{
				road[len].namesize = usroadnamesize;
			}
 
							   //��һ���ֽ��ж�ȡdispclass �� brunch �Լ�roadnameflag��ֵ 
		 int m=(int)acnodeinfo[3]&255;     //������8λ,ǰ8λ��0        0000 0000 1111 1111(255)
		 road[len].dispclass=m&15;        //2^4   class���ŵ�0~3λ   0000 1111(15)
		 road[len].brunch=(m&112)/16;           //��4~6λ
		 road[len].roadnameflag=(m&128)/128;    //��7λ
							  //���ļ��ж�ȡ��·���� ��
		 fread(road[len].roadname,sizeof(char),ustotalsize-12,fp);   // ��ַ,��С,����,������
		 len++;
		
	}
	fclose(fp);
	//printf("\n\t\t��ȡ�ļ��ɹ�!\n\n");
	//Sleep(900);
}
*/
int  total=0;
char temp[40];
int Judge(int a,int b);
void Read() //��ȡ�ļ�
{   
	FILE *fp;
	if((fp=fopen("D://file//1.dat","r"))==NULL)
	{
		printf("�޷��ҵ��ļ�");
		exit(1);
	}
	
	char ch ;
	ch=fgetc(fp);    //��һ���ֽ��ǿյ�
	//while((ch=fgetc(fp))!=EOF)//��ȡ��һ�������У��ٰ�ֵ�������и��ṹ�� 
	//{		
		fgets(temp,2,fp);   //�ٶ�1���ֽڵ�temp��   �ڶ����ֽڲ�����ֵ��      ��һ��(ǰ2�ֽ�)�ǵ�·��Ϣ�ܴ�С
		int x=temp[0];      //��·��Ϣ�ܴ�С
		printf("%d \n",x);
		fgets(&temp[2],10,fp);  //�ٶ�10���ֽڵ�temp��  3~12    �м�10���ֽ�
		int c=fgetc(fp);        //�ٶ�һ���ֽ�
		printf("%d \n",c);
		fgets(&temp[12],x-11,fp);   //��������    ��С=�ܴ�С-11    �����ƴ浽��12��ʼ��������
		road[len].linkid=Judge(5,1);
		printf("%d \n",road[len].linkid);
		road[len].roadnameflag=(c&128)>>7;     //���޵�·���� ��7λ ,������7λ
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
int Judge(int a,int b) //����ת��
{
	int sum=0,n=1;
	for(int i=a;i>b;i--)
	{
		sum=sum+temp[i]/16*16*n+temp[i]%16*n;
		n=n*256;
	}
	return sum;
}

void save(void)              //�洢
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
		fprintf(fp,"%s %d ","Linkclass=",road[i].dispclass); //class ����
		fprintf(fp,"%s %d ","brunch=",road[i].brunch);        //��·��
		fprintf(fp,"%s %d ","roadnameflag=",road[i].roadnameflag);//����·������
		fprintf(fp,"%s %s \n","roadname:",road[i].roadname);//����
	}
	fclose(fp);
	printf("�����ѳɹ�����%s!\n",filename);
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