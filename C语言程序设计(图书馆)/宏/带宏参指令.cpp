/*
2015��2��25��15:25:01
���κ�ָ�� 
*/
# include <stdio.h>
# include <stdlib.h>

#define RONDOM(num) rand()%(num)   //�ǵô����� 
#define S(r) (r)*(r)*3.1415926
#define max(a,b) a>b?a:b  //���������max(a,b)����a>b?a:b     ����Ǻ�

int main(void)
{
	int a,b,c;
	double s;
	a = RONDOM(100);
	b = RONDOM(100);
	if(a || b) 
	{
		printf("%d %d\n",a,b);
		c = max(a,b);
		s = S(c);
		printf("%g ",s);
	}
	
	return 0;
}
