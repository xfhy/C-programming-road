/*
2015��3��1��15:43:33
�Լ���д�ַ���������������-2 
*/
# include <stdio.h>
# include <string.h> 

char * strcat1(char * c1,char * c2)   //�ַ������Ӻ���,ͨ���ƶ��±�ʵ�� 
{
	int i,j=0;
	i = strlen(c1);   //����i=4; 
	while(c2[j]!='\0')  
	{
		c1[i] = c2[j];   //�������c1[4] == '\0'
		i++;            //��3�д��������С��c[i++] = c1[j++]; 
		j++;
	}
	c1[i] = '\0';    //�������ǵü�'\0',���������ַ��� 
	
	return c1;
}

char * strcat2(char * c,char * c1)
{
	char * p = c+strlen(c);   //p�ĵ�ַ��c�ĵ�ַ��ĩβ����һλ 
	while(*c1!='\0')  
	{
	     *p = *c1;   //��3�п���ʡ�Գ�*p++=*c1++; 
	     p++;
	     c1++;
	}
	*p = '\0';
	
	return c; 
} 

int main(void)
{
	char c1[10] = "work";
	char c2[10] = "hard";
	char c3[10] = "work";
	char c4[10] = "hard";
	printf("%s\n",strcat1(c1,c2));
	printf("%s\n",strcat2(c3,c4));
	return 0;
} 
