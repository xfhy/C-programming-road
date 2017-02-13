/*
2015年2月18日16:06:30
joesphus问题
模拟游戏:n个人围坐在一起,从某个人开始数,沿顺时针方向数到m,最后数到的人被淘汰.
然后数下去,数到m,在淘汰一人,重复上述过程,直到剩下1人为止,剩下的这个人是胜者 
*/
# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

void joesphus(int n,int m)
{
	int i,j,*pa;
	pa=(int *)malloc( n * sizeof(int) );  //用数组表示n人 
	if(pa==NULL)
	{
		printf("分配失败!\n");
		exit(1); 
	}
	
	for(i=0; i<n; i++)
	    pa[i] = i+1; 
	    
	i=0; 
	while(n>1) 
	{
		i=(i+m-1)%n;
		printf("\t哈哈这个傻逼被淘汰啦   %d \t\n",pa[i]);   //输出淘汰者
		for(j=i+1; j<n; j++)    //删除被淘汰者 
		    pa[j-1] = pa[j];
		n--;        //人数减少
		
		if(n==0)   //如果上次刚好数到最后,则需从第一个开始数起走 
		   i=0; 
	}
	printf("\n\t我宣布,最后获胜者为 %d\n",pa[0]);
	free(pa);
} 

int main(void)
{
	int n,m;
	printf("\n\t***************joesphus游戏!*************\n");
	printf("\n请输入人数:");
	scanf("%d",&n); 
	printf("\n请输入数到哪里:");
	scanf("%d",&m);
	joesphus(n,m);
	
	return 0;
} 
