/*
2015��3��9��22:35:30
�Ӽ�������һ���ı�,�洢��D:\poem.txt 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
   char ch;
	FILE * fp;
	fp = fopen("D:\\txt\\poem.txt","w");	  //��д�ķ�ʽ���ļ� 
	if(!fp)    //�൱��if(fp==0),�ж��ļ��Ƿ񱻴� 
	{
		printf("�ļ�û����!\n");
		exit(0);
	}
	printf("������һ���ַ���:(��'#'����)");
	ch = getchar();    //�����һ���ַ� 
	while(ch!='#')    //�������Ĳ���# 
   {
   	fputc(ch,fp);   //��������ַ�д���ļ� 
   	ch = getchar();    //��������һ���ַ� 
	}
	
	fclose(fp);     //�ر��ļ� 
	 
	
	return 0;
}
