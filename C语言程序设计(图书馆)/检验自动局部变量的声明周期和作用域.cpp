/*
2015��2��14��13:23:27
�����Զ��ֲ��������������ں������� 
*/
# include <stdio.h>

void abf(void)
{
	int a,b;
	printf("&a = %x, &b = %x\n",&a,&b);
}

void cde()
{
	int c,d;
	printf("&c = %x, &d = %x\n",&c,&d);
}
int main(void)
{
	int x,y;
	printf("main: &x=%x , &y=%x \n",&x,&y);
	abf();
	cde();
	printf("main: &x=%x , &y=%x \n",&x,&y);
	abf(); 
	return 0;
} 

/*
������:
main: &x=28feac , &y=28fea8
&a = 28fe2c, &b = 28fe28
&c = 28fe2c, &d = 28fe28
main: &x=28feac , &y=28fea8

--------------------------------
�ܽ�: �Լ�����ĺ���,�Ⱥ󱻵���,���Է�����Ա����ռ������ͬ 
��Ϊǰ��ռ�õĿռ䱻ϵͳ��������Է�������� 
*/
