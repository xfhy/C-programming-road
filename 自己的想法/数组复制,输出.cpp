/*
2015��2��6��15:11:34
����������һ�����鸳ֵ 
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
