/*
2015��4��24��17:11:02
��ŵ�� 
*/
# include <stdio.h>
long int i=0;    //ȫ�ֱ��� 
void bb(int x,char a,char b,char c)
{
	if(x>0)
	{
		bb(x-1,a,c,b);               
		//printf("%c-->%c\n",a,b);
		i++;
		bb(x-1,c,b,a);
	}
}

int main(void)
{
	char a,b,c;
	a = 'A';
	b = 'B';
	c = 'C';
	int x;
	printf("�������ж��ٸ�����\n");
	scanf("%d",&x);
	bb(x,a,b,c); 
	printf("��Ҫ����%d��\n",i);
	
	return 0; 
} 
