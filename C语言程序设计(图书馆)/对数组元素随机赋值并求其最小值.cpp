/*
2015年2月6日15:42:51
对数组元素随机赋值并求其最小值 
*/
# include <stdio.h>
# include <stdlib.h>   //包含rand函数和srand函数的声明 
# include <time.h>

int main(void)
{
	int a[5],i,j,t;
	int min;
	srand(time(0));
	for(i=0; i<5; i++)
	   a[i] = rand()%20;
	   
	for(i=0; i<5; i++)  
	   printf("%d\t",a[i]);
	printf("\n");
	
	                        //第一种方法    推荐使用第一种 
	t = 0;
	for(i=1; i<5; i++)
	{
        if(a[i] < a[t])
		    t = i; 
    }
	printf("min = %d\n",a[t]);
     /*    
         min = a[0]; 
       	for(i=1; i<5; i++)    //第二种方法 
       	{
       	   if(a[i] < a[0])
       	   {
       	   	  t = a[i];
       	   	  a[i] = a[0];
       	   	  a[0] = t;
	       }
		}
      printf("min = %d\n",a[0]);
      */
	
	return 0;
} 
