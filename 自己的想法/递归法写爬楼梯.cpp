/*
2015年4月24日9:21:06
用递归法写爬楼梯 一次可以爬一级 
可以爬两级 N级的话有多少种爬楼方法 
其实就是菲波拉契序列
*/
/*
# include <stdio.h>             //非递归方法 

int main(void)
{
	int i,f1,f2,f3,x;
	f1 = 1;
	f2 = 2;
	//f3 = f1+f2;
	scanf("%d",&x);
	if(x==1)
	  printf("1\n");
	else if(x==2)
	  printf("2\n");
	else
	{
		for(i=3; i<=x; i++)
		{
			f3 = f1+f2;
			f1 = f2;
			f2 = f3;
		}
		printf("%d\n",f3);
    }
	
	 
	
	return 0; 
} */
# include <stdio.h>     //递归方法 

void bb(int x,int f1,int f2)   //定义第X项,再前一项,前一项 
{
	int f3 = f1+f2;           //把下一项算出来 
	while(x>3)                  
	{
		f1 = f2;                //f1,f2往后移 
		f2 = f3;
		return bb(x-1,f1,f2);   //项减少,直到最后 
	}  
	printf("%d\n",f3);           //最后是输出最后一项 
}

int main(void)
{
	int x,f1=1,f2=2;
	printf("请输入递归的第n项:\n");
	scanf("%d",&x);
	if(x==1)
	  printf("1\n");
	else if(x==2)
	  printf("2\n");
	else if(x>=3)
	{
	  bb(x,f1,f2); 
    }
	
	return 0;
} 
