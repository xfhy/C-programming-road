/*
2015年1月27日17:06:36 
把数组的内容倒过来    倒置 
*/
# include <stdio.h>
int main(void)
{
   /*int a[5] = {0};//数组是奇数个元素   奇数偶数倒置效果一样 
   int i,t,j;
   
    printf("请输入一维数组a[5]的各个元素：\n");
    scanf("%d",&a[0]);
	scanf("%d",&a[1]);
	scanf("%d",&a[2]);
	scanf("%d",&a[3]);
	scanf("%d",&a[4]);
	
	 i = 0;
	 j = 4;
	 while(i<j)
		{
			t = a[j];        //数组的转换，易错，谨记 ！！！！！！！！！ 
			a[j] = a[i];
			a[i] = t; 
			
			i++;
			j--;
		 
		}
     for(i=0;i<=4;i++)        //必须要以for循环控制输出，不然a[i]中i的值不清楚 
     printf("%d",a[i]);
     */
     
    int a[6] = {0};//数组是偶数个元素 
   int i,t,j;
   
    printf("请输入一维数组a[6]的各个元素：\n");
    scanf("%d",&a[0]);
	scanf("%d",&a[1]);
	scanf("%d",&a[2]);
	scanf("%d",&a[3]);
	scanf("%d",&a[4]);
	scanf("%d",&a[5]);
	
	 i = 0;
	 j = 5;
	 while(i<j)
		{
			t = a[j];        //数组的转换，易错，谨记 ！！！！！！！！！ 
			a[j] = a[i];
			a[i] = t; 
			
			i++;
			j--;
		 
		}
     for(i=0;i<=5;i++)        //必须要以for循环控制输出，不然a[i]中i的值不清楚 
     printf("%d",a[i]);
   return 0;
}

