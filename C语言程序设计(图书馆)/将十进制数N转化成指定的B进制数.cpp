/*
2015年2月8日14:30:30
将十进制数N转化成指定的B进制数 
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
   printf("请输入您想进行转化的十进制数:");
   scanf("%d",&i); 
   printf("请输入您想转化成多少进制:");
   scanf("%d",&j);
   printf("将十进制数 %d -->>  %d进制数\n",i,j); 
   change(i,j);
   

   return 0;
}

