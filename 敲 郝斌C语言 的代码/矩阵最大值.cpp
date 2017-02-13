#include<stdio.h>
int main()
{
	int a[4][4]={ {1,7,0,4},{5,8,3,8},{9,10,15,6},{4,8,6,11}};
	int max,i,j;
	int x=0,y=0;
	max=a[0][0];
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(max<a[i][j])
			 max=a[i][j];
		     x=i;
		     y=j;
			
			
		}
	}
	printf("最大的数是%d 第%d行 第%d列",max,x,y);
	
}
