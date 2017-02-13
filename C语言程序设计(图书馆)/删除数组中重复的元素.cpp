/*
2015年2月14日10:40:04
删除数组中重复的元素 
*/
# include <stdio.h>
# include <time.h>
# include <stdlib.h> 

void purge(int * p,int * psize) 
{
	int i,j,k;
	for(i=0; i<*psize-1; i++)
	{
		for(j=i+1; j<*psize; j++)
		{
		   if(p[j] == p[i])
		   {
		   	for(k=j+1; k<*psize; k++)
		   	    p[k-1] = p[k];
		   	(*psize)--;
		   
		   }
	    }
	}
}

int main(void)
{
	int i,size;
	int a[10] = {1,2,32,4,45,5,2,41,24,31};
	//srand(time(0));
	
/*	for(i=0; i<10; i++)   //该数组随机赋值 
	    a[i] = rand()%100;
	for(i=0; i<10; i++)
	    printf("%d ",a[i]); */
	printf("\n");
	    
	size = 10;
	purge(a,&size);
	
	for(i=0; i<size; i++)
	   printf("%d ",a[i]);
	printf("\n");
	
	return 0; 
} 
