/*
2015��1��30��20:14:20
malloc����ʹ�� --�� 
*/
# include <stdio.h>
# include <malloc.h>

void f(int * q)
{
	*q = 233;
	//����������    free(q);   ���ܣ��ͷ��ڴ�  ���ǰ�q��ָ��������ͷŵ��ˣ�
	//Ҳ���ǰ�pָ��������ͷŵ��� �����ǰѷ���Ķ�̬�ڴ棨��4���ֽڣ��ͷŵ��� ��23�оͲ�������κζ���
	return;
}

int main(void)
{
	int * p = (int *)malloc(sizeof(int));//sizeof(int)����ֵ��int��ռ���ֽ��� �������൱����malloc(4) 
	*p = 10; 
	
	printf("%d\n",*p);  //10
	f(p);
	printf("%d\n",*p);  //233
	
	return 0;
}
