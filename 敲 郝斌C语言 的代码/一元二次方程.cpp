#include<stdio.h>
#include<math.h> 
int main(void)
{
	int a,b,c;
	float delta;
	double x1,x2;
	scanf("%d %d %d",&a,&b,&c);
	delta=sqrt(b*b-4*a*c);
	if(delta>0)
	{
	
	x1=(-b+delta)/2*a;
		x2=(-b-delta)/2*a;
	printf("方程有两个解  x1=%f,x2=%f",x1,x2);
	}
	else if(delta==0)
	{
	x1=-b/(2*a);
	x2=x1;
	printf("方程有一个解  x1=x2=%f",x1,x2);
	}
	else
	{
		printf("该方程无解");
	}
	return 0;
}
