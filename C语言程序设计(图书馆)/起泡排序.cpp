/*
2015年2月7日13:57:00 
  起泡排序   foam:泡泡 
  将数组的元素从小到大起泡排序 
*/
# include <stdio.h>

 void foam(int * p,int len)
 {
 	int i,j,t,last;
 	i = 0;
 	while(i<len-1)   //长度至少为1 
 	{
 		last  = len - 1;
 		for(j=len-1; j>i; j--)   //起泡一趟要循环很多次 ,直到左边的都是按顺序摆放eg:2 3 4 5 ... 
 		  if(p[j]<p[j-1])
 		  {
 		  	 t = p[j];    //交换 
			 p[j] = p[j-1];
			 p[j-1] = t;
			 last = j;     //记录最后一个起泡的位置 
		   }
		   i = last;      //下一次起泡的上限 
	 }
 }

int main(void)
{
	int i;
	int a[5] = {123,524,54,65,3};
	foam(a,5);  
	
	for(i=0; i<5; i++)   //输出数组 
	   printf("%d ",a[i]);
	
	return 0;
}
