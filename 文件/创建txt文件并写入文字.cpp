/*
2015��4��29��9:08:58
�ַ� �ַ��� ���� �ļ�������� 
*/
/*
# include <stdio.h>
# include <stdlib.h>

//-------�ַ��������--------
void aa(void)
{
	char ch;
	printf("������һ���ַ�:\n");
	ch = fgetc(stdin);    //�Ӽ��̵õ����ݴ���ch 
	fputc(ch,stdout);     //��ch�������������Ļ�� 
	printf("\n");
}

/*дһ���ַ�*/
#include "stdio.h"
//#include "string.h"
# include <stdlib.h>

int main(void)
{
    FILE * fp;
    char c;
    if((fp=fopen("d:\\txt\\data.txt","w"))==NULL)   //��ֻд�ķ�ʽ��ĳ�ļ�,�����ʧ��,������򲻿� 
	{
        printf("\nFile can not open!");
        exit(0);
    }
    while((c=getchar())!='#')  //��#���Ž��� 
	{
        fputc(c,fp);   // ���ַ�cд���ļ�ָ��fp��ָ����ļ��ĵ�ǰдָ���λ��
    }
    fclose(fp);   //�����ļ��ǵùر� 
}
