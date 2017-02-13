/*
2015年3月3日13:42:49
插入子串(仿百度版) 
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
	for(i=0; i<k-1; i++)   //把k前面的字符串赋值给C 
	   c[i] = a[i];
	   
	for(j=0; j<len2; j++)    //再把需要插进去的那个字符串依次赋值给C 
	   c[i+j] = b[j];
	l=0;
	for(y=k-1; y<len1; y++)   //再把原来剩下的赋值给C 
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
	printf("请输入一个单词!\n");
	gets(a);
	printf("请输入插入的单词!\n");
	gets(b);
	printf("请输入插入的位置!\n");
	scanf("%d",&k);
	if(k<=0 || k>strlen(a)-1)
	{
		printf("输入错误!\n");
		scanf("%d",&k);
	}
	insert(a,b,k);
	return 0;
} 
