# include <stdio.h>
# include <math.h>

int main(void)
{
   double result;
   double x = 1000.00;
   int i = 10; 
   printf("请输入底数和真数(中间用逗号隔开):\n");
   result = log10(x); 
   printf("The common log of %lf is %lf\n", x, result); 
	
	return 0;
}
