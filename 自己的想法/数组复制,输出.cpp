/*
2015年2月6日15:11:34
数组名给另一个数组赋值 
*/
# include <stdio.h>

int main(void)
{
	int a[3] = {1,2,3};
	int b[3];
	int i;
	
	for(i = 0;i < 3;i++)
	*(b+i) = *(a+i);
	
	for(i = 0;i < 3;i++)
     	printf("%d",a[i]);
    	printf("\n");
	
	for(i = 0;i < 3;i++)
	    printf("%d",b[i]);
     	printf("\n");
     	
	return 0;
} 
