/*
2015��3��2��19:09:45
���Ӵ�,������ 
*/
# include <stdio.h>
# include <string.h>

char * substr0(char *c,int id,int num,char *c1)
{
	int i;
	char *p = c+id;
	char *p1 = c1;
	for(i=1; i<=num; i++)
	   *p1++=*p++;
	*p1 = '\0';  //����������ʱ���Ѿ�����ѭ��,*p1�Ѿ������һ����ַ��ָ�������,���ԼӴ������� 
	return c1;
} 

int main(void)
{
	char c[100],c1[100];
	printf("%s\n",substr0(c,2,4,c1));
	
	return 0;
} 
