/*
2015年1月30日21:26:07 
构造动态数组 
*/
# include<stdio.h>
# include<malloc.h>

int main(void)
{
	int a[5] = {1,2,3,4,5}; //静态分配 4*5=20个字节 每4个字节被当做一个int变量来使用 
	
	int len;
	do
	{
			printf("请输入您想构造的一维数组长度：");
			scanf("%d",&len);
			
			int * p = (int *)malloc(4*len);  //本行动态地构造了一个一维数组    
			                                //该数组的长度是len,数组名：p;
											//该数组的每个元素都是int类型  类似于 int p[len]; 
			
			int i;
			
			printf("请输入您想够造的一维数组的内容：（中间用空格隔开）");
			for(i = 0;i < len;i++) 
			  scanf("%d",&p[i]);
			 
			printf("您所够造的一维数组如下：\n"); 
			for(i = 0;i < len;i++)
			     printf("%d  ",p[i]);
			 
			printf("\n");
    }while(1);
	
  return 0;
} 
