/*
2015年2月19日20:23:21
灵活的输入scanf分隔符 
*/
# include <stdio.h>

int main(void)
{
	int a;
	float x,y;
	printf("请输入3个数:");
	scanf("a=%d x=%f y =%f",&a,&x,&y);  //必须要输入除了%d,%f之外的那些东西,不然会出现垃圾值 
	printf("a=%d x=%f y =%f",a,x,y); 
	
	return 0;
} 
