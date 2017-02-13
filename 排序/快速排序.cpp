/*
2015年5月6日9:06:57
快速排序 
*/
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/*
void sort(int *a, int left, int right)   //数组名,数组最小下标,最大下标 
{
    if(left >= right)//*如果左边的数组大于或者等于就代表已经整理完成一个组了
    {
        return ;
    }
    int i = left;
    int j = right;
    int key = a[left];    //temp 临时变量    i=left
     
    while(i < j)                               //控制在当组内寻找一遍
    {
        while(i < j && key <= a[j])
        //而寻找结束的条件就是，1，找到一个小于或者大于key的数（大小取决于你想升
        //序还是降序）2，没有符合的切i与j相遇
        {
            j--;//向前寻找
        }  //这个循环是让小的放在前面 
         
        a[i] = a[j];
        //找到一个这样的数后就把它赋给前面的被拿走的i的值（如果第一次循环且key是
        //a[0]，那么就是给key）
         
        while(i < j && key >= a[i])
        //这是i在当组内向前寻找，同上，不过注意与key的大小关系停止循环和上面相反，
        因为排序思想是把数往两边扔，所以左右两边的数大小与key的关系相反
        {
            i++;
        }
         
        a[j] = a[i];
    }
     
    a[i] = key;//当在当组内找完一遍以后就把中间数key回归
    sort(a, left, i - 1);//最后用同样的方式对分出来的左边的小组进行同上的做法
    sort(a, i + 1, right);//用同样的方式对分出来的右边的小组进行同上的做法
                       //当然最后可能会出现很多分左右，直到每一组的i = j 为止
}*/

void sort(int *a,int left,int right)
{
	if(left>=right)    //当左边大于等于右边,就退出函数 
	  return ;
	int i = left;
	int j = right;
	int key = a[left];    //temp临时值   最开始是a[0] 
	while(i<j)
	{
		while(i<j && key <= a[j])    //把比key小的放在左边 
		{
		  j--;   //从最右边的那个元素开始比较,j--,往左移 
	    }
		a[i] = a[j];
	    while(i<j && key>=a[i])  //把比key大的放在右边 
	    {
	      i++;
	    }
	    a[j] = a[i];
	}
	a[i] = key;
	sort(a,left,i-1);
	sort(a,i+1,right);
} 

int main(void)
{
	int a[1000],i;
	srand(time(0));
	for(i=0; i<1000; i++)
	{
		a[i] = rand()%100 + 1;
		printf("%4d ",a[i]);
	}
	printf("\n\n");
	sort(a,0,999);
	printf("\t------------------------排序之后---------------------------\n"); 
	for(i=0; i<1000; i++)
	{
		printf("%4d ",a[i]);
	}
	
	return 0; 
} 
