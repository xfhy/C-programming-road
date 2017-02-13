/*
2015年2月10日12:12:38
划分数组元素
编写程序:以某一数据为标准,将数组中的元素分为前后两部分,
前面的不大于标准,后面的不小于标准.一般以数组的第一个元素为标准 
*/
# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int sp(int * p,int len)
{
	int t = p[0];
	int i = 0,j = len - 1;
	while(i!=j)   //当i和j相等时就不执行 
	{
		/*-------j向左边扫描----------*/
		 while(p[j]>=t && j>i)  //如果 p[j]<t 则执行下面的if(j>i) 
		     j--;
		 if(j>i)    //当执行到这一句时,p[j]已经小于t 
		     p[i++]=p[j];
		 /*---------i向右边扫描---------*/   
	      while(p[i]<=t && i<j)
	         i++;
		  if(i<j)
		     p[j--]=p[i]; 
	}
	p[i]=t;
	return(i);
}

int main(void)
{
	int i,a[9];
	srand(time(0));
	for(i=0; i<9; i++)  //给数组赋初值 
		a[i] = rand()%100;
		
	for(i=0; i<9; i++)   //输出原数组 
	  printf("%d ",a[i]);
	printf("\n");
	
	printf("%d \n",sp(a,9));   //交给函数处理 
	 
	for(i=0; i<9; i++)       //输出处理后的数组 
	   printf("%d ",a[i]);
	printf("\n");
	
	return 0;
} 
