/*
2015��2��7��13:57:00 
  ��������   foam:���� 
  �������Ԫ�ش�С������������ 
*/
# include <stdio.h>

 void foam(int * p,int len)
 {
 	int i,j,t,last;
 	i = 0;
 	while(i<len-1)   //��������Ϊ1 
 	{
 		last  = len - 1;
 		for(j=len-1; j>i; j--)   //����һ��Ҫѭ���ܶ�� ,ֱ����ߵĶ��ǰ�˳��ڷ�eg:2 3 4 5 ... 
 		  if(p[j]<p[j-1])
 		  {
 		  	 t = p[j];    //���� 
			 p[j] = p[j-1];
			 p[j-1] = t;
			 last = j;     //��¼���һ�����ݵ�λ�� 
		   }
		   i = last;      //��һ�����ݵ����� 
	 }
 }

int main(void)
{
	int i;
	int a[5] = {123,524,54,65,3};
	foam(a,5);  
	
	for(i=0; i<5; i++)   //������� 
	   printf("%d ",a[i]);
	
	return 0;
}
