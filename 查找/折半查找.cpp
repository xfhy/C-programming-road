/*
2015��2��9��16:20:59
�۰���� 
*/

# include <stdio.h>

/* ���ֲ��� 
 * �㷨˼�룺1������������(��С����)��2��ÿ�θ��м����mid�Ƚϣ������ȿ���ֱ�ӷ��أ� 
 * �����mid����������Ҵ��һ�ߣ������������С��һ�ߡ� 
 
  ���룺����õ����� - sSource[]�������С - array_size�����ҵ�ֵ - key 
  ���أ��ҵ�������Ӧ��λ�ã����򷵻�-1 
*/  
int found(int * p, int len, int t)   //p������,len�����鳤��,t�Ǵ����ҵ�ֵ
{ //�������ز��ҵ����Ǹ�����Ԫ���±�
	
	int low = 0,high = len - 1,mid;    //��  ��  ��
	while(low<=high)
	{
		mid = (low+high)/2;
		if(t == p[mid])     //ֱ�����в��ҵ�
	       return(mid);
		else if( t < p[mid] )   //С���м�ֵ
		{
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	return -1;
} 

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int i,j;
	printf("ԭ����Ϊ:\n");
	for(i=0; i<5; i++)
	   printf("%d ",a[i]); 
	printf("����������Ҫ���ҵ�Ԫ��\n");
	scanf("%d",&j); 
	printf("��Ԫ���������е��±�Ϊ%d\n",found(a,5,j));    //������,����,Ҫ���ҵ�Ԫ�� 
	
	return 0;
} 
