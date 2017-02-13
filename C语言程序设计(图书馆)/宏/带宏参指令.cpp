/*
2015年2月25日15:25:01
带参宏指令 
*/
# include <stdio.h>
# include <stdlib.h>

#define RONDOM(num) rand()%(num)   //记得打括号 
#define S(r) (r)*(r)*3.1415926
#define max(a,b) a>b?a:b  //下面可以用max(a,b)代替a>b?a:b     这就是宏

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
