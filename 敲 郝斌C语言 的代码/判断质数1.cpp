#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
main()
{
	int m, k,i,prime=1;
	 
	srand(time(0));
	m=rand()%100;
	if(m==0||m==1)
		prime=0;
	k=(int)sqrt(m);
	for(i=2;i<=k;i++)
		if(m%i==0)
			 prime=0;
	if(prime==1)
		printf("%d is a prime\n",m);
	else
		printf("%d is not a prime\n",m);
	return(0);
}
