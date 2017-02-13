/*
2015年1月28日09:51:19
函数举例 
*/
# include <stdio.h>

int max(int i, int j)
{
	if(i>j)
	return i;
	else 
	return j;
} 
int main(void)
{
   int a = 1,b = 2,c = 3,d = 4,e = 5,f = 6;
   printf("max1 = %d\n",max(a,b));
   printf("max2 = %d\n",max(c,d));
   printf("max3 = %d\n",max(e,f));

   return 0;
}

