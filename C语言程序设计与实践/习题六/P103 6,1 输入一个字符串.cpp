/*
2015年4月16日22:50:08
P103 6,1 输入一个字符串 
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char a[] = "FONTnAME and fILename";
	char c,b[20];
	int i = 0,len,j=0;
	c = a[i];
	while(c!='\0')
	{
		if(c>=65 && c<=90)
		{
		   b[j] = c;
		   j++;
	    }
		c = a[i];
		i++;
	}
	b[i] = '\0';
	len = strlen(b);
	//for(i=0; i<len; i++)
	  printf("%s",b);
	
	return 0;
} 
