/*
2015��5��26��12:22:29
��� 
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char a[150];
	printf("������0 / 1�ַ������Ƶ�ƿ���\n");
	printf("�������1>=3�����\n");
	scanf("%s",a); 
	int count=0,sum=0,i=0,len=0;
	len = strlen(a);
	a[len] = '\0';
	printf("�ַ����鳤��:%d\n",len);
	for(i=0;i<len;i++)
	{
		if(a[i]=='0' && count!=3)
			count=0;
		else if(a[i]=='0' && count==3)
		{
		   count=0;
		   sum++;
		}
		else if(a[i]=='1')
		{
			if(count==3)
			{
				if(a[i+1]=='1')
				   count=3;
				else if((a[i+1]=='0' || a[i+1]=='\0') && count==3)
				{
				   count=0;
				   sum++;
			    }
			}
			else 
			  count++; 
		}
	}
	printf("����%d��\n",sum);
	
	return 0;
} 
