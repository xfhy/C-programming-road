/*
2015��3��10��20:36:13
���ļ�D:\txt\poem.txt���ж����ļ��ı�,����ʾ������� 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	 char s[256];
	 FILE * fp;        //�����ļ�ָ�� 
	 fp = fopen("D:\\txt\\3��11������.txt","r");
	 if(!fp)           //����   if(fp==NULL)  һ���� 
	 {
	 	printf("δ�ܳɹ����ļ�!\n");
	 	exit(1);
	 }
	 while(!feof(fp))  //feof(fp)���ж�fp�Ƿ������,��δ������ִ��ѭ�� 
	 {
	 	fgets(s,256,fp);   //fgets();�ǰ�fp�ļ������ݸ��Ƹ�s,256ָ���洢���ݵĴ�С 
	 	printf("%s",s);
	 }
	 
	 fclose(fp);    //ʹ�����ļ��ǵùر� 
	  
	 return 0;
} 
