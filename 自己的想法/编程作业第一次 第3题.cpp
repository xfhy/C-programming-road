/*
2015年2月6日17:42:59
编程作业第一次 第3题
3.有一个4*4的整型二维数组，其定义为：
 	int  a[4][4]={ {1,7,0,4},{5,8,3,8},{9,10,15,6},{4,8,6,11}};
现要求：
a)	找出其中最大数和最小数，并打印其行号和列号；
b)	求对角线元素之后（两条对角线）；
c)	求所有的一行之和，与一列之和；
d)	求此矩阵的转置矩阵；
e)	求此矩阵最外围所有数之和。
*/

# include <stdio.h>

int main(void)
{
	int i,j,max,min,t;
	int sum = 0;
	int a[4][4] = {
	             {1, 7,  0,  4},
				 {5, 8,  3,  8},
				 {9, 10, 15, 6},
				 {4, 8,  6,  11}
			};
	int line,list;    //line:行,list:列
	
	printf("\na)\n");    //a)	找出其中最大数和最小数，并打印其行号和列号；
	/*-------二维数组找最大-------*/
	max = a[0][0];      //假设a[0][0]最大 ,再用a[0][0]跟其他数比较 
	for(i=0; i<4; i++)
	{
	  for(j=0; j<4; j++)
	     {
	     	if(max<=a[i][j])       //这里注意 有可能相等    只有为真时才执行下面代码 
			 {           
	     	   max=a[i][j];      
	     	   line = i+1;   //持续更新最大的元素的行和列 
		       list = j+1;
		     }
		 } 
    }
		 printf("本二维数组最大值为:%d,第%d行,第%d列\n",max,line,list);
		 
	/*-------二维数组找最小-------*/
	min = a[0][0];      //假设a[0][0]最小 ,再用a[0][0]跟其他数比较 
	for(i=0; i<4; i++)
	{
	  for(j=0; j<4; j++)
	     {
	     	if(min>=a[i][j])       //这里注意 有可能相等    只有为真时才执行下面代码 
			 {           
	     	   min=a[i][j];      
	     	   line = i+1;   //持续更新最小的元素的行和列 
		       list = j+1;
		     }
		 } 
    }
		 printf("  本二维数组最小值为:%d,第%d行,第%d列\n",min,line,list);	 
    
    printf("\nb)\n");  //   b)	求对角线元素之后（两条对角线）；
     
    for(i=0; i<4; i++)
    {
    	for(j=0; j<4; j++) 
    	{
    		if(i==j || 3==i+j)   //X       右撇对角线:行和列相等     
			                     //        左丿对角线:行和列加起来等于5,但是这里是4,因为数组下标从开始 
    		{
    			sum = sum + a[i][j];
			}
		}
	}
	printf("对角线元素之和为%d\n",sum);
	
	
	printf("\nc)\n");    //c)	求所有的一行之和，与一列之和；
	
	sum = 0;
	for(i=0; i<4; i++)    //求所有行之和 
	{
		 for(j=0; j<4; j++)
		 {
			sum+=a[i][j];
		 }
			printf("第%d行元素之和为%d\n",i+1,sum);
			sum = 0;
	}
	
	for(j=0; j<4; j++)   //求所有列之和 
	{
		 for(i=0; i<4; i++)
		 {
			sum+=a[i][j];
		 }
			printf("第%d列元素之和为%d\n",j+1,sum);
			sum = 0;
	}
	
	
	printf("\nd)此矩阵的转置矩阵为:\n");       //d)	求此矩阵的转置矩阵；
	for(j=0; j<4; j++)
	{
		for(i=0; i<4; i++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");	
	}
	
	printf("\ne)\n");     // e)	求此矩阵最外围所有数之和
	int sum2 = 0;
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			if(i==0||i==3||j==0||j==3)
			sum2+=a[i][j];
		}
	}
     //	sum2 = sum2 - a[0][0] - a[3][0] - a[3][3] -a[0][3];没有必要加这一行,因为角上的元素只加了一次 ,因为上面的条件是或者 
	printf("此数组的外围之和为%d",sum2);
	
	return 0;
}

