/*
2015��2��10��12:12:38
��������Ԫ��
��д����:��ĳһ����Ϊ��׼,�������е�Ԫ�ط�Ϊǰ��������,
ǰ��Ĳ����ڱ�׼,����Ĳ�С�ڱ�׼.һ��������ĵ�һ��Ԫ��Ϊ��׼ 
*/
# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int sp(int * p,int len)
{
	int t = p[0];
	int i = 0,j = len - 1;
	while(i!=j)   //��i��j���ʱ�Ͳ�ִ�� 
	{
		/*-------j�����ɨ��----------*/
		 while(p[j]>=t && j>i)  //��� p[j]<t ��ִ�������if(j>i) 
		     j--;
		 if(j>i)    //��ִ�е���һ��ʱ,p[j]�Ѿ�С��t 
		     p[i++]=p[j];
		 /*---------i���ұ�ɨ��---------*/   
	      while(p[i]<=t && i<j)
	         i++;
		  if(i<j)
		     p[j--]=p[i]; 
	}
	p[i]=t;
	return(i);
}

int main(void)
{
	int i,a[9];
	srand(time(0));
	for(i=0; i<9; i++)  //�����鸳��ֵ 
		a[i] = rand()%100;
		
	for(i=0; i<9; i++)   //���ԭ���� 
	  printf("%d ",a[i]);
	printf("\n");
	
	printf("%d \n",sp(a,9));   //������������ 
	 
	for(i=0; i<9; i++)       //������������� 
	   printf("%d ",a[i]);
	printf("\n");
	
	return 0;
} 
