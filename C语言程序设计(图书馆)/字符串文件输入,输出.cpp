/*
2015��3��9��13:35:28
�ַ����ļ�����,��� 
*/
# include <stdio.h>

int main(void)
{
	/*    �ַ����� 
	char ch;
	ch = fgetc(stdin);
	fputc(ch,stdout);
	*/
	
	/*    �ַ������� 
	char s[10];
	fgets(s,5,stdin);       //����abcdefg,��ȡabcd\0 (�Ѷ�ȡ5��λ����,����Ĳ���ȡ��)
	fputs(s,stdout);        //���abcd      ��Ϊ�ϱ�д��5 
	*/
	
	int n;         //��ֵ������ 
	fscanf(stdin,"%d",&n);     //�ļ����� 
	fprintf(stdout,"\n%d\n",n);    //�ļ���� 
	
	return 0;
} 
