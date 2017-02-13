/*
2015-2-6 16:51:42
对数组随机赋值,在由小到大排序 
*/
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void)
{
	int i,a[5];
	srand(time(0));
	for(i=0; i<5; i++)
	   a[i] = rand()%20;
	for(i=0; i<5; i++)
	   printf("%d\t",a[i]);
	 printf("\n"); 
	
	int j,t;             //冒泡排序 
	for (i=0; i<4; i++)     //最多交换数组长度减一次  不信请看:1,2,3,4,5 
	{
	  for(j=0; j<4; j++)     //第一次将最大的放在最右边,第二次把第二大的放在倒数第二个 
	  {
	      if(a[j] < a[j+1])    //if默认只能控制一个语句, 我擦,记住!!!!! 
	      {
	         t = a[j];
	         a[j]= a[j+1];
	         a[j+1] = t;
	      }
	  }
    }
    
    for(i=0; i<5; i++)
	   printf("%d\t",a[i]); 
	   
	return 0;
} 
