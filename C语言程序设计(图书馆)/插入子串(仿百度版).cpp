/*
2015��3��3��13:42:49
�����Ӵ�(�°ٶȰ�) 
*/
# include <stdio.h>
# include <string.h>

void insert(char a[],char b[],int k)
{
	int len1,len2;
	len1 = strlen(a);
	len2 = strlen(b);
	int i,j,l,y;
	char c[100];
	for(i=0; i<k-1; i++)   //��kǰ����ַ�����ֵ��C 
	   c[i] = a[i];
	   
	for(j=0; j<len2; j++)    //�ٰ���Ҫ���ȥ���Ǹ��ַ������θ�ֵ��C 
	   c[i+j] = b[j];
	l=0;
	for(y=k-1; y<len1; y++)   //�ٰ�ԭ��ʣ�µĸ�ֵ��C 
	{
		c[i+j+l] = a[y];
		l++;
	}
	c[i+j+l] = '\0';
	puts(c);
}

int main(void)
{
	char a[100],b[100];
	int k;
	printf("������һ������!\n");
	gets(a);
	printf("���������ĵ���!\n");
	gets(b);
	printf("����������λ��!\n");
	scanf("%d",&k);
	if(k<=0 || k>strlen(a)-1)
	{
		printf("�������!\n");
		scanf("%d",&k);
	}
	insert(a,b,k);
	return 0;
} 
