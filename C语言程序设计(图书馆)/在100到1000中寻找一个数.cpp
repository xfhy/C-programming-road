/*
2015��3��8��22:26:37
��100��1000��Ѱ������������,���ĸ�λ���ֺ�ʮλ����֮�Ͷ�10������ڰ�λ���� 
*/
# include <stdio.h>

int judge(int m)
{
	int i,val;
	for(i=2; i<m; i++)
	{
		if(m%i==0)
		  break;
	}
	if(i==m)
	  return 1;
	else
	  return 0;
} 

int main(void)
{
	int i,j,k,t,m,n;
	for(m=100; m<=1000; m++)
	{ 
	  if(judge(m))
	  {
	  	  t = m/100;    //��λ
		  k = m/10-t*10;//ʮλ 
	  	  j = m%10;    //��λ 
	  	  n = (k +j)%10;
	  	  if(n==t)
	  	     printf("%d \n",m);
	  	  
	  }
   }
   
	return 0;
} 
