/*
2015��3��10��21:08:53
�Ӽ�������һ��ѧ����¼,�洢���ļ�D:st.rec 
*/
# include  <stdio.h>
# include <stdlib.h>   //����atof��atol�������� 

struct student
{
	long unsigned id;
	char name[20];
	double score;
};
typedef struct student st;  //����ṹ����� 

int  main(void)
{
	char ch,num[20];
	st s;
	FILE * fp;
	fp = fopen("D:\\txt\\st.rec","wb");
	if(fp==0)
	{
		printf("�����������ļ�!\n");
		exit(1);
	} 
	printf("������:\n");
	do
	{
		/*
		printf("���������������ô?(y/n)?");   
		ch = getchar();         //�����ַ��٣���   
		getchar();              //��ȡ�����ڻ������Ļس���  
		if(ch=='n')           //�������Ϊn,��ѭ������
		   break;
		*/
		printf("ѧ��:       ");
		gets(num);               //��������Ķ�����ֵ��num 
		s.id = atol(num);    //atol�����ִ�ת��Ϊ�������� 
		
		printf("����:       ");
		gets(s.name);      //ֻ����������Ƚ����� 
		
		printf("����:");
		gets(num);
		s.score = atof(num);     //atof���ַ���ת��Ϊ˫������ 
		   fwrite(&s,sizeof(s),1,fp);   //����ǰ������¼sд���ļ� 
		   
		printf("���������������ô?(y/n)?");   
		ch = getchar();         //�����ַ��٣���   
		getchar();              //��ȡ�����ڻ������Ļس���  
		if(ch=='n')           //�������Ϊn,��ѭ������
		   break;
	}while(1);
	fclose(fp);
	
	return 0;
}
