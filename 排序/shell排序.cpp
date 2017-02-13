/*
2015年4月15日9:17:06
shell排序 
*/

# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int main(void)
{
	int v[] = {3,78,45,94,74,100,91},n=7;
	int gap,i,j,temp;
	for(gap=n/2; gap>0; gap/=2)         //一半      
	  for(i=gap; i<n; i++)              //从一半的后面开始 
	    for(j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap)   //从下标0开始,前后比较 
		          //比较前面的那个,相差一半的
		          //如果前面的大,则交换 
	    {
	    	temp = v[j];
	    	v[j] = v[j+gap];
	    	v[j+gap] = temp;
		}
		
	for(i=0; i<7; i++)   //输出 
	{
		printf("%d ",v[i]);
	}
	printf("\n");
	
	/*
	int a[7],n=7;
	int i,gap,j,t;
	srand(time(0));
	for(i=0; i<7; i++)
	  a[i] = rand()%100;
	for(i=0; i<7; i++)
	  printf("%d ",a[i]);
	printf("\n");
	
	for(gap=n/2; gap>0; gap/=2)
	  for(i=gap; i<n; i++)
	    for(j=i-gap; j>=0 && a[j]>a[j+gap]; j-=gap)
	    {
	    	t = a[j];
	    	a[j] = a[j+gap];
	    	a[j+gap] = t;
		}
	for(i=0; i<7; i++)
	  printf("%d ",a[i]);
	printf("\n");*/
	
	return 0; 
}
