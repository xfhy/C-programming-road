/*
2015��4��24��9:41:29
�ݹ� ��������ַ��� 
*/
# include <stdio.h>
# include <string.h>

void bb(char *s)
{
	 if(*s!='\0')    //���ַ�����s����'\0'��ʱ�� 
	 {
	    bb(s+1);    //��λ�������� 
	    printf("%c",*s);  //���ÿ���ַ� 
     }
}

int main(void)
{
	char s[] = "I am a good boy!";
	bb(s); 
	
	return 0; 
} 
