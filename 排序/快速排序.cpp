/*
2015��5��6��9:06:57
�������� 
*/
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/*
void sort(int *a, int left, int right)   //������,������С�±�,����±� 
{
    if(left >= right)//*�����ߵ�������ڻ��ߵ��ھʹ����Ѿ��������һ������
    {
        return ;
    }
    int i = left;
    int j = right;
    int key = a[left];    //temp ��ʱ����    i=left
     
    while(i < j)                               //�����ڵ�����Ѱ��һ��
    {
        while(i < j && key <= a[j])
        //��Ѱ�ҽ������������ǣ�1���ҵ�һ��С�ڻ��ߴ���key��������Сȡ����������
        //���ǽ���2��û�з��ϵ���i��j����
        {
            j--;//��ǰѰ��
        }  //���ѭ������С�ķ���ǰ�� 
         
        a[i] = a[j];
        //�ҵ�һ������������Ͱ�������ǰ��ı����ߵ�i��ֵ�������һ��ѭ����key��
        //a[0]����ô���Ǹ�key��
         
        while(i < j && key >= a[i])
        //����i�ڵ�������ǰѰ�ң�ͬ�ϣ�����ע����key�Ĵ�С��ϵֹͣѭ���������෴��
        ��Ϊ����˼���ǰ����������ӣ������������ߵ�����С��key�Ĺ�ϵ�෴
        {
            i++;
        }
         
        a[j] = a[i];
    }
     
    a[i] = key;//���ڵ���������һ���Ժ�Ͱ��м���key�ع�
    sort(a, left, i - 1);//�����ͬ���ķ�ʽ�Էֳ�������ߵ�С�����ͬ�ϵ�����
    sort(a, i + 1, right);//��ͬ���ķ�ʽ�Էֳ������ұߵ�С�����ͬ�ϵ�����
                       //��Ȼ�����ܻ���ֺܶ�����ң�ֱ��ÿһ���i = j Ϊֹ
}*/

void sort(int *a,int left,int right)
{
	if(left>=right)    //����ߴ��ڵ����ұ�,���˳����� 
	  return ;
	int i = left;
	int j = right;
	int key = a[left];    //temp��ʱֵ   �ʼ��a[0] 
	while(i<j)
	{
		while(i<j && key <= a[j])    //�ѱ�keyС�ķ������ 
		{
		  j--;   //�����ұߵ��Ǹ�Ԫ�ؿ�ʼ�Ƚ�,j--,������ 
	    }
		a[i] = a[j];
	    while(i<j && key>=a[i])  //�ѱ�key��ķ����ұ� 
	    {
	      i++;
	    }
	    a[j] = a[i];
	}
	a[i] = key;
	sort(a,left,i-1);
	sort(a,i+1,right);
} 

int main(void)
{
	int a[1000],i;
	srand(time(0));
	for(i=0; i<1000; i++)
	{
		a[i] = rand()%100 + 1;
		printf("%4d ",a[i]);
	}
	printf("\n\n");
	sort(a,0,999);
	printf("\t------------------------����֮��---------------------------\n"); 
	for(i=0; i<1000; i++)
	{
		printf("%4d ",a[i]);
	}
	
	return 0; 
} 
