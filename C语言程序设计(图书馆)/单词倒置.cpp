/*
2015��6��2��16:47:22
���ӵ��ʵ��� 
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char a[80]="this is a book";
	char t[80]="";
	int len=strlen(a),i;
	for(i=len-1; i>0; i--)
	{
		if(a[i]!=' ' && a[i-1]==' ')   //����һ�����ʿ�ʼ��λ�� 
		{
			strcat(t,a+i);
			a[i]='\0';
		}
	}
	strcat(t,a+i);
	strcpy(a,t);
	printf("%s",a);
	
	return 0;
} 
