/*
2015��4��17��23:14:11 
6.7  ϰ���� �ҳ�һ����������İ��� 
*/
# include <stdio.h>
# include <time.h>
# include <stdlib.h> 

void out(int *a)   //������� 
{
	int i,len=0;
	for(i=0; i<100; i++)
	{
		printf("%4d",a[i]);
		len++;               //��¼ÿ�е����� 
		if(len%10==0)
		  printf("\n");   //���ÿ�������ﵽ10������ 
	} 
}

int main(void)
{
	int a[10][10];
	srand(time(0));
	int i,j;
	for(i=0; i<10; i++)        //������Ԫ��һһ��ֵ 
	{
		for(j=0; j<10; j++)
		{
			a[i][j] = j;                    //rand()%100;
		}
	} 
	printf("ԭ����Ϊ:\n");
	out((int*)a);            //ǿ��ת��Ϊ(int*)���� 
	int b[10][10]={0};
	int max=a[0][0];
	int min=a[0][0]; 
	for(i=0; i<10; i++)
	{
		max = a[i][0];       //����max��ÿ�еĵ�һ�� 
		for(j=0; j<10; j++)
		{
			if(a[i][j]>max)
			  max = a[i][j];   //�����һ���и���ľͻ��� 
		} 
		b[i][j-1] = max;    //����j=10,����Ӧ�ü�һ 
	} 
	printf("\nԭ����ÿһ�е����ֵ\n");             //���b���� ��һ���� 
	for(i=0; i<10; i++)
	{
         printf("%4d",b[i][9]);     //ÿһ�е����һ����a������һ�е����ֵ 
         printf("\n");
    }
    
    int row,list,k,have=0,l=0;
	int num[10]={0};                 //��,�� 
    for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			if(a[i][j]==b[i][9])      //�ҵ�a�����е�ÿһ�е����ֵ 
			{
				for(k=0; k<10; k++)   //�ҵ����ֵ��,�ٱȽ����������Ƿ�Ϊ��Сֵ 
				{
				   if(a[i][j]>a[k][j])
				   {
				   	  have++;   //����б���С��,��ô���Ͳ��ǰ��� 
				   }
			    }
				if(have==0)   //���have==0,��ô˵���а��� 
					num[l++] = a[i][j];
			}
		}
	} 
    
    int sum=0;
    for(i=0; i<10; i++)
    {
    	if(num[i]!=0)     //����num��������û�в�Ϊ���Ԫ�� 
		  sum++; 
	}
	if(sum==0)          //���num����ȫΪ0,��û�а��� 
	  printf("������û�а���\n");
	else
	{
		printf("�������а���,����\n");
		for(i=0; i<10; i++)
		{
			if(num[i]!=0)             //�����Щ��ֵ��Ԫ��,���� 
			  printf("%d \n",num[i]); 
		}
	} 
    
	return 0; 
} 
