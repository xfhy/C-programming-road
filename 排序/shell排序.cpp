/*
2015��4��15��9:17:06
shell���� 
*/

# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int main(void)
{
	int v[] = {3,78,45,94,74,100,91},n=7;
	int gap,i,j,temp;
	for(gap=n/2; gap>0; gap/=2)         //һ��      
	  for(i=gap; i<n; i++)              //��һ��ĺ��濪ʼ 
	    for(j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap)   //���±�0��ʼ,ǰ��Ƚ� 
		          //�Ƚ�ǰ����Ǹ�,���һ���
		          //���ǰ��Ĵ�,�򽻻� 
	    {
	    	temp = v[j];
	    	v[j] = v[j+gap];
	    	v[j+gap] = temp;
		}
		
	for(i=0; i<7; i++)   //��� 
	{
		printf("%d ",v[i]);
	}
	printf("\n");
	
	/*
	int a[7],n=7;
	int i,gap,j,t;
	srand(time(0));
	for(i=0; i<7; i++)
	  a[i] = rand()%100;
	for(i=0; i<7; i++)
	  printf("%d ",a[i]);
	printf("\n");
	
	for(gap=n/2; gap>0; gap/=2)
	  for(i=gap; i<n; i++)
	    for(j=i-gap; j>=0 && a[j]>a[j+gap]; j-=gap)
	    {
	    	t = a[j];
	    	a[j] = a[j+gap];
	    	a[j+gap] = t;
		}
	for(i=0; i<7; i++)
	  printf("%d ",a[i]);
	printf("\n");*/
	
	return 0; 
}
