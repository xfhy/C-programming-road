/*
2015��3��2��19:39:04
�Ӵ����� 
*/
/*
# include <stdio.h>
# include <string.h>

char * strinsert0(char * c,int id,const char * c1)
{
	int len,len1,left,i;
	char * p, * q; 
	const char *p1;
	len = strlen(c);   //����Դ���ĳ���
	len1 = strlen(c1);  //��������ַ����ĳ��� 
	left = len - id;   //�����γ��� 
	p = c + len;    //ָ��Դ�������� 
	q = p + len1;   //ָ��Դ���������ƶ����յ� 
	for(i=1; i<=left; i++)
	{
		*q--=*p--;
	} 
	p = c + id;   //ָ��������ʼλ��
	p1 = c1;
	while(*p1!='\0')
	   *p++=*p1++; 
	 
	return c;
}

int main(void)
{
	char c[100] = "cha",*c1 = "in";
	printf("%s\n",strinsert0(c,2,c1));
	
	return 0;
}*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	void insert(char a[],char b[],int t);
	char a[100],b[100];
	int t,i,j;
	printf("input a string:\n");
	//gets(a);   //���뺯��,��scanf������ 
	scanf("%s",a); 
	printf("inut b string:\n");
	//gets(b);
	scanf("%s",b);
	printf("input the position to insert:\n");
	scanf("%d",&t);
	if(t<=0 || t>strlen(a)+1)
	   {
	    printf("wrong!.input again");
	    scanf("%d",&t);
	   }
	insert(a,b,t);
}

void insert(char a[],char b[],int t)
{
	int len1,len2;
	int i,j,k,l;
	char c[100];
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<t-1;i++)
	    c[i]=a[i];
	for(j=0;j<len2;j++)
	    c[i+j]=b[j];
	l=0;
	for(k=t-1;k<len1;k++)
	   {
	     c[i+j+l]=a[k];
	     l++;
	   }
	c[i+j+l]='\0';
	puts(c);
}
