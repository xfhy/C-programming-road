/*
�жϻ���
��ν����,����ȥ���ո�֮����ַ��������ĶԳƵ� 
*/
# include <stdio.h>
# include <string.h>

int judge (char * c)
{
	int i=0,j=strlen(c)-1;    //c[j]�����ַ������һλ 
	int t = 1;
	while(i < j)
	{                        //32�ǿո��ַ��Ĵ��� 
		while(c[i] == 32)   //ȥ���ո�֮����ַ��������ĶԳƵ�,so���ӿո� 
		  i++;
		while(c[j] == 32)
		  j--;
		if(c[i] == c[j])
		 {
		 	i++;
		 	j--;
		 } 
		else
		{
		   t = 0;
		   break; 
	    }
	}
	return t;
}

int main(void)
{
	char c[100];
	printf("�����������жϵ��ַ���:\n");
	scanf("%s",c);
	if(judge(c))
	   printf("YES!\n");
	else
	   printf("NO!\n");
	
	return 0;
} 
