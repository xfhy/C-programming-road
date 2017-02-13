/*
2015年4月2日19:13:58
连续整数的固定和 
*/
# include <stdio.h>

void bb(int n)
{
	int i,j,sum=0;
	for(i=1; i<n; i++)   //这里小于n是因为,小于n 可以排除只有一个数的情况 
	{
	   j=i-1;        //这里减一是因为下面第一个j++了的 
	   while(sum<n)  // 当sum >= n时,退出循环 
	   {
	   	  j++;
	   	  sum = sum + j;  //连续数相加 
	   }
	   if(sum==n)
	     printf("%d...%d = %d\n",i,j,n);
		sum = 0;	//赋初值,不然待会儿一直加 
	}
}

int main(void)
{
	int n;
	printf("请输入一个数:");
	scanf("%d",&n);
	bb(n); 
	
	return 0; 
} 
