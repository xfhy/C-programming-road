#include<stdio.h>
int main(void)
{
	int a[5] = {1,2,3,4,5};
	int * p = a;  //����ָ��Ϊ��������֣������� a������ �� �������ĵ�ַ���ǵ�һ��Ԫ�صĵ�ַ 
      
	printf("%d\n",*(p+3));
	return 0;
}
