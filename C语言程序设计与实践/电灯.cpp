/*
2015年5月26日12:22:29
电灯 
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char a[150];
	printf("请输入0 / 1字符串控制电灯开关\n");
	printf("当相近的1>=3则灯亮\n");
	scanf("%s",a); 
	int count=0,sum=0,i=0,len=0;
	len = strlen(a);
	a[len] = '\0';
	printf("字符数组长度:%d\n",len);
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
	printf("共亮%d次\n",sum);
	
	return 0;
} 
