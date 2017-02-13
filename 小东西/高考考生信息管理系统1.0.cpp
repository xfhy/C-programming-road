/*
2015��4��30��19:18:13
ѧ����Ϣ����ϵͳ 
*/
# include <stdio.h>
# include <Windows.h>        
# include <stdlib.h>         
# include <string.h>        
# include <malloc.h>

struct student          
{
	int num;           //�߿�ѧ�� 
	char name[10];     //���� 
	float english;     //Ӣ�� 
	float math;        //��ѧ
	float chinese;     //���� 
	float cssa;        //���� 
}st[100];              //������װ100��ѧ����Ϣ  �ǵýṹ��򶺺� 

int n=0;
void add();           //�������ֺ���    ��� 
void revise();        //�޸� 
void output();        //��� 
void del();           //ɾ�� 
void inqu();          //��ѯ 
void input();         //���� 
void count();         //ͳ�� 
void save(int m);          //�洢 
int load();                //���뺯��     �����ļ���ԭ����ѧ��(�ṹ��)���� 

void menu(void)            //�������� 
{
	system("color 75");
	/*��ɫ����������ʮ����������ָ��
	-- ��һ��Ϊ�������ڶ�����Ϊǰ����

	ÿ�����ֿ���Ϊ�����κ�ֵ֮һ:    
	0 = ��ɫ   8 = ��ɫ  
	1 = ��ɫ   9 = ����ɫ    
	2 = ��ɫ   A = ����ɫ    
	3 = ǳ��ɫ B = ��ǳ��ɫ    
	4 = ��ɫ   C = ����ɫ   
	5 = ��ɫ   D = ����ɫ  
	6 = ��ɫ   E = ����ɫ  
	7 = ��ɫ   F = ����ɫ	*/  
	printf("\n  (=^_^=)     ************ȫ�¸߿�������Ϣ����ϵͳ************\t(=^_^=)\n");
	printf("\n\t������:��纮��\n"); 
	printf("\n\t\t1.����ѧ����Ϣ");
	printf("\t\t2.���ѧ����Ϣ\n");
	printf("\t\t3.�޸�ѧ����Ϣ");
	printf("\t\t4.ɾ��ѧ����Ϣ\n");
	printf("\t\t5.��ѯѧ����Ϣ");
	printf("\t\t6.���ѧ����Ϣ\n"); 
	printf("\t\t7.ͳ��ѧ����Ϣ");
	printf("\t\t8.�˳�ϵͳ\n\n"); 
	printf("\t\t**************ллʹ��(>^-^<)****************\n");
} 

int main(void)
{
	int x,t,p;
	char c;
	system("title ��纮������"); 
	system("cls"); 
	menu();          //��ʾ���˵� 
	printf("Please select(1~~8):"); 
	while(1)
	{
		scanf("%d",&x);
		if(x>=1 && x<=8)
		{ 
			switch(x)
			{
				case 1:
					printf("            ******����ѧ����Ϣ******\n");
					input();        //���� 
					break;
				case 2:
					printf("            ******���ѧ����Ϣ******\n");
					system("cls");
					output();       //��� 
				    break; 
				case 3:
					printf("            ******�޸�ѧ����Ϣ******\n");
					revise();       //�޸� 
					break;
				case 4:
					printf("            ******ɾ��ѧ����Ϣ******\n");
					del();          //ɾ�� 
				    break;
				case 5:
					printf("            ******��ѯѧ����Ϣ******\n");
					inqu();         //��ѯ
				    break; 
				case 6:
					printf("            ******���ѧ����Ϣ******\n");
					add();          //��� 
					break;
				case 7:
					printf("            ******ͳ��ѧ����Ϣ******\n");
					count();       //ͳ�� 
				    break; 
				case 0:              //������Ͻ����û��,��ѡ��� 
					exit(0);         //�˳� 
				default :break;
	        }
	    }
	    else
	    {
	    	printf("\t��������Ŷ!\n");
	    	printf("\t1.�˳���ϵͳ\n");
	    	printf("\t2.��������!\n");
	    	printf("\n��ѡ��:\n");
	    	scanf("%d",&t);
	    	if(t==1)
	    	  exit(0);         //�˳� 
	    	else if(t==2)
	    	  main();          //���������� 
		}
		getchar();        //��ȡ�����ڻ�������'\n'    ���涼��������� 
	    printf("\n\nDo you want to continue?(y ~ n)\n");
	    scanf("%c",&c);
	    getchar();
		if(c=='y')     //����û�����y��ô����while������,δ�˳�ѭ�� 
		{
			system("cls");       //���� 
			menu();              //������ʾ�����溯��
			printf("Please select again(1~~7):"); 
		} 
		else            //�����y,�˳�ѭ�� 
		  exit(0);
    }
    
	return 0; 
} 

