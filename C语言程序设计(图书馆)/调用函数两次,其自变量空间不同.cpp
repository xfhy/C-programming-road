/*
2015��2��20��19:51:49
���ú�������,���Ա����ռ䲻ͬ 
�ؾ�:��̬�ڴ� 
*/
# include <stdio.h>
# include <malloc.h>

void f(void)
{
	int * n = (int *)malloc(10*sizeof(int));  //�����˶�̬�ڴ�ǵò鿴�Ƿ����ɹ�(n==NULL?) ,������ 
	printf("&n = %x\n",&*n);
}

int main(void)
{
	f();
	f();
	
	return 0;
} 
