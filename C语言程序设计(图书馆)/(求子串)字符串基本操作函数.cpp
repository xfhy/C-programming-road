/*
2015��3��2��16:25:49
 (���Ӵ�)�ַ��������������� 
*/
# include <stdio.h>
# include <string.h>

char * substr0(char * c,int id,int num,char * c1)  //��c�е�ĳ���Ӵ����Ƹ�c1,id��ʾ�±�(����c[2],2�����±�),
                                                   //num �Ǹ����ַ����� 
{
	int i;
	char * p = c+id;    //ָ��Դ����Ҫ��ȡ�Ӵ�����ʼλ�� 
	char * p1 = c1;     //ָ��Ŀ�괮c1����ʼλ�� ,������ָ�� 
	for(i=1; i<=num; i++)   //��Դ������ȡ���ַ�������Ŀ�괮c1 
		*p1++ = *p++; 
	*p1 = '\0';   //�ǵüӴ������� 
	return c1;
}

int main(void)
{
	char c[100] = "china china",c1[100];   //c1Ҫ�㹻��װ��Ҫ��ȡ���ַ��� 
	
	printf("%s\n",substr0(c,2,5,c1));
	return 0; 
} 
