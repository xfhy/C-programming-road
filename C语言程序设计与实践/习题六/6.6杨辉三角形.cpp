/*
2015年4月17日21:30:27 
6.6杨辉三角形 
*/
# include <stdio.h>

int main(void)
{
	int a[10][10]={0};
	int i,j,k,n=9;
	for(i=0; i<10; i++)   //控制行 
	{
		for(j=1; j<10; j++)   //控制列 
		{
		   a[i][0] = 1;  //每一行的第一个为1 
		   a[j][j] = 1;  //每一行的最后一个为1 
		}
	}
	for(i=2; i<10; i++)
	{
		for(j=1; j<10; j++)
		{
			a[i][j] = a[i-1][j-1] + a[i-1][j];   //从第三行第二个开始
			         //任意一个数位上面行的前一个与后一个之和 
		}
	}
	for(i=0; i<10; i++)
	{
		for(k=n; k>0; k--)  //控制空格,刚开始时空格为9个,后来越来越少 
		{
		   printf(" "); 
	    }
		n--;  //空格减少 
		for(j=0; j<i+1; j++)
		{
		    printf("%4d",a[i][j]);  //输出每一个元素 
		}
		printf("\n");
	}
	
	return 0; 
} 
