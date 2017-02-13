/*
2015年3月30日20:10:19
armstrong数 
*/
# include <stdio.h>
# include <math.h>

int main(void)
{
	int m,i,a,b,c;
	printf("armstrong数\n"); 
	for(i=100; i<=999; i++)
	{
		a = i/100;        //百位 
		b = (i%100)/10;  //十位
		c = i%10;        //个位 
		if(pow(a,3)+pow(b,3)+pow(c,3)==a*100+b*10+c) 
		  printf("%d \n",a*100+b*10+c);
	} 
	
	return 0; 
} 

