/*
2015��4��15��7:56:43
ͳ�Ƶ������� 
*/
# include <stdio.h>

int main(void)
{
	char str[30];
	int i=0,word=0,j;
	char c;
	gets(str);
	for(i=0;str[i]!='\0' ; i++)
	{
		c = str[i];  //���ַ���������ֵ��c 
	    if(c == ' ')   //�������ո��򵥴�������һ 
	    {
	      word++;
	    }
	}
	printf("%d",word+1);   //�ַ����ĵ����������ڿո��һ 
	
	return 0; 
} 
