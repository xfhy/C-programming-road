/*
2015年2月7日09:06:26
 选择排序 
*/
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void)
{
	int i,j,t,m;
	int a[10];
	srand(time(0));
	
	for(i=0; i<10; i++)
	   a[i] = rand()%20;
	   
	printf("第一组随机分配的数组:\n"); 
	for(i=0; i<10; i++)
	   printf("%d ",a[i]);
	printf("\n");

/*------自己想的------*/	
	for(i=0; i<10; i++)
	 {
	 	for(j=0; j<10;j++)
		 {
		 	if(a[j] < a[j+1])
		 	{
		 		t = a[j];
		 		a[j] = a[j+1];
		 		a[j+1] = t;
			 }
		 } 
	 } 
	 
	 printf("第一组排序后:\n");
	 for(i=0; i<10; i++)
	    printf("%d ",a[i]);
	printf("\n"); 
    
    /*--------教科书上的算法--------感觉不爽----*/	
	srand(time(0));
	
	printf("第二组随机分配的数组:\n");
	for(i=0; i<10; i++)
	   a[i] = rand()%30;
	   
	for(i=0; i<10; i++)
	   printf("%d ",a[i]);
	 printf("\n");  
 
	for(i=0; i<10; i++)
	{
		m = i;
		for(j=i+1; j<10;j++)
		{
			if(a[j] > a[m])
			m = j;
		}
		if(m!=i)
		{
			t = a[i];
			a[i] = a[m];
			a[m] = t;
		}
	} 
	
	printf("第二组排序后:\n");
	for(i=0; i<10; i++)
	   printf("%d ",a[i]);
	return 0;
} 
