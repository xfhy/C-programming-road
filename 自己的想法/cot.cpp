# include <stdio.h>
# include <math.h>

int main(void)
{
	float x;
    float k;
    printf("请输入M_PI/N(∏/N) :\n");
    printf("tan(∏/2)不存在\n");
    printf("eg:∏/ 2 = 90度\n");
    printf("N = ");
    scanf("%f",&k);
    x=M_PI/k;
    printf("cot(PI/N)=%f",1/(tan(x)));
}