void input(void)             //���뺯�� 
{
	int i;
	printf("\n�������뼸��ѧ����Ϣ:\n");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("�������%d��ѧ���Ŀ���:",i);
		scanf("%d",&st[i].num);
		printf("�������%d��ѧ��������:",i);
		scanf("%s",&st[i].name);
		printf("�������%d��ѧ������ѧ�ɼ�:",i);
		scanf("%f",&st[i].math);
		printf("�������%d��ѧ����Ӣ��ɼ�:",i);
		scanf("%f",&st[i].english);
		printf("�������%d��ѧ�������ĳɼ�:",i);
		scanf("%f",&st[i].chinese);
		printf("�������%d��ѧ�������۳ɼ�:",i);
		scanf("%f",&st[i].cssa);
	}
	save(n);         //����Ϊ�ļ� 
}

void output(void)              //������� 
{
	int i;
	system("cls");
	int m = load();       //���ǰҪ��֪���ļ����м����ṹ�� 
	printf("\nѧ����Ϣ����:\n");
	printf("����\t����\t��ѧ\tӢ��\t����\t����\n");
	for(i=1; i<=m; i++)
	{
	  printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n",     //��Ϊ����д 
	  st[i].name,st[i].num,st[i].math,st[i].english,st[i].chinese,st[i].cssa);
	} 
}

void del(void)             //ɾ������ 
{
	system("cls");
	int i,j,k,t=0,b;
	n = load();               //ɾ��֮ǰҪ��֪���м����ṹ�� 
	output();                 //ɾ��ǰ���û�����ԭ����ѧ����Ϣ 
	printf("\n��������Ҫɾ�����Ǹ�ѧ���Ŀ���:");
	scanf("%d",&j);
	for(i=1; i<=n; i++)
	{
		if(j==st[i].num)        //�ҵ���Ҫɾ���Ľṹ��,�ú���Ľṹ��ֱ�Ӹ����� 
		{
			printf("\n���ҵ����ˣ�ԭʼ��¼Ϊ��\n"); 
			printf("����\t����\t��ѧ\tӢ��\t����\t����\n");
			printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n",     //��Ϊ����д 
	          st[i].name,st[i].num,st[i].math,st[i].english,
			   st[i].chinese,st[i].cssa);
			printf("\nȷ��ɾ��������1\nȡ��ɾ���밴0\n");
			scanf("%d",&b);
			if(b==1)
			{
				t = 1;   //�û�ȷ��ɾ����ͼ��ٽṹ���� 
				for(k=i; k<n; k++)
				{
					st[k] = st[k+1];     //�ҵ���ֱ�Ӹ���(�ṹ��֮��ĸ���) 
				}
			}
			else
				main(); 
			break;   //ɾ����i�������ѭ�� 
		}
	}
	if(t==1)
	  n--;             //ɾ����ṹ�����
	save(n);         //�������� 
	output(); 
}

void revise(void)              //�޸�
{
	int i,k;
	n = load(); 
	output(); 
	printf("\n��������Ҫ�޸ĵ��Ǹ�ѧ���Ŀ���:");
	scanf("%d",&k);
	for(i=1; i<=n; i++)
	{
		if(k==st[i].num)
		  break; 
	} 
	if(k==n+1)
		printf("ԭ������û���ҵ�������ҵ�ѧ��....");
	else
	{
		printf("���������ѧ�����¿���:");
		scanf("%d",&st[i].num);
		printf("���������ѧ��������:");
		scanf("%s",&st[i].name);
		printf("���������ѧ��������ѧ�ɼ�:");
		scanf("%f",&st[i].math);
		printf("���������ѧ������Ӣ��ɼ�:",i);
		scanf("%f",&st[i].english);
		printf("���������ѧ���������ĳɼ�:",i);
		scanf("%f",&st[i].chinese);
		printf("���������ѧ���������۳ɼ�:",i);
		scanf("%f",&st[i].cssa);
	} 
	save(n);           //�޸ĺ�ǵñ��� 
} 

void inqunum(void)             //����ѧ�Ų�ѯ 
{
	int i,k;
	printf("��������Ҫ���ҵĿ���:");
	scanf("%d",&k);
	n = load(); 
	for(i=1; i<=n; i++)
	{
		if(k==st[i].num)
		  break;
	}
	if(i==n+1)
		printf("\nԭ������û���ҵ�������ҵ�ѧ��....\n");
	else
	{
		printf("\n�ҵ���! ��ѧ����ϢΪ:\n");
		printf("����\t����\t��ѧ\tӢ��\t����\t����\n");
		printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n",
			st[i].name,st[i].num,st[i].math,st[i].english,
			st[i].chinese,st[i].cssa);
	} 
} 

void inqunam(void)     //������������ 
{
	int i;
	char nam[10];
	printf("\n��������Ҫ���ҵ�����:");
	scanf("%s",nam);
	for(i=1; i<=n; i++)
	{
		if(strcmp(st[i].name,nam)==0)   //������ַ�����ṹ����name��� 
		{
		    printf("\n�ҵ���! ��ѧ����ϢΪ:\n");
		    printf("����\t����\t��ѧ\tӢ��\t����\t����\n");
			printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n",
			  st[i].name,st[i].num,st[i].math,st[i].english,
			  st[i].chinese,st[i].cssa);
		    break;
	    }
	}
	if(i==n+1)
	  printf("\n���޴���....\n");
} 

