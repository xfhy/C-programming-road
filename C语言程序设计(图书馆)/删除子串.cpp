/*
2015��3��3��17:31:20
ɾ���Ӵ� 
*/
# include <stdio.h>
# include <string.h>

void del(char *c,int id,int num)
{
	int len;
	len = strlen(c);
	//printf("%d",strlen(c));
	char * p = c+id;    //ָ���м�����ַ� 
	char * q = c+id+num;   //ָ�������ַ� 
	while(*q!='\0')
	{
		*p++=*q++;
	} 
	*p = '\0';
	puts(c);
}

int main(void)
{
	char c[100] = "chinachinachina";
	printf("%s\n",c);
	int id,num;
	printf("����������ӵڶ��ٸ��ַ���ʼɾ��\n");
	scanf("%d",&id);
	id = id - 1;
	printf("��������������ɾ�����ٸ��ַ�\n");
	scanf("%d",&num);  
	del(c,id,num);
	
	return 0;
} 
