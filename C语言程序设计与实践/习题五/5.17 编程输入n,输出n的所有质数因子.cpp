/*
5.17 ���:����n,���n��������������(��n=13860,�����2,2,3,3,5,7,11) 
*/
# include <stdio.h>

int jugle(int n)
{
	int i;
	for(i=2; i<n; i++)
	{
		if(n%i==0)
		  break; 
	}
	if(n==i)
	  return n;
	else
	  return 0; 
}

int main(void)
{
	int n,i=2,j;
	scanf("%d",&n);
    //printf("%d",jugle(n)); 
    while(n%2==0)   //���n������2���� 
    {
    	n/=2;
    	printf("2  ");
	}
	
    for(j=3; j<=n; j+=2)    //�ٲ���3,5,7....��Щ���� 
	{
		while(n%j==0)
		{
			n/=j;     //����Ǹ��������Գ���,��ô������� 
			printf("%d  ",j);
		} 
	} 
	
	return 0; 
} 
