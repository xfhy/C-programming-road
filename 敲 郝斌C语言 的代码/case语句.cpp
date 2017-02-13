#include<stdio.h>
int main()
{
 int i,n,re,k;
 scanf("%d",&n);
 for(k=1;(n/k)!=0;k=k*10)
 {
 	re=n/k;
 	i=re%10;
 	printf("%d",i);
 }
 
}
