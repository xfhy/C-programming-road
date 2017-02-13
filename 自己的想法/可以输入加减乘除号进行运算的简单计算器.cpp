/*
2015年2月10日09:45:40
可以输入加减乘除号进行运算的计算器 
*/

# include <stdio.h>

int main(void)
{
	float result,temp;
	char ch;
	printf("\t本计算器只能做加减乘除运算\n");   //提示用户标准输入 
	printf("输入格式:eg:3.569*5.2,    6.41+5.154   ....\n"); 
	scanf("%f",&result);           //先把输进来的那个值直接放进result里面,待会再做运算 
	while((ch = getchar())!='U')   //这里随便输个字母,只要用户不输入这个字母就行了 
	{ 
		if(ch == '+')            //如果用户输入'+'号,则执行下面语句 
		{
			scanf("%f",&temp); 
			result = result + temp;
			printf("%f\n",result);
		}
		
		if(ch == '-')
	    {
	        scanf("%f",&temp); 
			result = result - temp;
			printf("%f\n",result);	
		}
		
		if(ch == '*')
	    {
	        scanf("%f",&temp); 
			result = result * temp;
			printf("%f\n",result);	
		}
		
		if(ch == '/')
	    {
	        scanf("%f",&temp); 
			result = result / temp;
			printf("%f\n",result);	
		}
		
		/*if(ch == '=')
		{
			printf("%f\n",result);
		}*/
	}
	return 0;
} 
