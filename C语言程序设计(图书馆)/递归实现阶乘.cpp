/*
2015��2��19��19:37:09
�ݹ�ʵ�ֽ׳� 
*/
 # include <stdio.h>
 
 long fact(long n)    //�ݹ麯��,������ֱ�ӵݹ�(�Լ������Լ�) 
 {
 	static int x;       //�þ�̬������¼���ô���,xĬ��ֵΪ0 
	 x++;
	 printf("��%d�ε���\n",x); 
 	long c = 1;    //���Ҫ��ʼ��,��Ȼ������ֵ 
 	if(n>1)   
 	   c = n*fact(n-1);   //���￪ʼ�Լ������Լ���,n������С,ֱ��n=1; 
 	return c;   //���ؽ�� 
 }
 
 int main(void)
 {
 	long i; 
 	printf("��������������ĸ����Ľ׳�:\n");
 	scanf("%ld",&i); 
 	long c = fact(i);
 	printf("%ld\n",c);
 	
 	return 0;
 } 
