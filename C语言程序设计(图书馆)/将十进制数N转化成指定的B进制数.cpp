/*
2015��2��8��14:30:30
��ʮ������Nת����ָ����B������ 
*/
# include <stdio.h>

void change(int i,int j)
{
	int t = 0,m;
	int a[32];
	 while(i!=0)
	 {
	 	a[t++] =  i % j;
	 	i = i/j;
	 }
	 while(t>0)
	 {
	 	m = a[--t];
	 	if(m<10)
	 		printf("%d",m);
		else
		    printf("%c",m+87); 
	 }
	 
}

int main(void)
{
	int i,j;
   printf("�������������ת����ʮ������:");
   scanf("%d",&i); 
   printf("����������ת���ɶ��ٽ���:");
   scanf("%d",&j);
   printf("��ʮ������ %d -->>  %d������\n",i,j); 
   change(i,j);
   

   return 0;
}

