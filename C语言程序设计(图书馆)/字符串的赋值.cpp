/*
2015��2��28��19:16:11
�ַ����ĸ�ֵ 
*/
# include <stdio.h>
# include <string.h> 

int main(void) 
{
	/*------�����ַ����������ַ������ʼ��-------*/
	char c1[8] = "china";    //�ȼ���char c1[8] = {'c','h','i','n','a','\n'}; 
	char c2[] = "china";     //�ȼ���char c2[] =  {'c','h','i','n','a','\n'}; 
	printf("%s   %s",c1,c2); 
	/*------��ʱ�����޸��ַ���������ĳһԪ�ص�ֵ--------*/
	c1[4] = 'A';   //���ַ�������c1�е�Сд�ַ�a��Ϊ��дA 
	c2[1] = 'H';   //���ַ�������c2�е�Сд��ĸh��Ϊ��дH
	
	//c1 = "china";  //�Ƿ�!�ַ�������������ֵ 
	
	const char * p1 = "china";   //const char *p1;   p1 = "china";
	char * p2 = "china";         //char * p2; p2 = "china";
	//p2[0] = 'C';     //�Ƿ�! ����ʱ���ᱨ��,����������ʱ��ǿ��ֹͣ
	printf("\n%s   %s",p1,p2);
	char str[3] = {'a','b','c'};    //str�����ַ���
	char str1[4] = {'a','b','c','\0'};   //str1�� �ַ���
	printf("\n%s",str1);
	return 0;
}
