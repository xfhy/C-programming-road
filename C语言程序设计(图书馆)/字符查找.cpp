/*
2015��3��3��21:44:31
�ַ����� 
*/
# include <stdio.h>
# include <string.h>

void found(char * c,char p)    //�����ַ����� 
{
	int id = 0;
	while(*c!='\0')
	{
		if(*c==p)
		   break;
		else
	   {
	   	c++;
	   	id++;
		}
	}
	if(id==15)
	   printf("�Բ���,û��������ҵ��Ǹ��ַ�\n");
	else
	    printf("������ҵ��ַ���ԭ�����ַ���ĵ�%d��\n",id + 1);
}

int findpat0(const char *c,const char *p,int start) 

int main(void)
{
	char ch;
	char c[100] = "chinachinachina";
	char p;
	printf("ԭ�ַ�%s \n",c);
		printf("������������ҵ��ַ�");
		scanf("%c",&p);    //�Ҳ�,�����ַ���ֵ�ǵü�&����,������%c���� 
	                     //�ַ�������ʱ%s 
		found(c,p);
	
	return 0;
} 
