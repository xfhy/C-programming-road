/*
2015��3��1��14:40:34
�Լ���д�ַ��������������� 
*/
# include <stdio.h>
# include <string.h>

int strlen1(char * c)   //�Լ�����strlen���� 
{
	int i=0;
    while(*c++!='\0')
    {
      i++;	
    }
    return i;
} 

char * strcpy1(char * c2,char * c1)   //�Լ������ַ������ƺ���,������Ϊ��Ҫ���ص���c2,c2��char * ����
                                    // so�������char * ���͵ĺ��� 
{
	int i=0;
	while(c1[i]!='\0')
	{
		c2[i] = c1[i];
		i++;
	}
	c2[i] = '\0';   //�����Ҫ���д���,��ôc2[]�Ͳ����ַ���,�ַ�����β����Ҫ'\0' 
	return c2;
} 

/*-----------�ַ�����������------��ָ��ʵ��--------*/
char * strcpy2(char * c,char * c1)  //�β�,���д��ʲô������ν 
{
	char * p = c;   //����*p�ʹ���c��     ���ﱣ����ָ����Ϊ����ֵ 
	while(*c1!='\0')  //c1�ĵ�ַû����һ��,*c1��ǰ��һ����λ,����*c1�������δ����ַ����ĸ����ַ� 
	{
		*p = *c1;
		p++;   //����һ���洢��Ԫ 
		c1++; 
	}
	*p = '\0';   //�������c1+��һ���洢��Ԫ��������,pҲ������һ���洢��Ԫ,���p�����ӵĴ洢��Ԫ��û�и�ֵ
	             //Ҫ������Ǹ���ֵ��'\0'�����ַ��� 
	return c;
}



char * strcat0(char * c,char * c1)
{}

int main(void)
{
	char c[10] = "work";
	char c1[10] = "work";
	char c2[10];
	char c3[10] = "work";
	char c4[10];
	printf("%d\n",strlen1(c));
	printf("%s\n",strcpy1(c2,c1));
	printf("%s\n",strcpy2(c4,c3));
	return 0; 
} 
