/*
2015年4月3日21:16:39
一根长度为133米的材料,需要截成长为19米和23米的短料,求解两种材料各截多少根时,剩余的
材料最少 
*/
# include <stdio.h>

int main(void)
{
	int i=1,x,y;
	int z[100];
	int x_min=0,y_min=0,z_min=0;
	z[0] = 133;    //初始化z数组  除z[0]外其他元素均为0 
	for(x=0; x<=7; x++)
	{
		for(y=0; y<=5; y++)
		{
			z[i] = 133-19*x-23*y;         //用z数组各元素来存储每次剩下来的 
			if(z[i]>=0 && z[i]<z[i-1])    //如果比上一次的少,那么就记下来
			{
				x_min = x;
				y_min = y;
				z_min = z[i];
			}
			i++;                            //往后移 
		}
	}
	printf("%d %d %d",x_min,y_min,z_min);
	
	return 0;
} 
