/*
2015��2��18��16:06:30
joesphus����
ģ����Ϸ:n����Χ����һ��,��ĳ���˿�ʼ��,��˳ʱ�뷽������m,����������˱���̭.
Ȼ������ȥ,����m,����̭һ��,�ظ���������,ֱ��ʣ��1��Ϊֹ,ʣ�µ��������ʤ�� 
*/
# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

void joesphus(int n,int m)
{
	int i,j,*pa;
	pa=(int *)malloc( n * sizeof(int) );  //�������ʾn�� 
	if(pa==NULL)
	{
		printf("����ʧ��!\n");
		exit(1); 
	}
	
	for(i=0; i<n; i++)
	    pa[i] = i+1; 
	    
	i=0; 
	while(n>1) 
	{
		i=(i+m-1)%n;
		printf("\t�������ɵ�Ʊ���̭��   %d \t\n",pa[i]);   //�����̭��
		for(j=i+1; j<n; j++)    //ɾ������̭�� 
		    pa[j-1] = pa[j];
		n--;        //��������
		
		if(n==0)   //����ϴθպ��������,����ӵ�һ����ʼ������ 
		   i=0; 
	}
	printf("\n\t������,����ʤ��Ϊ %d\n",pa[0]);
	free(pa);
} 

int main(void)
{
	int n,m;
	printf("\n\t***************joesphus��Ϸ!*************\n");
	printf("\n����������:");
	scanf("%d",&n); 
	printf("\n��������������:");
	scanf("%d",&m);
	joesphus(n,m);
	
	return 0;
} 