void inqu(void)      //��ѯ 
{
	int i,x,t;
	char nam[10],c;
	system("cls");
	printf("\t\t$$$$��ӭ������ѯС���$$$$\n"); 
	printf("\t1.�����Ų���\n");
	printf("\t2.����������\n");
	{
		printf("    Please select(1~~3):");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				inqunum();    //���ð����Ų��Һ��� 
				break; 
			case 2:
				inqunam();    //���ð��������Һ���
			    break; 
			case 0:
				exit(0);
		}
		printf("\n���������\n");
		printf("\t1.�ص����˵�\n");
		printf("\t2.��������\n");
		printf("\n��ѡ��:");
		scanf("%d",&t);
		if(t==1)
		  main();             //���������� 
		else if(t==2)
		  inqu();             //�����Լ� 
    }
}

void add(void)            //��ӽṹ�� 
{
	output(); 
	int i,num,x,j;
	n = load();          //�����֮ǰ����Ҫ֪��ԭ����ѧ������ 
	char name[10];
	float k;
	printf("\n\n��������Ҫ��Ӽ���ѧ����Ϣ:");
	scanf("%d",&x);
	for(i=n+1; i<=n+x; i++)     //ֻ�����x��ѧ��,����ǰ��n���� 
	{
		printf("\n�����뿼��:");
		scanf("%d",&num);
		for(j=1; j<=n; j++)     //�����ǰ��n���ṹ�����������������ʾ�û� 
		{
			if(st[j].num==num)
			{
				printf("\n���д���! ���������뿼��!\n");
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
		printf("\n����������:");
		scanf("%s",name);
		getchar();
		strcpy(st[i].name,name); 
		printf("\n��������ѧ�ɼ�:");
		scanf("%f",&k);
		st[i].math = k;
		printf("\n������Ӣ��ɼ�:");
		scanf("%f",&k);
		st[i].english = k;
		printf("\n���������ĳɼ�:");
		scanf("%f",&k);
		st[i].chinese = k;
		printf("\n���������۳ɼ�:");
		scanf("%f",&k);
		st[i].cssa = k;
	}
	n=n+x;                        //�ṹ��������� 
	system("cls");               //���� 
	printf("\n�����Ӻ��ѧ����Ϣ\n");
	save(n);
	output();                   //�����������
}

void count(void)           //ͳ�� 
{
	int i,j,x;
	float l;
	//FILE * fp;
	//if((fp = fopen("d:\\txt\\student.txt","wb"))==NULL)
	//{
	//	printf("Can't open this file!");
	//	exit(0);
	//}
	struct student t;     //������ʱ���� 
	n = load(); 
	printf("����ѧ������:%d\n",n);
	float *a = (float *)malloc(sizeof(struct student) * (n+1));   //�±����Ϊn 
	printf("\t\t1.�����ܳɼ�����\n");
	printf("\t\t2.�������˵�\n");
	printf("\t��ѡ��:");
	scanf("%d",&x); 
	for(i=1; i<=n; i++)
	{
		a[i] = st[i].math + st[i].chinese + st[i].english + st[i].cssa;   //ͳ��ÿ��ѧ���ܷ� 
	}
	for(i=1; i<=n; i++)        //ð������   
	{
		for(j=1; j<=n; j++)      
		{
			if(a[j]<a[j+1])   //�ɴ�С���� 
			{
				l = a[j];        //����ҲҪ���� 
				a[j] = a[j+1];
				a[j+1] = l;
				
				t = st[j];        //ѧ����Ϣ����(�ṹ��) 
				st[j] = st[j+1];
				st[j+1] = t;
			}  
		}
	} 
	 
	switch(x)
	{
		case 1:
			printf("\nѧ����Ϣ����:\n");        //δ�����ļ�,ֱ����� 
			printf("����\t����\t��ѧ\tӢ��\t����\t����\t�ܳɼ�\t����\n");
			for(i=1; i<=n; i++)
			{
			  printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%d\n",     //��Ϊ����д 
			  st[i].name,st[i].num,st[i].math,st[i].english,st[i].chinese,st[i].cssa,a[i],i);
			}  
			break;
		case 2:
			main();      //���������� 
		    break; 
		case 0:
			exit(0);
			break;
		default:break; 
	}
}

void save(int m)     //�����ļ� 
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
		 if(fwrite(&st[i],sizeof(struct student),1,fp)!=1)  //д��ȷʱ,����1 
		   //fwrite(��ȡ���ݵ�ַ,���ݴ�С,����,Ŀ���ļ�ָ��) ��st[i]����д��fp 
		   printf("file write error\n"); //����ȷʱ,��ʾ�û� 
	}
	fclose(fp);  
}

int load(void)     //�����ļ��нṹ�嵽st[i],���������� 
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
			fread(&st[i],sizeof(struct student),1,fp);  //��fp��sizeof(struct student)��С��
			                        //һ��һ��д��st[i]�� 
			i++;                    //���ӽṹ����Ŀ 
		}while(feof(fp)==0);
	}
	fclose(fp);  
	return i-2;
} 
