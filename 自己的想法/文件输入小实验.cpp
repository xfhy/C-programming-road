/*
2015��5��7��22:00:13
�ļ�����Сʵ�� 
*/

	/*
	FILE * fp;
	char a[80] = "gsag";
	fp=fopen("d:\\123.cpp","r");
	char c;
	if(fp==NULL) 
	{
		printf("Can't open file!\n");
		exit(0);
	}
	else
	{
		while(!feof(fp))
		{
			c = fgetc(fp);
			fprintf(stdout,"%c",c);   //��c��%c�������Ļ 
		}
		fclose(fp);
    }*/
#include <stdio.h>
#include <string.h>

int main()
{
 char s[4]="abc",sc='n';//�Ƚϵ��ַ������ַ�
 FILE *fp;
 char filename[100],c; 
 int  i=0,n1=0,n2=0;
 long fpos,len;

 printf("input filename:\n");
 gets(filename);//�����ļ�����

 if((fp=fopen(filename,"r"))==NULL)//���ļ�
    {
  printf("open %s error!\n",filename);
  return 1;
 }
   
 len=strlen(s);
 c=fgetc(fp);
 while(!feof(fp))
 {
 if(c==s[0])//�����һ���ַ����,�Ƚ�ʣ�µ��ַ���
 {
  fpos=ftell(fp);//��ס��ǰ�ļ�ָ��λ��
  for(i=1;i<len;i++)
  {
   if(fgetc(fp)!=s[i])//�����ƥ��,����ѭ��
   {
    fseek(fp,fpos,0);//��������ָ��λ��
    break;
   }
  }
  if(i==len)//���ƥ��ɹ�,�ۼ���Ŀ
   n1++;
  
 }
 if(c==sc)//���ַ�scƥ��,�ۼ���Ŀ
  n2++;
    c=fgetc(fp);
 }
 
 printf("\n���ַ���%sƥ�����%d��\n",s,n1);//���ƥ�����
 printf("���ַ�%cƥ�����%d��\n",sc,n2);   
 getchar();
 return 0;
}
