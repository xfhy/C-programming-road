/*
2015��6��4��12:46:04
fprintf���� 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE *fp;
	char class1[20],name[20],c;
	int math,computer,english;
	if((fp=fopen("D:\\file\\student.txt","w"))==NULL)
	{
		printf("���ܴ��ļ�!\n");
		exit(0);
	}
	while(1)
	{
		printf("����������༶,����,��ѧ,����,Ӣ��ɼ�:\n");
		scanf("%s,%s,%d,%d,%d",class1,name,&math,&computer,&english); 
		fprintf(fp,"%s,%s,%d,%d,%d\n",class1,name,math,computer,english);  //����ʽд���ļ� 
		printf("���ݷ����ļ��ɹ�!\n");
		printf("����������ļ�������(y/n)?");
		fflush(stdin);   //������뻺����Ϊ��ȷ����Ӱ���������ݶ�ȡ,�����ڶ���һ���ַ����������
		//��Ҫ��ȡ��һ���ַ� 
		c = getchar();
		if(c!='y' && c!='Y')
		   break;
    }
    fclose(fp);
	
	return 0;
} 
