# include <stdio.h>
# include <math.h>

int main(void)
{
	float x;
    float k;
    printf("������M_PI/N(��/N) :\n");
    printf("tan(��/2)������\n");
    printf("eg:��/ 2 = 90��\n");
    printf("N = ");
    scanf("%f",&k);
    x=M_PI/k;
    printf("cot(PI/N)=%f",1/(tan(x)));
}
