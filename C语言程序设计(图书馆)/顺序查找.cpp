/*
2015年2月7日09:46:34
顺序查找 
*/
# include <stdio.h>

int main(void)
{
	int a[5] = {1,2,3,4,5};
    int i;
    int j;
    char ch; 
    
	printf("输出原数组:\n");
	for(j=0; j<5; j++)
        printf("%d\t",a[j]);
    printf("\n");
     
	 do
	 {   
		printf("请输入需要在数组中查找的元素:");
		scanf("%d",&i);	
		for(j=0; j<5; j++)
		{
			if(a[j]==i)	 
				break;
		} 
		 if(j<5)
		    printf("找到啦,它在数组中的下标是%d \n",j);
		 else
		    printf("该数组中没有找到您想要的元素!\n"); 
		 printf("您想继续吗?(Y/N)");
		 scanf(" %c",&ch);   //%c前面有空格 
	}while('y'==ch||'Y'==ch);
	return 0;
} 
