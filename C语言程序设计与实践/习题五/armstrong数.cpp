/*
2015��3��30��20:10:19
armstrong�� 
*/
# include <stdio.h>
# include <math.h>

int main(void)
{
	int m,i,a,b,c;
	printf("armstrong��\n"); 
	for(i=100; i<=999; i++)
	{
		a = i/100;        //��λ 
		b = (i%100)/10;  //ʮλ
		c = i%10;        //��λ 
		if(pow(a,3)+pow(b,3)+pow(c,3)==a*100+b*10+c) 
		  printf("%d \n",a*100+b*10+c);
	} 
	
	return 0; 
} 

