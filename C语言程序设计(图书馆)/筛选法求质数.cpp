/*
筛选法求质数 
*/
# include <stdio.h>
# include <stdlib.h>

void display(int * p,int n);   //输出质数函数声明 

void sieve(int n)     //筛选求n以内质数函数定义 
{
	int i,j,*s=(int *)calloc(n+1,sizeof(int));   //建立一个长度为n+1的数组,将1至n与数组下标对应,待会输出下标 
	if(s==NULL)
	{
	   printf("分配失败!\n");    //错误提示,动态内存分配失败 
	   exit(1);     //终止程序,控制权交给操作系统 
    }
    s[0] = s[1] = 1;   //判断质数时要把0和1 除外
	 
    for(i=2; i<n+1; i++)
       if(s[i]==0)
          for(j=2*i; j<n+1; j=j+i)  //比如i等于2,那么他的倍数就不是质数 
               s[j] = 1;               //i的倍数不是质数 
               
    display(s,n+1);    //输出质数
    free(s);
}

void display(int * p,int n)
{
	int i;
	for(i=0; i<n; i++)
	    if(p[i]==0)   //如果是质数,就输出 
	        printf("%d\t",i);
}

int main(void)
{
	sieve(18);        //输出18以内所有质数  
	
	return 0;
} 
