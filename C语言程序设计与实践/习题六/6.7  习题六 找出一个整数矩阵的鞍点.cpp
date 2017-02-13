/*
2015年4月17日23:14:11 
6.7  习题六 找出一个整数矩阵的鞍点 
*/
# include <stdio.h>
# include <time.h>
# include <stdlib.h> 

void out(int *a)   //输出函数 
{
	int i,len=0;
	for(i=0; i<100; i++)
	{
		printf("%4d",a[i]);
		len++;               //记录每行的字数 
		if(len%10==0)
		  printf("\n");   //如果每行字数达到10个则换行 
	} 
}

int main(void)
{
	int a[10][10];
	srand(time(0));
	int i,j;
	for(i=0; i<10; i++)        //给数组元素一一赋值 
	{
		for(j=0; j<10; j++)
		{
			a[i][j] = j;                    //rand()%100;
		}
	} 
	printf("原矩阵为:\n");
	out((int*)a);            //强制转换为(int*)类型 
	int b[10][10]={0};
	int max=a[0][0];
	int min=a[0][0]; 
	for(i=0; i<10; i++)
	{
		max = a[i][0];       //假设max在每行的第一个 
		for(j=0; j<10; j++)
		{
			if(a[i][j]>max)
			  max = a[i][j];   //如果那一行有更大的就换掉 
		} 
		b[i][j-1] = max;    //这里j=10,所以应该减一 
	} 
	printf("\n原数组每一行的最大值\n");             //输出b数组 的一部分 
	for(i=0; i<10; i++)
	{
         printf("%4d",b[i][9]);     //每一行的最后一个是a数组那一行的最大值 
         printf("\n");
    }
    
    int row,list,k,have=0,l=0;
	int num[10]={0};                 //行,列 
    for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			if(a[i][j]==b[i][9])      //找到a数组中的每一行的最大值 
			{
				for(k=0; k<10; k++)   //找到最大值后,再比较其在列上是否为最小值 
				{
				   if(a[i][j]>a[k][j])
				   {
				   	  have++;   //如果有比它小的,那么它就不是鞍点 
				   }
			    }
				if(have==0)   //如果have==0,那么说明有鞍点 
					num[l++] = a[i][j];
			}
		}
	} 
    
    int sum=0;
    for(i=0; i<10; i++)
    {
    	if(num[i]!=0)     //看看num数组里有没有不为零的元素 
		  sum++; 
	}
	if(sum==0)          //如果num数组全为0,则没有鞍点 
	  printf("该数组没有鞍点\n");
	else
	{
		printf("该数组有鞍点,如下\n");
		for(i=0; i<10; i++)
		{
			if(num[i]!=0)             //输出那些有值的元素,鞍点 
			  printf("%d \n",num[i]); 
		}
	} 
    
	return 0; 
} 
