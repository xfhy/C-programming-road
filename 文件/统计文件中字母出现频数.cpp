/*
2015��6��5��13:06:48
ͳ���ļ�����ĸ����Ƶ�� 
*/
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

int main(void)
{
	FILE *fp;
	char c;
	int small[26]={0},num[10]={0},big[26]={0},i,others=0;
	if((fp=fopen("D:\\file\\txt.txt","r"))==NULL)
	{
		printf("���ܴ��ļ�!\n");
		exit(0);
	} 
	i=0;
	while((c=fgetc(fp))!=EOF)
	{
		if(isdigit(c))  //���c������ 
		{
			num[c-'0']++;
		}
		if(isalpha(c))   //�ж��Ƿ�����ĸ 
		{
			if(islower(c))   //�ж��Ƿ�ΪСд��ĸ 
			{
				small[c-'a']++;
			}
			else     //������Ϊ��д��ĸ 
			{
				big[c-'A']++;
			}
		}
		else      //�������� 
		{
			others++;
		}
		i++;
	}
	for(i=0; i<26; i++)
	{
		printf("%c:%d    ",'a'+i,small[i]);
		printf("%c:%d\n",'A'+i,big[i]);
	}
	for(i=0; i<10; i++)
	{
		printf("%d:%d\n",i,num[i]);
	}
	
	return 0; 
} 
