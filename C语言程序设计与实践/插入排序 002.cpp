/*
2015年4月9日16:57:51
插入排序 
*/
# include <stdio.h>

int main(void)
{
	int a[10] = {151,154,15,2365,14,1654,26,3216,45,28};
	int b[10] = {0};   //依次从a中取数,插入到b中,保持b有序 
	int i,j;
	int x,k,n=0;
	for(i=0; i<10; i++)
	{
		x = a[i];        
		for(j=0; j<n; j++)
		{
			if(b[j]>x)   //找到第一个大于x 的位置 
		    {
		    	break;
			}
		}
		k = j; 
		for(j=n-1; j>=k; j--)    //从k开始,一直到最后那个(n-1) 
	    {
	    	b[j+1] = b[j];  //往后移一个 
		}
		b[k] = x;           //将x赋给刚好将x夹在中间的那个地方 
		n++;                //n持续增加 n为元素个数 
	} 
	
	for(i=0; i<10; i++)
	  printf("%5d",b[i]);
	
	return 0; 
} 
