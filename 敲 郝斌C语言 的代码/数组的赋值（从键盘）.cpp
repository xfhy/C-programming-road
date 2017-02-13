/*
2015年1月27日17:03:26
输入一个数组的每个元素的值，然后输出 
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

