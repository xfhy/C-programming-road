# include <stdio.h>
# include <math.h>

int main(void)
{
	double x,y;
	printf("���������:\n");
	scanf("%lf",&x); 
	printf("������ڤ:\n");
	scanf("%lf",&y); 
    printf("%lf��%lf�η� = %lf\n", x, y, pow(x, y));
	return 0;
} 
