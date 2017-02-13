/*
2015年4月1日20:43:56
泰勒级数 
*/
# include <stdio.h>
# include <math.h>

int main(void)
{
	float item,i=1,k=1,x,t=1,nume,deno=1,sum; 
	printf("请输入X:\n");
	scanf("%f",&x);
	nume = x;  //分子 
	item = x;   //暂时值 
	while(fabs(item)>=1e-5)   //fabs(x):求x的绝对值     1e-5 = pow(10,-5) 
	{
		item = (nume/deno)*i;   //通式   分子/分母 *符号(+/-) 
		sum = sum +item;         
		 
		nume = nume*x*x;         //x乘积加二, 
		deno = t*(t+1)*(t+2);   //和下一步一起做阶乘 
		t+=2;          //增加分母 
		k++;          //记录次数 
		i = i*(-1);  //控制符号 
	} 
	printf("%f  %d\n",sum,k);
	
	return 0; 
} 
