/*
2015��3��10��18:19:16
���ļ�D:\txt\poem.txt�����ļ��ı�,����ʾ������� 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	char ch;
	FILE * fp;       //�����ļ�ָ�� 
	fp = fopen("D:\\txt\\3��11������.txt","r");     //���Ǵ��ļ��ĺ���,������stdio.h��,ǰ�����ļ�·��,������
	                                            //��ʲô��ʽ�� 
	if(!fp)       //���fp==0,��δ���������ļ� 
	{
		printf("�����������ļ�!\n");    
		exit(1);
	}
	ch = fgetc(fp);   //�Ҳ���fp getchar(fp);�������,�Ѵ�fp�����ĸ�ֵ��ch; 
	while(!feof(fp))
	{
		putchar(ch);    //������ַ� 
		ch = fgetc(fp);   //������ȡ��һ���ַ� 
	}
	
	fclose(fp);   //ʹ����ǵùر��ļ�
	
	return 0; 
} 
