/*
2015��4��6��14:21:46
��ί��� 
*/
# include <stdio.h>

int main(void)
{
	int a[7] = {0};
	int i,j,t;
	float sum=0;
	for(i=0; i<7; i++)   //��������д�ķ� 
	  scanf("%d",&a[i]);
	for(i=0; i<7; i++)   //ð������   ����ͷֺ���ͷ�Ū���� 
    {
    	for(j=0; j<i; j++)
    	{
    		if(a[i]>a[j])
    		{
    			t = a[i];
    			a[i] = a[j];
    			a[j] = t;
			}
		}
	}
	//for(i=0; i<7; i++)   //���� 
	  //printf("%4d",a[i]);
	for(i=1; i<6; i++)  //���м�������� 
	  sum+=a[i];
	printf("%.2f",sum/5);
	
	return 0;
} 
