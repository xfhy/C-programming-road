/*
2015��4��20��18:35:39
7.1 ϰ���� ʵ�ֺ���squeeze(char s[],char c), 
*/
# include <stdio.h>
# include <string.h>
 
void squeeze(char s[],char c)
{
	int i,len,j,num=0;
	len = strlen(s);      //����s����ĳ��� 
	for(i=0; i<len; i++)   //��s����ķ�Χ�ڲ�����c��ͬ����ĸ 
	{
		if(c==s[i])
		{
			num++;         //��¼s���ж��ٸ���c��ͬ����ĸ,�������ʱ��Ҫ��� 
			for(j=i; j<len-num; j++)  //��s[i]���￪ʼ,ֱ������-num 
			{
				s[j] = s[j+1];   //��s����ĸ���ǰ���
			}
			i=i-1;               //�����������c���ŵ���ôȱ������Ͳ���
			                   //��Ϊ����ֱ�������ڶ���c 
		}
	}
	printf("���ڵ��ַ���Ϊ\n");
	for(i=0; i<len-num; i++)   //���ȼ����� 
	{
		printf("%c",s[i]);     //һ��һ������� 
	}
}

int main(void)
{
	char s[] = "I am a good boy! HeHe!";   
	char c;
	printf("ԭ�����ַ���Ϊ%s\n",s);
	printf("������һ����Ҫɾ�����ַ�:\n");
	scanf("%c",&c);
	squeeze(s,c);
	
	return 0;
}
