/*
2015��3��1��20:52:04 
ɾ���ַ����еĿո��ַ� 
���������ַ�������һ���ַ���,�ƶ������ַ��� 
*/

/*------����һ����Ǵ����----------*/
/*# include <stdio.h>    
# include <string.h>

char * del(char * c)
{
	char * p;
	while(*c!='\0' && *c!=32)   //�Ȳ��ǽ���,Ҳ���ǿո�,����Ѱ�ҵ�һ���ո��
	   c++;
	if(*c!='\0')       //�ҵ��ո�Ϳ�ʼ�����ַ��� 
	{
	   p = c+1;   //�����ո�,��������
	   while(*p!='\0')
	   {
	   	 if(*p==32)
	   	    p++;    //Ѱ�����ַ������ַ� 
	   	 else
			*c++=*p++;   //�ȼ���*c=*p;  c++;  p++; 
	   }
	   *c = '\0';    //�Ӵ�������
    }
	    
    return c; 
}

int main(void)
{
	char c[100];
	printf("��������Ҫɾ���ո���ַ���!\n");
	//gets(c);
	scanf("%s",c);
	//puts(del(c));
	printf("%s",del(c));
	
	return 0; 
} */
#include <stdio.h> 
#include <string.h> 
int main(void) 
{ 
	char str[20]; 
	int i,j=0; 
	printf("�����ַ�����\n"); 
	gets(str); 
	
	for(i=0; i<strlen(str); i++) 
	  if(str[i]!=' ') 
	    str[j++]=str[i]; 
	    
	str[j]='\0'; 
	puts(str); 
}
