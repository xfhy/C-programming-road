/*
 2015��2��7��12:42:43
  �����Լ�� 
  
  for(1,2,3)
  A;
  
  �ȼ��� 
  1;
  while(2)
   {
      A;
      3 ;
   }
*/
# include <stdio.h>

int judge(int i, int j) 
{
	int t;
	
	if(i<=0 || j<=0)
	{
		printf("С����,���������������!  ^-^ \n");  //�����ʾ��Ϣ 
		return (0);                                  //�������� 
	}
	
	t = i % j;  //���һ�ε�����,tΪ���� 
	while(t)
	{
		i = j;      //�ѱ��εĳ�����Ϊ��һ��ѭ���ı����� 
		j = t;     //�ѱ��ε�������Ϊ��һ��ѭ���ĳ��� 
		t = i % j;  //���µ����� 
	}
	return j; 
}

int main(void)
{
	int i,j;
	
	printf("��������Լ����������(�м��ö��Ÿ���):");
	scanf("%d,%d",&i,&j);
	
	if(judge(i,j))
	   printf("���Լ��Ϊ%d\n",judge(i,j));
	
	return 0;
} 
