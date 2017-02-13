/*
2015年4月3日14:14:35
编制程序  将下列数列延长到55个 
1                       
1 1                   
1 2 1                  
1 3 3 1              
1 4 6 4 1             
1 5 10 10 5 1          
*/

# include <stdio.h>

int main(void)
{
	int i,sum=0,j,k;
	int a[12][12]={0};
	for(i=0; i<12; i++)
	{
		a[i][0] = 1;   //每一行的第一个和最后一个为1 
		a[i][i] = 1;
	} 
	for(i=1; i<12; i++)
	{
		for(j=1; j<i; j++)
		{
			a[i][j] = a[i-1][j-1] + a[i-1][j];    //某个数为上一行的左右两个数相加 
		}
	} 
	for(i=0; i<12; i++)
	{
		for(j=0; j<12; j++)
		{
			if(a[i][j]!=0)
			{ 
			  printf("%4d",a[i][j]);
			  sum++;
			  if(sum==55)
			     printf("\t   第55项为%d  \n",a[i][j]);
		    }
		}
		printf("\n");
	}
	
	
	return 0; 
} 
/*
#include<stdio.h> //用一维数组和二维数组打印杨辉三角
#define N 100
#define M 10

int main()
{
 int arr[N]={1,0}; //此处定义一个一维数组，首项为1，其他项为0
 int a[M][M];
 int n;
 int i,j;
 printf("Input the lines: ");
 scanf("%d",&n);
 //printf("用一唯数组\n");
 //one_dim_array(arr,n);

 printf("using double_dim_array:\n");
 for(i=0;i<M;i++)
     {
       a[i][0]=1;
       a[i][i]=1;
     }

 for(i=2;i<M;i++)
  for(j=1;j<i;j++)
    a[i][j]=a[i-1][j-1]+a[i-1][j];
 for(i=0;i<M;i++)
 {
   for(j=0;j<=i;j++)
     printf("%5d",a[i][j]);
     printf("\n");
 }
  return 0;
}*/
