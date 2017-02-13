/*
2015年2月8日20:08:20
自增自减i++,++i 
*/
#include<stdio.h>
/*
＋＋i与――i是指在使用i之前，先把i的值加1或减1。
i＋＋与i――则是指在使用i之后，再把i的值加1或减1。
*/
int main(void)
{ 
   /*
	int i=3; 
	 
	int j=i++;
	printf("%d,%d\n",i,j);   //4,3
	
	i = 3;
	j=++i;  
	printf("%d,%d\n",i,j);    //4,4
	
	i = 3;
	j=i--;
	printf("%d,%d\n",i,j);    //2,3
	
	i = 3;
	j=--i;
	printf("%d,%d\n",i,j);    //2,2
	*/
    
   int i=3;   
    
    int j=i++;   //赋值之后i才增 
    printf("%d,%d\n",i,j);  //4,3    i已经是4了,j已经是3了,下面并没有重新赋值 ,继续拿着这两个值用 
    
    j=++i;     //i增了之后才赋值 
    printf("%d,%d\n",i,j);   //5,5
    
	j=i--;     //赋值了之后i才减 
    printf("%d,%d\n",i,j);   //4,5
    
    j=--i;     //i减了之后才赋值 
    printf("%d,%d\n",i,j);   //3,3
    
    return 0; 
}

