/*
 2015年1月27日20:45:41
 求两数之和 
*/
# include <stdio.h>
void add(int i,int j,int sum)
{
	sum = i+j;
	printf("两数之和为sum = %d\n",sum);
} 
int main(void)
{
   int sum;
   int a,b;
   char ch; 
   do
   { 
        printf("请输入要求和的两个数：");
		scanf("%d",&a);
		scanf("%d",&b);
 		add(a,b,sum);
 		
		printf("您想继续么？（Y/N）:");
		scanf(" %c",&ch);//记得取地址！！！！！！！！！ 
   }while('y' == ch||'Y' == ch);

   return 0;
}

