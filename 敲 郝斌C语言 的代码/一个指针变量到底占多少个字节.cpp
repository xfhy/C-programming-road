/*
2015��1��30��11:10:33
һ��ָ���������ռ���ٸ��ֽ� 
*/
# include<stdio.h>

int main(void)
{
	int a = 3;  //int����ռ4���ֽ�  
	char ch = 'B'; //char���� ռ1���ֽ� 
	double k = 2.33;  //double����ռ8���ֽ� 
	int * p = &a;
	char * q = &ch;
	double * i = &k;
	
	printf("intָ��ռ%d���ֽ�\n",sizeof(p));   //sizeof(����)��     ��������ĳ�����Ͷ��ٸ�ռ�ֽڵ� 
	printf("charָ�� ռ%d���ֽ�\n",sizeof(q));
	printf("doubleָ�� ռ%d���ֽ�\n",sizeof(i));
	
	return 0;
}

/*
��DEV C++����������ǣ�

intָ�� ռ8���ֽ�
charָ�� ռ8���ֽ�
doubleָ�� ռ8���ֽ�

--------------------------------

�ܽ᣺ һ��ָ�������������ָ��ʲô�������ݣ���ռ�ֽڶ�һ�� 
 
*/
