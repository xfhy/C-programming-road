/*
2015��4��13��22:46:52
[��6-17]ͳ�Ƶ��ʸ��� 
*/
# include <stdio.h>

int main(void)
{
	char bb[80];
	int i,num=0,word=0;
	char c;
	gets(bb); 
	i = 0;
	while(bb[i]!='\0')
	//for(i=0; c=bb[i]!='\0'; i++)
	{
		c=bb[i];
		if(c==' ')
		  word=0;
		else if(word==0)
		{
			word = 1;
			num++; 
		}
		i++;
	}
	printf("There are %d words in the line!\n",num);
	
	return 0; 
} 
