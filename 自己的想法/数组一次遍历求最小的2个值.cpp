/*
2015年11月28日10:31:36
数组一次遍历求最小的2个值 

思路：定义2个临时变量temp1,temp2，分别用来存储数组中的第一个(a[0])跟第二个元素(a[1])，
并且进行相应比较，让temp1存放二者中小的那个值,temp2存放大的。
从数组第3个元素a[2]开始遍历，取值，跟temp2进行对比，如果比temp2小，
那需要进一步跟temp1进行比较，倘若比temp1还小，那说明此值是目前已知的最小值，
而此步之前的最小值temp1,现在成功变身成为了第二小的值。因此需要进行以下替换操作。
temp2=temp1,temp1=a[i];
*/
# include <stdio.h>

int main(void)
{
	int s1,s2; //2个值,小,大 
	int a[10] = {3,34,6,3,5,78,9,0,2,87};
	s1 = s2 = a[0];
	for(int i=0; i<10; i++)
	{
		if( s2 > a[i])   //比大的那个数还小 
		{
			if(s1 > a[i])   //比较和2个数中最小的数谁大    比最小的那个数还小 
			   s1 = a[i];
			else            //a[i] 介于2个数中间 
			   s2 = a[i];
		}
	}
	printf("s1=%d,s2=%d",s1,s2);
	return 0;
} 
