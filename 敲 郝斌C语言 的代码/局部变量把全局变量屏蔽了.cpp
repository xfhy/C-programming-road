/*
  2015��1��29��09:26:20
  �ֲ�������ȫ�ֱ��������� 
*/
# include <stdio.h>

int i = 10000; 

void f(int i)    //�ֲ�������ȫ�ֵ������ˣ�����ȫ�ֵ�i = 10000,��û�б����ȥ 
{
	 
	printf("i = %d\n",i);
}
int main(void)
{
	f(567);   
	
	return 0;
} 

/*
 ��DEV C++����������ǣ� 
 -------
 i = 567

--------------------------------
Process exited after 0.0996 seconds with return value 0
�밴���������. . .
 ------- 
*/
