/*
ɸѡ�������� 
*/
# include <stdio.h>
# include <stdlib.h>

void display(int * p,int n);   //��������������� 

void sieve(int n)     //ɸѡ��n���������������� 
{
	int i,j,*s=(int *)calloc(n+1,sizeof(int));   //����һ������Ϊn+1������,��1��n�������±��Ӧ,��������±� 
	if(s==NULL)
	{
	   printf("����ʧ��!\n");    //������ʾ,��̬�ڴ����ʧ�� 
	   exit(1);     //��ֹ����,����Ȩ��������ϵͳ 
    }
    s[0] = s[1] = 1;   //�ж�����ʱҪ��0��1 ����
	 
    for(i=2; i<n+1; i++)
       if(s[i]==0)
          for(j=2*i; j<n+1; j=j+i)  //����i����2,��ô���ı����Ͳ������� 
               s[j] = 1;               //i�ı����������� 
               
    display(s,n+1);    //�������
    free(s);
}

void display(int * p,int n)
{
	int i;
	for(i=0; i<n; i++)
	    if(p[i]==0)   //���������,����� 
	        printf("%d\t",i);
}

int main(void)
{
	sieve(18);        //���18������������  
	
	return 0;
} 
