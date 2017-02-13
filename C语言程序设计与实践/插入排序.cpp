/*
2015年4月8日18:04:58
插入排序 
*/
# include <stdio.h>

int main(void)
{
	int a[10] = {54,5,678,6587,55,14,38,84,9,28};
	int b[10] = {99999};   //自己想的,这是从小到大,如果是0,就是从大到小 
	int i,j,x=6,t,k;
	for(i=0; i<10; i++)
	{
		x = a[i];
		for(j=0; j<10; j++)  //找到第一个大于x的数 
		{
			if(b[j]>x)
			  break;
		}
		t = j;
		for(k=8; k>=t; k--)   //把位置给x空出来,把大于x的后面那些往后移一个单位 
		{
			b[k+1] = b[k];
		}
		b[j] = x;
	} 
	for(i=0; i<10; i++)
	{
		printf("%6d",b[i]); 
	} 
	
	return 0;
}
