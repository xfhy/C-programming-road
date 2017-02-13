# include <stdio.h>
# include <math.h>

int main(void)
{
	double x,y;
	printf("请输入底数:\n");
	scanf("%lf",&x); 
	printf("请输入冥:\n");
	scanf("%lf",&y); 
    printf("%lf的%lf次方 = %lf\n", x, y, pow(x, y));
	return 0;
} 
