/*
2015年2月20日10:13:43
求最大公约数 
*/
# include <stdio.h>

int main(void)
{
	int a,b,min,i,div;
	char ch; 
	do
	{
		printf("请输入要求最大公约数的两个数(中间用逗号隔开):");
		scanf("%d,%d",&a,&b);
		if(a<b)
		{
			min = a;
			for(i=min;i>1;i--)
			{
				if(a%i==0 && b%i==0)
				{
				    div = i;
				    break;
				}
			}
			if(i==1)
			   printf("无最大公约数!\n");
			else
			   printf("最大公约数为%d\n",div);
		}
		
		else
		{
			min = b;
			for(i=min;i>1;i--)
			{
				if(a%i==0 && b%i==0)   //从最小那个数往下检索,如果遇到a和b都能被同时整除的,那么就是最大公约数 
				{
				    div = i;
				    break;   //遇到最大公约数,终止for循环 
				}
			}
			if(i==1)
			   printf("无最大公约数!\n");
			else
			   printf("最大公约数为%d\n",div);
		}
		printf("您想继续吗?(y/n):");
		//ch=getchar();       //不晓得为啥子这里用这种方法不行 
		//getchar();   
		scanf(" %c",&ch);
    }while(ch=='y');
    
	return 0;
} 
