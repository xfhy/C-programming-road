#include<stdio.h>
int main(void)
{
	int i;
	i=(1,2,3,4);//从左到右执行，执行到最后为4 
	printf("%d",i);
	return 0;
}
