/*
2015��4��3��14:14:35
���Ƴ���  �����������ӳ���55�� 
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
		a[i][0] = 1;   //ÿһ�еĵ�һ�������һ��Ϊ1 
		a[i][i] = 1;
	} 
	for(i=1; i<12; i++)
	{
		for(j=1; j<i; j++)
		{
			a[i][j] = a[i-1][j-1] + a[i-1][j];    //ĳ����Ϊ��һ�е�������������� 
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
			     printf("\t   ��55��Ϊ%d  \n",a[i][j]);
		    }
		}
		printf("\n");
	}
	
	
	return 0; 
} 
/*
#include<stdio.h> //��һά����Ͷ�ά�����ӡ�������
#define N 100
#define M 10

int main()
{
 int arr[N]={1,0}; //�˴�����һ��һά���飬����Ϊ1��������Ϊ0
 int a[M][M];
 int n;
 int i,j;
 printf("Input the lines: ");
 scanf("%d",&n);
 //printf("��һΨ����\n");
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
