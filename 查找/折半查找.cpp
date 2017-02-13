/*
2015年2月9日16:20:59
折半查找 
*/

# include <stdio.h>

/* 二分查找 
 * 算法思想：1、将数组排序(从小到大)；2、每次跟中间的数mid比较，如果相等可以直接返回， 
 * 如果比mid大则继续查找大的一边，否则继续查找小的一边。 
 
  输入：排序好的数组 - sSource[]，数组大小 - array_size，查找的值 - key 
  返回：找到返回相应的位置，否则返回-1 
*/  
int found(int * p, int len, int t)   //p是数组,len是数组长度,t是待查找的值
{ //函数返回查找到的那个数组元素下标
	
	int low = 0,high = len - 1,mid;    //低  高  中
	while(low<=high)
	{
		mid = (low+high)/2;
		if(t == p[mid])     //直接在中部找到
	       return(mid);
		else if( t < p[mid] )   //小于中间值
		{
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	return -1;
} 

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int i,j;
	printf("原数组为:\n");
	for(i=0; i<5; i++)
	   printf("%d ",a[i]); 
	printf("请输入您想要查找的元素\n");
	scanf("%d",&j); 
	printf("该元素在数组中的下标为%d\n",found(a,5,j));    //数组名,长度,要查找的元素 
	
	return 0;
} 
