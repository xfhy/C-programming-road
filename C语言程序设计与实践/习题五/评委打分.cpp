/*
2015年4月6日14:21:46
评委打分 
*/
# include <stdio.h>

int main(void)
{
	int a[7] = {0};
	int i,j,t;
	float sum=0;
	for(i=0; i<7; i++)   //输入各裁判打的分 
	  scanf("%d",&a[i]);
	for(i=0; i<7; i++)   //冒泡排序   将最低分和最低分弄出来 
    {
    	for(j=0; j<i; j++)
    	{
    		if(a[i]>a[j])
    		{
    			t = a[i];
    			a[i] = a[j];
    			a[j] = t;
			}
		}
	}
	//for(i=0; i<7; i++)   //测试 
	  //printf("%4d",a[i]);
	for(i=1; i<6; i++)  //将中间五项相加 
	  sum+=a[i];
	printf("%.2f",sum/5);
	
	return 0;
} 
