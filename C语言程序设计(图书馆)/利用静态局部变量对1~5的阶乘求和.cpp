/*
2015��2��14��13:53:00
���þ�̬�ֲ�������1~5�Ľ׳���� 
֤��:��̬�ֲ��������������ڴӳ�ʼ����ʼ ,�������������. 
*/
# include <stdio.h>

int fac(int n)
{
    static long t=1;   //��̬�ֲ�����������ǰ�ӹؼ���static 
    t = t*n;           //��̬�ֲ��������������ڴӳ�ʼ����ʼ ,�������������. 
                        //����t һֱû���ͷ�,��������ʱtҲ��û���ͷŵ� ,ֱ��������� 
	return t;
}

int fac1(int n)      //���ǲ��þ�̬�����ĺ��� 
{
	int t;
	int k = 1;
	for(t=1; t<=n; t++)
	  k = t * k ;
	return k;
}

int main(void)
{
	int i;
	long t,sum;
	for(i=1; i<=5; i++)
	{
		t = fac(i);         //t�Ľ����i! 
		//t = fac1(i); 
		printf("%d\n",t);   //���i! 
		sum+=t;             //�׳��ۼ�  
	}
	printf("%d ",sum);
	return 0;
} 
