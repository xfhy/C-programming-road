/*
2015��4��17��15:02:53
ϰ���� 6.2��һ�������ڷ�10������ .����ҳ�������С�����������±�
Ȼ���������������ǰ���Ԫ�ضԻ� 
*/
# include <stdio.h>

void out(int * a)  //������� ���� 
{
	int i;
	for(i=0; i<10;i++)
	  printf("%4d",a[i]); 
	printf("\n");
} 

void change(int *a,int *b)   //��ָ�뽻���������������� 
{
	int t;    //*a��*b��int���� ,������int���͵���Ϊ��ʱֵ 
	t = *a;
	*a = *b;
	*b = t; 
}

int main(void)
{
	int a[10] = {41,58,45,15,23,15,48,4,87,15};
	int i,min,t; 
	printf("ԭ����Ϊ:\n"); 
	out(a);   //������� 
	min = a[0];
	for(i=0; i<10; i++)
	{
		if(a[i]<min)   //���������С�ľ͸�ֵ��min 
	       min = a[i];
	}
	for(i=0; i<10;i++)
	{
		if(a[i]==min)   //�ҵ�a[i]��min��Ⱦ�����ѭ��,�ҵ����±� 
		   break;
	} 
	printf("��С����Ϊ%d,�±�Ϊ%d:\n",min,i+1);
	change(&a[0],&a[i]);  //��������Ԫ�� 
	out(a);  //��� 
	
	return 0; 
} 
