/*
2015��1��27��17:03:26
����һ�������ÿ��Ԫ�ص�ֵ��Ȼ����� 
*/
# include <stdio.h>
int main(void)
{
   int a[5] = {0};
   int i;
   do{
    scanf("%d",&a[0]);
	scanf("%d",&a[1]);
	scanf("%d",&a[2]);
	scanf("%d",&a[3]);
	scanf("%d",&a[4]);
	
	for(i=0;i<=4;i++)
	{
	 printf("%d",a[i]);	
	}
	}while(1);
   return 0;
}

