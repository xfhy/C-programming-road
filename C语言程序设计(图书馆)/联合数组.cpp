/*
2015年3月8日09:14:10
联合数组 

结构体与联合的实质不同: 
   每一个结构体成员都有独立的内存,结构空间由所有成员空间构成,其大小不小于所有成员空间大小之和
	联合空间的大小等于最大的一个成员空间大小,这个空间由后来的成员占用,覆盖前面的成员,即空间共享,后来者占用 
*/
# include <stdio.h>

union xx              //定义联合,和结构体差不多; 
{
	char ch; 
	float x;
};

typedef union xx xx;      //定义联合的别名用xx取代union xx; 

int main(void)
{
	int i; 
	xx ca[3] = {'A','B','C'};    //联合数组初始化只能初始化第一个成员 
	for(i=0; i<3; i++)
	{
		printf("%c  \t\t",ca[i].ch); 
	} 
	printf("\n");
	ca[0].x = 1.1;     //数组元素的成员赋值 
	ca[1].x = 2.2;
	ca[2].x = 3.3;
	for(i=0; i<3; i++)
	{
		printf("%f  ",ca[i].x); 
	} 
	printf("\n");
	return 0;
} 
